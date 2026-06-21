#include "Menu/ingame-menu.h"
#include "Menu/skse-menu.h"
#include "SKSE/API.h"
#include "Utility/util.h"
#include "config.h"
#include "hooks.h"

void Listener(SKSE::MessagingInterface::Message* a_msg)
{
    switch (a_msg->type)
    {
        case SKSE::MessagingInterface::kDataLoaded:
            logs::info("kDataLoaded 1");

            // EXCO::Util::LookupStaminaCostGlobal();
            EXCO::FMenu::RegisterFMenu();
            logs::info("kDataLoaded 2");
            break;
        default:
            break;
    }
}

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
    logs::info("SKSEPluginLoad 1");
    SKSE::Init(a_skse);
    logs::info("SKSEPluginLoad 2");
    // SKSE::AllocTrampoline(14 * 4); // change this to appropriate size - num_hooks * size_bytes
    SKSE::AllocTrampoline(1 << 10); // 1024 bytes
    logs::info("SKSEPluginLoad 3");
    EXCO::HOOKS::InstallHooks();
    logs::info("SKSEPluginLoad 4");

    EXCO::CONFIG::UpdateSettings(false);
    logs::info("SKSEPluginLoad 5");
    EXCO::SKSEMenu::RegisterSKSEMenu();
    logs::info("SKSEPluginLoad 6");
    SKSE::GetMessagingInterface()->RegisterListener(Listener);
    logs::info("SKSEPluginLoad 7");

    return true;
}
