#include "Menu/ingame-menu.h"
#include "SKSE/API.h"
#include "Utility/util.h"
#include "config.h"
#include "events.cpp"
#include "hooks.h"

void Listener(SKSE::MessagingInterface::Message* a_msg)
{
    switch (a_msg->type)
    {
        case SKSE::MessagingInterface::kDataLoaded:

            // EXCO::Util::LookupStaminaCostGlobal();
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

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
    SKSE::Init(a_skse);
    // SKSE::AllocTrampoline(14 * 4); // change this to appropriate size - num_hooks * size_bytes
    SKSE::AllocTrampoline(1 << 10); // 1024 bytes
    EXCO::HOOKS::InstallHooks();

    EXCO::CONFIG::UpdateSettings(false);
    SKSE::GetMessagingInterface()->RegisterListener(Listener);

    return true;
}
