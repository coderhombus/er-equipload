#include "hooks.h"

#include "RE/A/Actor.h"
#include "RE/A/ActorMagicCaster.h"
#include "RE/B/BGSAttackData.h"
#include "RE/C/Character.h"
#include "RE/P/PlayerCharacter.h"
#include "REL/Offset.h"
#include "SKSE/Impl/PCH.h"
#include "Utility/util.h"
#include "manager.h"
#include "mod-data.h"
#include "st-hooks.h"


namespace EXCO::HOOKS
{
bool IsOverEncumberedHook::Call(RE::Actor* a_this)
{
    if (!a_this || !a_this->IsPlayerRef())
        return false;

    if (ActorUtil::IsGod(a_this) || a_this->IsOnMount())
        return false;

    float inventoryWeight = a_this->GetActorValue(RE::ActorValue::kInventoryWeight);
    float equipped        = a_this->GetEquippedWeight();
    float carry           = a_this->GetActorValue(RE::ActorValue::kCarryWeight);
    RE::BGSEntryPoint::HandleEntryPoint(ENTRIES::maxCarryWeightEP, a_this, &carry);

    logs::info("equipped/carry: {} / {} | inv: {}", equipped, carry, inventoryWeight);

    // return equipped > carry;
    return false;
}

bool IsOverEncumberedGameFuncHook::Call(RE::Actor* a_this)
{
    if (!a_this || !a_this->IsPlayerRef())
        return false;

    if (ActorUtil::IsGod(a_this) || a_this->IsOnMount())
        return false;

    float inventoryWeight = a_this->GetActorValue(RE::ActorValue::kInventoryWeight);
    float equipped        = a_this->GetEquippedWeight();
    float carry           = a_this->GetActorValue(RE::ActorValue::kCarryWeight);
    RE::BGSEntryPoint::HandleEntryPoint(ENTRIES::maxCarryWeightEP, a_this, &carry);

    logs::info("equipped/carry: {} / {} | inv: {}", equipped, carry, inventoryWeight);

    return equipped > carry;
}

// float GetInventoryWeightHook::Call(RE::InventoryChanges* a_this)
// {
//     if (!a_this)
//         return 0.0f;

//     float totalWeight = 0.0f;

//     for (auto& entry : *a_this->entryList)
//     {
//         if (!entry || !entry->object)
//             continue;

//         auto* form = entry->object;

//         bool isArmor  = form->IsArmor();
//         bool isWeapon = form->IsWeapon();

//         if (!isArmor && !isWeapon)
//             continue;

//         bool isEquipped = false;

//         if (entry->extraLists)
//         {
//             for (auto* xList : *entry->extraLists)
//             {
//                 if (xList && (xList->HasType(RE::ExtraDataType::kWorn) || xList->HasType(RE::ExtraDataType::kWornLeft)))
//                 {
//                     isEquipped = true;
//                     break;
//                 }
//             }
//         }

//         if (!isEquipped)
//             continue;

//         float weight = form->GetWeight();
//         if (weight <= 0.0f)
//             continue;

//         totalWeight += weight * static_cast<float>(entry->countDelta);
//     }

//     if (a_this->owner)
//     {
//         if (auto* actor = a_this->owner->As<RE::Actor>())
//         {
//             actor->SetActorValue(RE::ActorValue::kInventoryWeight, totalWeight);
//         }
//     }

//     return totalWeight;
// }

float GetInventoryWeightHook::Call(RE::InventoryChanges* a_this)
{
    logs::info("GetInventoryWeightHook - Call");
    bool useEquippedWeight = true;
    if (useEquippedWeight)
    {
        logs::info("GetInventoryWeightHook - useEquippedWeight");

        if (auto owner = a_this ? a_this->owner : nullptr)
        {
            logs::info("GetInventoryWeightHook - owner");

            if (auto actor = owner->As<RE::Actor>())
            {
                logs::info("GetInventoryWeightHook - actor");
                return actor->GetEquippedWeight();
            }
        }
    }
    logs::info("GetInventoryWeightHook - func");

    return func(a_this);
}
void InstallHooks()
{
    logs::info("InstallHooks");

    auto target                = REL::Relocation<std::uintptr_t>{RELOCATION_ID(36457, 37453)};
    IsOverEncumberedHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), IsOverEncumberedHook::Call);

    // auto target2 = REL::Relocation<std::uintptr_t>{RELOCATION_ID(15373, 15496)};
    // GetInventoryWeightHook::func = SKSE::GetTrampoline().write_branch<5>(target2.address(), GetInventoryWeightHook::Call);
    // auto addr = REL::Relocation<std::uintptr_t>{RELOCATION_ID(15883, 16123)}.address();
    // logs::info("GetInventoryWeight addr = {:X}", addr);

    // DWORD oldProtect;
    // VirtualProtect((void*)addr, 5, PAGE_EXECUTE_READWRITE, &oldProtect);

    // std::uint8_t bytes[8];
    // memcpy(bytes, (void*)addr, 8);

    // for (int i = 0; i < 8; i++)
    //     logs::info("byte[{}] = {:02X}", i, bytes[i]);

    // auto target2                 = REL::Relocation<std::uintptr_t>{RELOCATION_ID(15883, 16123)};
    // GetInventoryWeightHook::func = SKSE::GetTrampoline().write_branch<5>(target2.address(), GetInventoryWeightHook::Call);
}
} // namespace EXCO::HOOKS
