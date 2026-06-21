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
            // EXCO::Util::LookupStaminaCostGlobal();
            EXCO::FMenu::RegisterFMenu();
            break;
        default:
            break;
    }
}

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
    SKSE::Init(a_skse);
    // SKSE::AllocTrampoline(14 * 4); // change this to appropriate size - num_hooks * size_bytes
    SKSE::AllocTrampoline(1 << 10); // 1024 bytes
    EXCO::HOOKS::InstallHooks();

    EXCO::CONFIG::UpdateSettings(false);
    EXCO::SKSEMenu::RegisterSKSEMenu();
    SKSE::GetMessagingInterface()->RegisterListener(Listener);

    return true;
}
