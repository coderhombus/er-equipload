#include "hooks.h"

#include "RE/A/Actor.h"
#include "RE/A/ActorMagicCaster.h"
#include "RE/B/BGSAttackData.h"
#include "RE/C/Character.h"
#include "RE/E/ExtraDataList.h"
#include "RE/F/FormTypes.h"
#include "RE/P/PlayerCharacter.h"
#include "REL/Offset.h"
#include "SKSE/Impl/PCH.h"
#include "SKSE/Logger.h"
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

// patch equippedweight for armor perks too
// float GetWeightInContainerHook::Call(RE::TESObjectREFR* a_this)
// {
//     logs::info("GetWeightInContainer called: {:X}", (uintptr_t)a_this);
//     return 0.0f;
// }
float GetWeightInContainerHook2::Call(RE::TESObjectREFR* a_this)
{
    if (a_this)
    {
        logs::info("-----------------------------------");
        RE::FormType a = a_this->GetFormType();
        // logs::info("a FormType: {} ({})", FormTypeToString(a), static_cast<std::uint32_t>(a));

        // logs::info("Is extraList:");
        RE::TESBoundObject* baseObj = a_this->data.objectReference;
        if (baseObj)
        {
            auto f = a_this->extraList.GetDisplayName(baseObj);
            if (f)
            {
                // logs::info("name: {}", f);
                // auto f1 = f->GetFormType();
                // logs::info("f FormType: {} ({})", FormTypeToString(f1), static_cast<std::uint32_t>(f1));
            }
        }

        logs::info("this = {:X}, type = {}, id = {:08X}", reinterpret_cast<uintptr_t>(a_this), static_cast<std::uint32_t>(a_this->GetFormType()),
                   a_this->GetFormID());

        auto* player = RE::PlayerCharacter::GetSingleton();
        logs::info("player = {:X}", reinterpret_cast<uintptr_t>(player));


        logs::info("{} {:08X}", a_this->GetName(), a_this->GetFormID());

        if (auto actor = a_this->As<RE::Actor>())
        {
            logs::info("actor");
        }

        if (a_this == RE::PlayerCharacter::GetSingleton())
        {
            logs::info("PLAYER");
        }

        if (a_this == RE::PlayerCharacter::GetSingleton())
        {
            logs::info("is player");
        }
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

    // target           = REL::Relocation<std::uintptr_t>{RELOCATION_ID(null, 14528)};
    // CanRunHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), CanRunHook::Call);

    // target                         = REL::Relocation<std::uintptr_t>{RELOCATION_ID(19277, 19703)};
    // GetWeightInContainerHook::func = SKSE::GetTrampoline().write_branch<5>(target.address(), GetWeightInContainerHook::Call);

    // (1402e216e - 1402e2120)
    HookUtils::WriteCall5<GetWeightInContainerHook2>(RELOCATION_ID(19277, 19703), OFFSET(0x0, 0x4E));

    // HookUtils::WriteVFunc<RE::PlayerCharacter, 0, 0xad, PlayerUpdateHook>();
}
} // namespace EXCO::HOOKS
