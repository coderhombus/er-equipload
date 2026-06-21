#include "hooks.h"

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

// needed cause for NPCs, the update function appears to have a delta of 0.
// always
// static float GetEffectiveDelta(float a_deltaTime)
// {
//     if (a_deltaTime > 0.0f)
//         return a_deltaTime;

//     if (const auto* timer = RE::BSTimer::GetSingleton())
//         return timer->realTimeDelta;
//     return (float)0.016833;
// }


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

    return equipped > carry;
}

void InstallHooks()
{
    auto target                = REL::Relocation<std::uintptr_t>{RELOCATION_ID(36457, 37453)};
    IsOverEncumberedHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), IsOverEncumberedHook::Call);
}
} // namespace EXCO::HOOKS
