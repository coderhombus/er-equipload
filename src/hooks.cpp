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

    // logs::info("equipped/carry: {} / {} | inv: {}", equipped, carry, inventoryWeight);

    return equipped > carry;
}
bool CanRunHook::Call(RE::Actor* a_this)
{
    if (a_this->currentProcess && a_this->IsStaggered())
        return false;

    return !IsOverEncumberedHook::Call(a_this);
}

void PlayerUpdateHook::Call(RE::PlayerCharacter* a_this, float a_deltaTime)
{
    func(a_this, a_deltaTime);
}

void PlayerHUDEncumberance::Call(RE::Actor* actor, float param2, float param3, float param4)
{
    logs::info("hooked here 12");
    return;
    // func(actor, param2, param3, param4);
}


float GetActorValue::Call(RE::Actor* actor, RE::ActorValue av)
{
    // logs::info("hooked here 1");
    if (actor->IsPlayerRef() && av == RE::ActorValue::kInventoryWeight)
    {
        logs::info("hooked here 2");
    }
    // return 0.0f;
    return func(actor, av);
}

float GetActorValue2::Call(RE::Actor* actor, RE::ActorValue av, std::uint64_t vmArg, double* result)
{
    logs::info("hooked here 1");
    if (actor->IsPlayerRef() && av == RE::ActorValue::kInventoryWeight)
    {
        logs::info("hooked here 2");
    }
    return func(actor, av, vmArg, result);
}

void InstallHooks()
{
    logs::info("InstallHooks");

    auto target                = REL::Relocation<std::uintptr_t>{RELOCATION_ID(36457, 37453)};
    IsOverEncumberedHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), IsOverEncumberedHook::Call);

    target           = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 37235)};
    CanRunHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), CanRunHook::Call);

    // 24774
    // target              = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 24380)}; // TESBaseActor
    // GetActorValue::func = SKSE::GetTrampoline().write_branch<5>(target.address(), GetActorValue::Call);
    // target              = REL::Relocation<std::uin tptr_t>{RELOCATION_ID(null, 24774)}; // TESActorNPC
    // GetActorValue::func = SKSE::GetTrampoline().write_branch<5>(target.address(), GetActorValue::Call);
    // target               = REL::Relocation<std::uintptr_t>{RELOCATION_ID(20966, 21416)}; // GameFunc::native::GetActorValue
    // GetActorValue2::func = SKSE::GetTrampoline().write_branch<5>(target.address(), GetActorValue2::Call);


    // target                      = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 38490)};
    // PlayerHUDEncumberance::func = SKSE::GetTrampoline().write_branch<5>(target.address(), PlayerHUDEncumberance::Call);
    // target                       = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 40537)};
    // PlayerHUDEncumberance2::func = SKSE::GetTrampoline().write_branch<5>(target.address(), PlayerHUDEncumberance2::Call);

    // HookUtils::WriteVFunc<RE::PlayerCharacter, 0, 0xad, PlayerUpdateHook>();
}
} // namespace EXCO::HOOKS
