#include "hooks.h"

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <array>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <styyx-utils.h>

#include "logging.h"
#include "weight/player-weight.h"
#include "weight/rules.h"

// Hook targets are Skyrim AE 1.6.1170 Address Library IDs, offsets and instruction bytes (see
// plugin-info.h for the runtime check), verified against the disassembly in ghidra/. Each hook
// only translates engine arguments and calls into weight/.
//
// Player only: NPCs always get the original function (see weight/player-weight.h).

namespace EquipLoad::Hooks
{
namespace
{
using Prologue = std::array<std::uint8_t, kPrologueBytes>;

// Actor::IsOverEncumbered (ghidra/is_over_encumbered.md). Vanilla: player only, never in god mode
// or mounted, InventoryWeight actor value > carry weight. The mod keeps that structure and
// compares the equipped weight instead.
struct IsOverEncumberedHook
{
    static constexpr REL::ID kID{37453};
    static constexpr Prologue kPrologue{0x40, 0x53, 0x48, 0x83, 0xEC, 0x30}; // push rbx; sub rsp, 0x30

    static bool thunk(RE::Actor* a_this)
    {
        if (!Weight::IsEnabled() || !a_this || !a_this->IsPlayerRef())
        {
            return func(a_this);
        }
        const auto facts  = Weight::GatherEncumbranceFacts(*a_this);
        const bool result = Rules::IsOverEncumbered(facts);

        // Atomic: IsOverEncumbered is also a Papyrus native and can run on script threads.
        static std::atomic_bool lastResult{false};
        if (result != lastResult.exchange(result) && IsDebugEnabled())
        {
            logs::debug("[encumbrance] Player | {} | over-encumbered: {} -> {}", Weight::DescribeWeights(*a_this, facts), !result, result);
        }
        else if (IsTraceEnabled())
        {
            logs::trace("[encumbrance] Player | {} | over-encumbered: {} | vanilla would say: {}", Weight::DescribeWeights(*a_this, facts), result,
                        func(a_this));
        }
        return result;
    }
    static inline REL::Relocation<decltype(thunk)> func;
};

// Actor::CanRun (ghidra/can_run.md). Vanilla blocks running for (1) an AI-process state
// (process->middleHigh+0x2D8 == 7, any actor), (2) the player's InventoryWeight actor value over
// carry weight (not in god mode or mounted), (3) the player holding a heavy object with the grab
// key. The mod adds its equipped-weight block and leaves the decision to vanilla otherwise.
struct CanRunHook
{
    static constexpr REL::ID kID{37235};
    static constexpr Prologue kPrologue{0x40, 0x56, 0x48, 0x83, 0xEC, 0x30}; // push rsi; sub rsp, 0x30

    static bool thunk(RE::Actor* a_this)
    {
        if (!Weight::IsEnabled() || !a_this || !a_this->IsPlayerRef())
        {
            return func(a_this);
        }
        const auto facts    = Weight::GatherEncumbranceFacts(*a_this);
        const auto decision = Rules::DecideRun(facts);
        const bool result   = decision == Rules::RunDecision::kVanilla && func(a_this);

        static std::atomic_bool lastResult{true};
        if (result != lastResult.exchange(result) && IsDebugEnabled())
        {
            logs::debug("[can-run] Player | {} | can run: {} -> {} ({})", Weight::DescribeWeights(*a_this, facts), !result, result,
                        decision == Rules::RunDecision::kBlock ? "blocked by equipped weight" : "vanilla decided");
        }
        else if (IsTraceEnabled())
        {
            logs::trace("[can-run] Player | {} | can run: {} ({})", Weight::DescribeWeights(*a_this, facts), result,
                        decision == Rules::RunDecision::kBlock ? "blocked by equipped weight" : "vanilla decided");
        }
        return result;
    }
    static inline REL::Relocation<decltype(thunk)> func;
};

// Actor::Update for the player (vtable slot 0xAD).
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

// The InventoryChanges::GetInventoryWeight call at TESObjectREFR::GetWeightInContainer+0x4E
// (ghidra/get_weight_in_container.md). GetWeightInContainer runs for every container and NPC
// reference, so only the player's inventory is redirected. Vanilla GetInventoryWeight notifies
// the engine after each recompute; ReportPlayerWeight keeps doing that for the player, which is
// what lets the cached InventoryWeight (and the inventory bottom bar) follow equipment changes
// while menus are open (docs/engine-notes.md).
struct GetInventoryWeightHook
{
    static float Call(RE::InventoryChanges* a_changes)
    {
        auto* player             = RE::PlayerCharacter::GetSingleton();
        const bool ownerIsPlayer = a_changes && player && a_changes->owner == player;
        if (!Rules::UseEquippedWeightForContainer(Weight::IsEnabled(), ownerIsPlayer))
        {
            if (ownerIsPlayer)
            {
                Weight::ForgetReportedWeight(); // disabled: vanilla reports the weight itself
            }
            return func(a_changes);
        }
        const float equipped = Weight::CalcEquippedWeightLive(*player);
        Weight::ReportPlayerWeight(*player, equipped);
        if (IsTraceEnabled())
        {
            logs::trace("[container-weight] Player | equipped weight {:.2f} reported as inventory weight", equipped);
        }
        return equipped;
    }
    static inline REL::Relocation<decltype(Call)> func;
};

/// Branches the function's entry to T::thunk and makes T::func run the original. Refuses when
/// the entry bytes are not the verified prologue (another runtime, or another mod hooked it).
template <class T>
bool InstallPrologueHook(const char* a_name)
{
    const REL::Relocation<std::uintptr_t> target{T::kID};
    if (std::memcmp(reinterpret_cast<const void*>(target.address()), T::kPrologue.data(), T::kPrologue.size()) != 0)
    {
        logs::error("{}: unexpected instructions at the function entry (another mod may hook it); hook not installed, vanilla applies", a_name);
        return false;
    }
    StyyxUtil::HookUtils::hook_function_prologue<T, kPrologueBytes>(target.address());
    return true;
}
} // namespace

void Install()
{
    using StyyxUtil::HookUtils::WriteCall5;
    using StyyxUtil::HookUtils::WriteVFunc;

    const bool overEncumbered = InstallPrologueHook<IsOverEncumberedHook>("Actor::IsOverEncumbered");
    const bool canRun         = InstallPrologueHook<CanRunHook>("Actor::CanRun");
    WriteVFunc<RE::PlayerCharacter, 0, 0xAD, PlayerUpdateHook>();
    WriteCall5<GetInventoryWeightHook>(REL::ID(19703), 0x4E);
    static_assert(kPrologueHookCount == 2 && kCallHookCount == 1, "update the hook counts in hooks.h when adding or removing hooks");

    logs::info("hooks installed: IsOverEncumbered {}, CanRun {}, player update yes, container weight yes", overEncumbered ? "yes" : "NO",
               canRun ? "yes" : "NO");
}
} // namespace EquipLoad::Hooks
