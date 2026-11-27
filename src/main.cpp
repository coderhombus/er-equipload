#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <algorithm>
#include <string>

#include "Menu/ingame-menu.h"
#include "config.h"
#include "hooks.h"
#include "logging.h"
#include "plugin-info.h"
#include "weight/player-weight.h"

namespace
{
using namespace EquipLoad;

bool IsSupportedRuntime(const REL::Version& a_runtime)
{
    if (std::ranges::find(Plugin::kSupportedRuntimes, a_runtime) != Plugin::kSupportedRuntimes.end())
    {
        logs::info("runtime {} is supported", a_runtime.string());
        return true;
    }
    if (!Plugin::kEnforceSupportedRuntime)
    {
        logs::warn("runtime {} is not supported, but the runtime check is disabled in this build; hooks may be wrong", a_runtime.string());
        return true;
    }
    std::string supported;
    for (const auto& version : Plugin::kSupportedRuntimes)
    {
        supported += (supported.empty() ? "" : ", ") + version.string();
    }
    logs::critical("runtime {} is not supported (supported: {}); {} will not load", a_runtime.string(), supported, Plugin::kDisplayName);
    return false;
}

void OnSkseMessage(SKSE::MessagingInterface::Message* a_message)
{
    if (!a_message)
    {
        return;
    }
    switch (a_message->type)
    {
        case SKSE::MessagingInterface::kPostLoad:
            Weight::RegisterEquipEventSink();
            break;
        case SKSE::MessagingInterface::kDataLoaded:
            EXCO::FMenu::RegisterFMenu();
            break;
        default:
            break;
    }
}
} // namespace

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
    SKSE::Init(a_skse);

    if (!IsSupportedRuntime(a_skse->RuntimeVersion()))
    {
        return false;
    }

    SKSE::AllocTrampoline(Hooks::kTrampolineBytes);
    Hooks::Install();

    EXCO::CONFIG::UpdateSettings(false);
    if (!SKSE::GetMessagingInterface()->RegisterListener(OnSkseMessage))
    {
        logs::error("could not register for SKSE messages; equip events and menu will not initialise");
    }
    logs::info("{} loaded", Plugin::kDisplayName);
    return true;
}
