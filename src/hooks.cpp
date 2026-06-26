#include "hooks.h"

#include "RE/A/Actor.h"
#include "RE/A/ActorMagicCaster.h"
#include "RE/A/ActorValues.h"
#include "RE/B/BGSAttackData.h"
#include "RE/C/Character.h"
#include "RE/E/ExtraDataList.h"
#include "RE/F/FormTypes.h"
#include "RE/P/PlayerCharacter.h"
#include "REL/Offset.h"
#include "SKSE/Impl/PCH.h"
#include "SKSE/Logger.h"
#include "Utility/util.h"
#include "config.h"
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

    // float inventoryWeight = a_this->GetActorValue(RE::ActorValue::kInventoryWeight);
    float equipped = a_this->GetEquippedWeight();
    float carry    = a_this->GetActorValue(RE::ActorValue::kCarryWeight);
    RE::BGSEntryPoint::HandleEntryPoint(ENTRIES::maxCarryWeightEP, a_this, &carry);

    // logs::info("equipped/carry: {} / {} | inv: {}", equipped, carry, inventoryWeight);

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


float GetWeightInContainerHook2::Call(RE::TESObjectREFR* a_this)
{
    if (a_this)
    {
        auto* player = RE::PlayerCharacter::GetSingleton();
        float w      = player->GetEquippedWeight();
        SKSE::GetTaskInterface()->AddTask([player, w]() { player->SetActorValue(RE::ActorValue::kInventoryWeight, w); });
        return w;
    }

    return func(a_this);
}


void InstallHooks()
{
    logs::info("InstallHooks");

    auto target                = REL::Relocation<std::uintptr_t>{RELOCATION_ID(36457, 37453)};
    IsOverEncumberedHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), IsOverEncumberedHook::Call);

    target           = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 37235)};
    CanRunHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), CanRunHook::Call);

    HookUtils::WriteCall5<GetWeightInContainerHook2>(RELOCATION_ID(19277, 19703), OFFSET(0x0, 0x4E));
}
} // namespace EXCO::HOOKS
