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

        g_updatePending = true;

        return RE::BSEventNotifyControl::kContinue;
    }

    //     auto* item = RE::TESForm::LookupByID(a_event->baseObject);
    //     auto check = [&](const char* label)
    //     {
    //         {
    //             auto actor = a_event->actor;

    //             // if (actor && (actor->IsPlayerRef() || actor->IsPlayerTeammate()) && item)
    //             if (actor && item && actor->IsPlayerRef())
    //             {
    //                 if (auto* obj = item->As<RE::TESBoundObject>())
    //                 {
    //                     // logs::info("{} dagger? {}", label, obj->HasKeywordByEditorID("WeapTypeDagger"));
    //                     SKSE::GetTaskInterface()->AddTask(
    //                         [label, obj]()
    //                         {
    //                             auto* player = RE::PlayerCharacter::GetSingleton();
    //                             float w      = player->GetEquippedWeight();
    //                             float p      = player->GetActorValue(RE::ActorValue::kInventoryWeight);
    //                             logs::info("1 {} item {}, equipped weight: {}, invweight: {}", label, obj->GetName(), w, p);
    //                             // player->SetActorValue(RE::ActorValue::kInventoryWeight, w);
    //                         });
    //                     auto* player = RE::PlayerCharacter::GetSingleton();
    //                     float w      = player->GetEquippedWeight();
    //                     float p      = player->GetActorValue(RE::ActorValue::kInventoryWeight);
    //                     logs::info("2 {} item {}, equipped weight: {}, invweight: {}", label, obj->GetName(), w, p);
    //                     player->SetActorValue(RE::ActorValue::kInventoryWeight, w);
    //                 }
    //             }
    //         }
    //     };

    //     if (a_event->equipped)
    //     {
    //         check("Equipped");
    //     }
    //     else
    //     {

    //         check("Unequipped");
    //     }

    //     return RE::BSEventNotifyControl::kContinue;
    // }


    // if (const auto actor = a_event->->As<RE::Actor>(); actor && !actor->IsPlayerRef())
    // {
    //     if (const auto npc = actor->GetActorBase(); npc)
    //     {
    //         logs::info("help");

    //         // get info about npc/actor
    //         // auto npcData = NPCData(actor, npc, true);

    //         // execute distribution
    //         // Distribute(npcData);

    //         // AddObjectsToContainer (objects)
    //     }
    // }

    // Add to Death NPC - should move to SPID based later
    /*
    assert(data.IsDead() || data.IsDying());

    GET pc level mult
    const auto input = PCLevelMult::Input{ data.GetActor(), data.GetNPC(), false };

    GET which perks they have
    figure out which associated items to add - game logic / balance
    match item via JSONs
    add:
      saved-baked: actor->AddObjectToContainer(object.first, nullptr, object.second, actor); - needs to be re-validated before adding - or skip if
    already has perk item regenerated: npc->AddObjectsToContainer(a_objects, npc);
    */
};
} // namespace EXCO
