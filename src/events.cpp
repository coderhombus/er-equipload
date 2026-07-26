#pragma once
#include "RE/A/AIProcess.h"
#include "RE/F/FormTypes.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESEquipEvent.h"
#include "RE/T/TESForm.h"

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

    // RE::BSEventNotifyControl ProcessEvent(const RE::TESEquipEvent* a_event, RE::BSTEventSource<RE::TESEquipEvent>*)
    // {
    //     if (!a_event)
    //     {
    //         return RE::BSEventNotifyControl::kContinue;
    //     }

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

        const bool equipped = a_event->equipped;
        const auto itemID   = a_event->baseObject;

        // SKSE::GetTaskInterface()->AddTask(
        // [equipped, itemID]()
        {
            auto* player = RE::PlayerCharacter::GetSingleton();
            // if (!player)
            // {
            //     return;
            // }

            const float equippedWeight  = player->GetEquippedWeight();
            const float inventoryWeight = player->GetActorValue(RE::ActorValue::kInventoryWeight);

            auto total_w = player->GetInventoryChanges()->GetInventoryWeight();
            logs::info("{} item {}, equipped weight: {}, invweight: {}, invchanges: {}", equipped ? "Equipped" : "Unequipped",
                       RE::TESForm::LookupByID(itemID)->GetName(), equippedWeight, inventoryWeight, total_w);

            player->SetActorValue(RE::ActorValue::kInventoryWeight, equippedWeight);
        }

        // ===================================================================================
        {
            // RE::ActorValue av = RE::ActorValue::kInventoryWeight;
            // auto* avInfo      = RE::ActorValueList::GetSingleton()->GetActorValueInfo(av);

            // std::uint32_t cacheIndex = avInfo->isNthAICachedCurrentValue;

            // logs::info("InventoryWeight: flags = {:X}, cache index = {}", avInfo->flags.underlying(), avInfo->isNthAICachedCurrentValue);

            auto* player = RE::PlayerCharacter::GetSingleton();
            // if (!player)
            // {
            //     return RE::BSEventNotifyControl::kContinue;
            // }

            auto* avInfo = RE::ActorValueList::GetSingleton()->GetActorValueInfo(RE::ActorValue::kInventoryWeight);

            if (!avInfo)
            {
                logs::info("failed avinfo");
                return RE::BSEventNotifyControl::kContinue;
            }

            //===========================
            {

                auto computedBase = avInfo->computeBaseFunc(player, static_cast<std::uint32_t>(RE::ActorValue::kInventoryWeight));
                logs::info("computed InventoryWeight = {}", computedBase);

                // Address finder
                auto base = reinterpret_cast<std::uintptr_t>(GetModuleHandleW(L"SkyrimSE.exe"));
                auto func = reinterpret_cast<std::uintptr_t>(avInfo->computeBaseFunc);

                // logs::info("Skyrim base = {:X}", base);
                // logs::info("InventoryWeight computeBaseFunc = {:p}", reinterpret_cast<void*>(avInfo->computeBaseFunc));

                auto address = reinterpret_cast<std::uintptr_t>(avInfo->computeBaseFunc);

                auto* bytes = reinterpret_cast<const std::uint8_t*>(address);

                logs::info("Bytes: {:02X} {:02X} {:02X} {:02X} {:02X} {:02X} {:02X} {:02X}", bytes[0], bytes[1], bytes[2], bytes[3], bytes[4],
                           bytes[5], bytes[6], bytes[7]);
                logs::info("computeBaseFunc = {:X}, base = {:X}, RVA = {:X}", func, base, func - base);
            }
            //===========================

            if (!avInfo->flags.all(RE::ActorValueInfo::ActorValueFlag::kAIProcessCachesCurrentValue))
            {
                logs::info("failed avinfo flags");
                return RE::BSEventNotifyControl::kContinue;
            }

            auto* process = player->currentProcess;
            if (!process || !process->cachedValues)
            {
                logs::info("failed process");
                return RE::BSEventNotifyControl::kContinue;
            }

            const auto index = avInfo->isNthAICachedCurrentValue;
            auto& cache      = process->cachedValues->actorValueCache;

            if (index >= cache.size())
            {
                logs::info("failed size");
                return RE::BSEventNotifyControl::kContinue;
            }

            logs::info("cache[index].value: {}, invalid: {}", cache[index].value, cache[index].invalid);

            // cache[index].value = newWeight;
            // cache[index].invalid = false;
        }

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
