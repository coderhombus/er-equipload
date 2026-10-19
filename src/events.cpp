#pragma once
#include "RE/A/AIProcess.h"
#include "RE/F/FormTypes.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESEquipEvent.h"
#include "RE/T/TESForm.h"
#include "globals.h"
namespace EXCO
{

class PCManager : public RE::BSTEventSink<RE::TESEquipEvent>
{
  public:
    static PCManager* GetSingleton()
    {
        static PCManager instance;
        return &instance;
    }


    RE::BSEventNotifyControl ProcessEvent(const RE::TESEquipEvent* a_event, RE::BSTEventSource<RE::TESEquipEvent>*)
    {
        if (!a_event)
        {
            return RE::BSEventNotifyControl::kContinue;
        }

        auto* item = RE::TESForm::LookupByID(a_event->baseObject);
        auto actor = a_event->actor;

        if (!actor || !item || !actor->IsPlayerRef())
        {
            return RE::BSEventNotifyControl::kContinue;
        }

        auto* obj = item->As<RE::TESBoundObject>();
        if (!obj)
        {
            return RE::BSEventNotifyControl::kContinue;
        }

        {
            // const bool equipped = a_event->equipped;
            // const auto itemID   = a_event->baseObject;
            // auto* player = RE::PlayerCharacter::GetSingleton();
            // const float equippedWeight  = player->GetEquippedWeight();
            // const float inventoryWeight = player->GetActorValue(RE::ActorValue::kInventoryWeight);
            // auto total_w = player->GetInventoryChanges()->GetInventoryWeight();
            // logs::info("{} item {}, equipped weight: {}, invweight: {}, invchanges: {}", equipped ? "Equipped" : "Unequipped",
            // RE::TESForm::LookupByID(itemID)->GetName(), equippedWeight, inventoryWeight, total_w);
        }

        // logs::info("valid event: g_updatePending @ {:p}, value={}", static_cast<void*>(&g_updatePending), g_updatePending.load());
        g_updatePending.store(true);
        // logs::info("after store: g_updatePending @ {:p}, value={}", static_cast<void*>(&g_updatePending), g_updatePending.load());

        return RE::BSEventNotifyControl::kContinue;
    }
};

} // namespace EXCO
