#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <algorithm>
#include <filesystem>
#include <string>

#include "config/config-store.h"
#include "config/settings.h"
#include "hooks.h"
#include "logging.h"
#include "menu/settings-menu.h"
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

void LoadConfig()
{
    auto& settings    = Config::Get();
    const auto report = Config::LoadFromFile(std::filesystem::path(Config::kConfigFilePath), settings);
    SetLogLevel(settings.general.logLevel.GetValue());

    for (const auto& diagnostic : report.diagnostics)
    {
        switch (diagnostic.severity)
        {
            case Config::Severity::Info:
                logs::info("config: {}", diagnostic.message);
                break;
            case Config::Severity::Warning:
                logs::warn("config: {}", diagnostic.message);
                break;
            case Config::Severity::Error:
                logs::error("config: {}", diagnostic.message);
                break;
        }
    }
    logs::info("config loaded from {} ({} warnings, {} errors): bPlayerEnabled = {}, iLogLevel = {}", Config::kConfigFilePath,
               report.Count(Config::Severity::Warning), report.Count(Config::Severity::Error), settings.player.enabled.GetValue(),
               settings.general.logLevel.GetValue());
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
            Menu::Register();
            break;
        default:
            break;
    }
}
} // namespace

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
    SKSE::Init(a_skse);
    Weight::RecordMainThread(); // SKSE loads plugins on the game's main thread

    if (!IsSupportedRuntime(a_skse->RuntimeVersion()))
    {
        return false;
    }

    LoadConfig(); // before hooks: hooks read settings from the first frame

    SKSE::AllocTrampoline(Hooks::kTrampolineBytes);
    Hooks::Install();

    if (!SKSE::GetMessagingInterface()->RegisterListener(OnSkseMessage))
    {
        logs::error("could not register for SKSE messages; equip events and menu will not initialise");
    }
    logs::info("{} loaded", Plugin::kDisplayName);
    return true;
}
