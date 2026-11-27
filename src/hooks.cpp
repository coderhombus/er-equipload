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
#include "globals.h"
#include "mod-data.h"
#include "st-hooks.h"


namespace EXCO::HOOKS
{

#ifdef GetObject
#undef GetObject
#endif

static float CalcEquippedWeightLive(RE::Actor* a_actor)
{
    using func_t = float (*)(RE::Actor*);
    static REL::Relocation<func_t> func{ RELOCATION_ID(37016, 38044) };
    return func(a_actor);
}

bool IsOverEncumberedHook::Call(RE::Actor* a_this)
{
    if (!a_this || !a_this->IsPlayerRef())
        return false;

    if (ActorUtil::IsGod(a_this) || a_this->IsOnMount())
        return false;

    float equipped = CalcEquippedWeightLive(a_this);
    float carry    = a_this->GetActorValue(RE::ActorValue::kCarryWeight);
    RE::BGSEntryPoint::HandleEntryPoint(ENTRIES::maxCarryWeightEP, a_this, &carry);

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
    // logs::info("player update: g_updatePending @ {:p}, value={}", static_cast<void*>(&g_updatePending), g_updatePending.load());
    if (g_updatePending.exchange(false))
    {
        const float equippedWeight = CalcEquippedWeightLive(a_this);
        // logs::info("equippedWeight={}", equippedWeight);
        a_this->SetActorValue(RE::ActorValue::kInventoryWeight, equippedWeight);
    }
    return func(a_this, a_deltaTime);
}

float EXCO::HOOKS::GetWeightInContainerHook::prev_weight = 0.0f;
float GetWeightInContainerHook::Call(RE::TESObjectREFR* a_this)
{
    if (a_this)
    {
        // TODO: only run this if this relates to the player - TRUE
        // logs::info("func(a_this): {}", func(a_this));

        // TODO: check armor weight reduction perks dont reset this - TRUE

        auto* player = RE::PlayerCharacter::GetSingleton();

        float w = CalcEquippedWeightLive(player);
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

    HookUtils::WriteVFunc<RE::PlayerCharacter, 0, 0xad, PlayerUpdateHook>();
    HookUtils::WriteCall5<GetWeightInContainerHook>(RELOCATION_ID(19277, 19703), OFFSET(0x0, 0x4E));
}
} // namespace EXCO::HOOKS
