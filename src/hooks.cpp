#include "hooks.h"

#include "RE/A/Actor.h"
#include "RE/A/ActorMagicCaster.h"
#include "RE/A/ActorState.h"
#include "RE/A/ActorValueOwner.h"
#include "RE/A/ActorValues.h"
#include "RE/B/BGSAttackData.h"
#include "RE/C/Character.h"
#include "RE/E/ExtraDataList.h"
#include "RE/F/FormTypes.h"
#include "RE/I/InventoryEntryData.h"
#include "RE/P/PlayerCharacter.h"
#include "REL/Offset.h"
#include "SKSE/Impl/PCH.h"
#include "SKSE/Logger.h"
#include "Utility/util.h"
#include "config.h"
#include "mod-data.h"
#include "st-hooks.h"


namespace EXCO::HOOKS
{

#ifdef GetObject
#undef GetObject
#endif

bool IsOverEncumberedHook::Call(RE::Actor* a_this)
{

    if (!a_this || !a_this->IsPlayerRef())
        return false;

    if (ActorUtil::IsGod(a_this) || a_this->IsOnMount())
        return false;

    // float inventoryWeight = a_this->GetActorValue(RE::ActorValue::kInventoryWeight);
    float equipped = a_this->GetEquippedWeight();
    float carry    = a_this->GetActorValue(RE::ActorValue::kCarryWeight);
    RE::BGSEntryPoint::HandleEntryPoint(ENTRIES::maxCarryWeightEP, a_this, &carry);

    // logs::info("equipped/carry: {} / {} | inv: {}", equipped, carry, inventoryWeight);

    // {

    //     auto* player = a_this; // RE::PlayerCharacter::GetSingleton();
    //     auto** vtbl  = *reinterpret_cast<std::uintptr_t***>(player);

    //     logs::info("player vtable: {:X}", reinterpret_cast<std::uintptr_t>(vtbl));
    //     logs::info("slot 0x121: {:X}", reinterpret_cast<std::uintptr_t>(vtbl[0x121]));
    //     logs::info("RE::VTABLE_Actor[0]: {:X}", RE::VTABLE_Actor[0].address());

    //     auto** runtimeVtable = *reinterpret_cast<std::uintptr_t***>(player);
    //     for (std::size_t i = 0; i < std::size(RE::VTABLE_Actor); ++i)
    //     {
    //         logs::info("Actor vtable[{}]: {:X}", i, RE::VTABLE_Actor[i].address());
    //     }
    // }
    return equipped > carry;
}
bool CanRunHook::Call(RE::Actor* a_this)
{
    if (a_this->currentProcess && a_this->IsStaggered())
        return false;

    // if (ActorUtil::IsGod(a_this) || a_this->IsOnMount())
    //     return true;
    return !IsOverEncumberedHook::Call(a_this);
}
void PlayerUpdateHook::Call(RE::PlayerCharacter* a_this, float a_deltaTime)
{
    // auto state = RE::PlayerCharacter::GetSingleton()->GetLifeState();
    // if (state == RE::ACTOR_LIFE_STATE::kDead)
    // {
    //     logs::info("player is dead");
    // }
    // else
    // {
    //     logs::info("player is not dead: {}", (int)state);
    // }
    return func(a_this, a_deltaTime);
}

float EXCO::HOOKS::GetWeightInContainerHook::prev_weight = 0.0f;
float GetWeightInContainerHook::Call(RE::TESObjectREFR* a_this)
{
    if (a_this)
    {
        // TODO: only run this if this relates to the player
        // TODO: check armor weight reduction perks dont reset this
        auto* player = RE::PlayerCharacter::GetSingleton();
        float w      = player->GetEquippedWeight();
        // logs::info("float: {}", w);
        // float difference = 0.0;
        // if (w != prev_weight)
        // {
        //     logs::info("------------");
        //     difference = w - prev_weight;
        //     logs::info("weight: {}, prev: {}, difference: {}", w, prev_weight, difference);
        //     prev_weight = w;
        //     if (difference > 0)
        //     {
        //         // player->RestoreActorValue(RE::ActorValue::kInventoryWeight, difference);
        //     }
        //     else
        //     {
        //         // player->DamageActorValue(RE::ActorValue::kInventoryWeight, difference);
        //     }
        //     logs::info("inventory weight current: {}", player->GetActorValue(RE::ActorValue::kInventoryWeight));
        // }
        // SKSE::GetTaskInterface()->AddTask([player, w]() { player->SetActorValue(RE::ActorValue::kInventoryWeight, w); });
        logs::info("GetWeightInContainerHook:m {}", w);
        return w;
    }


    return func(a_this);
}

void InstallHooks()
{
    logs::info("InstallHooks");

    auto target                = REL::Relocation<std::uintptr_t>{RELOCATION_ID(36457, 37453)};
    IsOverEncumberedHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), IsOverEncumberedHook::Call);

    target           = REL::Relocation<std::uintptr_t>{RELOCATION_ID(NULL, 37235)};
    CanRunHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), CanRunHook::Call);

    HookUtils::WriteVFunc<RE::PlayerCharacter, 6, 0xad, PlayerUpdateHook>();
    HookUtils::WriteCall5<GetWeightInContainerHook>(RELOCATION_ID(19277, 19703), OFFSET(0x0, 0x4E));
}
} // namespace EXCO::HOOKS
