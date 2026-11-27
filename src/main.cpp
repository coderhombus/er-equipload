#include <algorithm>
#include <string>

#include "Menu/ingame-menu.h"
#include "SKSE/API.h"
#include "Utility/util.h"
#include "config.h"
#include "events.cpp"
#include "hooks.h"
#include "plugin-info.h"

void Listener(SKSE::MessagingInterface::Message* a_msg)
{
    switch (a_msg->type)
    {
        case SKSE::MessagingInterface::kDataLoaded:

            EXCO::FMenu::RegisterFMenu();
            break;
        case SKSE::MessagingInterface::kPostLoad:
            if (const auto scripts = RE::ScriptEventSourceHolder::GetSingleton())
            {
                scripts->PrependEventSink<RE::TESEquipEvent>(EXCO::PCManager::GetSingleton());
                logs::info("\t\tRegistered for {}", typeid(RE::TESEquipEvent).name());
            }
            break;
        default:
            break;
    }
}

namespace
{
bool IsSupportedRuntime(const REL::Version& a_runtime)
{
    using namespace EquipLoad;
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
} // namespace

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
    SKSE::Init(a_skse);

    if (!IsSupportedRuntime(a_skse->RuntimeVersion()))
    {
        return false;
    }
    // SKSE::AllocTrampoline(14 * 4); // change this to appropriate size - num_hooks * size_bytes
    SKSE::AllocTrampoline(1 << 10); // 1024 bytes
    EXCO::HOOKS::InstallHooks();

    EXCO::CONFIG::UpdateSettings(false);
    SKSE::GetMessagingInterface()->RegisterListener(Listener);

    return true;
}
