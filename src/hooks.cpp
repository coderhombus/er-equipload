#include "hooks.h"

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <styyx-utils.h>

#include "logging.h"
#include "weight/player-weight.h"
#include "weight/rules.h"

// Hook targets are Skyrim AE 1.6.1170 Address Library IDs and offsets (see plugin-info.h for the
// runtime check). Each hook only translates engine arguments and calls into weight/.

namespace EquipLoad::Hooks
{
namespace
{
// Replaces Actor::IsOverEncumbered (full replacement: `func` is not callable).
struct IsOverEncumberedHook
{
    static bool Call(RE::Actor* a_this)
    {
        if (!a_this)
        {
            return false;
        }
        return Rules::IsOverEncumbered(Weight::GatherEncumbranceFacts(*a_this));
    }
};

// Replaces Actor::CanRun (full replacement: `func` is not callable).
struct CanRunHook
{
    static bool Call(RE::Actor* a_this)
    {
        if (!a_this)
        {
            return true;
        }
        return Rules::CanRun({.hasProcess  = a_this->currentProcess != nullptr,
                              .staggered   = a_this->IsStaggered(),
                              .encumbrance = Weight::GatherEncumbranceFacts(*a_this)});
    }
};

struct PlayerUpdateHook
{
    static void Call(RE::PlayerCharacter* a_this, float a_deltaTime)
    {
        if (a_this)
        {
            Weight::ApplyPendingSync(*a_this);
        }
        func(a_this, a_deltaTime);
    }
    static inline REL::Relocation<decltype(Call)> func;
};

// The InventoryChanges::GetInventoryWeight call inside TESObjectREFR::GetWeightInContainer.
struct GetInventoryWeightHook
{
    static float Call(RE::InventoryChanges* a_changes)
    {
        if (a_changes)
        {
            if (auto* player = RE::PlayerCharacter::GetSingleton())
            {
                return Weight::CalcEquippedWeightLive(*player);
            }
        }
        return func(a_changes);
    }
    static inline REL::Relocation<decltype(Call)> func;
};
} // namespace

void Install()
{
    using StyyxUtil::HookUtils::WriteCall5;
    using StyyxUtil::HookUtils::WriteVFunc;

    auto& trampoline = SKSE::GetTrampoline();
    trampoline.write_branch<5>(REL::Relocation<std::uintptr_t>{REL::ID(37453)}.address(), IsOverEncumberedHook::Call); // Actor::IsOverEncumbered
    trampoline.write_branch<5>(REL::Relocation<std::uintptr_t>{REL::ID(37235)}.address(), CanRunHook::Call);           // Actor::CanRun

    WriteVFunc<RE::PlayerCharacter, 0, 0xAD, PlayerUpdateHook>();                                                      // Actor::Update
    WriteCall5<GetInventoryWeightHook>(REL::ID(19703), 0x4E); // TESObjectREFR::GetWeightInContainer
    static_assert(kTrampolineHookCount == 3, "update kTrampolineHookCount when adding or removing trampoline hooks");

    logs::info("installed {} trampoline hooks and 1 virtual hook", kTrampolineHookCount);
}
} // namespace EquipLoad::Hooks
