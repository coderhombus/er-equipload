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

void PlayerMovementEncumberanceCheckHook::Call(RE::PlayerCharacter* a_this, void* unused, float previousWeight, float weightDelta)
{
    return;
}

float HUDEncumberanceUseEquippedWeight::Call(void* self, uint32_t, float, float)
{
    return 0.0f;
}

void InstallHooks()
{
    logs::info("InstallHooks");

    auto target                = REL::Relocation<std::uintptr_t>{RELOCATION_ID(36457, 37453)};
    IsOverEncumberedHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), IsOverEncumberedHook::Call);

    target           = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 37235)};
    CanRunHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), CanRunHook::Call);

    // target = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 38490), OFFSET(null, 0x61)};
    // REL::make_pattern<"FF">().match_or_fail(target.address());
    // HookUtils::WriteCall5<HUDEncumberanceUseEquippedWeight>(RELOCATION_ID(null, 38490), OFFSET(null, 0x61));

    target = REL::Relocation<std::uintptr_t>(RELOCATION_ID(null, 38490), OFFSET(null, 0x61));
    // return site
    EncumbranceFactorHook_Code code(target.address());

    auto& trampoline = SKSE::GetTrampoline();
    void* mem        = trampoline.allocate(code.getSize());
    std::memcpy(mem, code.getCode(), code.getSize());
    // trampoline.write_call<5>(target.address(), mem);
    trampoline.write_branch<6>(target.address(), mem);

    // target                                    = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 38490)}; // obtained from offset.txt
    // PlayerMovementEncumberanceCheckHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), PlayerMovementEncumberanceCheckHook::Call);
    // HookUtils::WriteVFunc<RE::ActorValueOwner, 0, 1, GetActorValueHook>();

    // HookUtils::WriteVFunc<RE::PlayerCharacter, 1, 0x1, HUDEncumberanceUseEquippedWeight>();

    // HookUtils::WriteCall5<PlayerMovementEncumberanceCheckHook>(RELOCATION_ID(null, 38490), OFFSET(null, 0x5C));
    // target                                    = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 38490), OFFSET(null, 61)};
    // PlayerMovementEncumberanceCheckHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), HUDEncumberanceUseEquippedWeight::Call);

    // HookUtils::WriteVFunc<RE::PlayerCharacter, 0, 0xad, PlayerUpdateHook>();
}
} // namespace EXCO::HOOKS
