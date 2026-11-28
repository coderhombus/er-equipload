#pragma once

// Encumbrance decision rules. Engine-independent (no RE/SKSE): engine code gathers the facts
// from game objects, these functions decide. Unit-tested in tests/rules-tests.cpp.

namespace EquipLoad::Rules
{
/// What the over-encumbrance decision depends on, gathered from the actor by engine code.
struct EncumbranceFacts
{
    bool isPlayer        = false;
    bool godMode         = false;
    bool mounted         = false;
    float equippedWeight = 0.0f; // weight of equipped items only (the mod's replacement for inventory weight)
    float carryWeight    = 0.0f; // Actor::GetTotalCarryWeight: CarryWeight actor value after the "Get Max Carry Weight" perk entry point
};

/// Over-encumbered when equipped items weigh more than the carry weight. Mirrors vanilla
/// Actor::IsOverEncumbered (player only; never in god mode or mounted), with equipped weight in
/// place of inventory weight. Equal weights are not over-encumbered; NaN compares false.
[[nodiscard]] constexpr bool IsOverEncumbered(const EncumbranceFacts& a_facts) noexcept
{
    if (!a_facts.isPlayer || a_facts.godMode || a_facts.mounted)
    {
        return false;
    }
    return a_facts.equippedWeight > a_facts.carryWeight;
}

/// Outcome of the player's can-run check.
enum class RunDecision
{
    kBlock,   // over-encumbered by equipped weight: the player cannot run
    kVanilla, // vanilla Actor::CanRun decides (its process-state and heavy-grab checks still apply)
};

/// The mod only adds the equipped-weight block; every other reason vanilla has for stopping a
/// run stays with vanilla (ghidra/can_run.md).
[[nodiscard]] constexpr RunDecision DecideRun(const EncumbranceFacts& a_facts) noexcept
{
    return IsOverEncumbered(a_facts) ? RunDecision::kBlock : RunDecision::kVanilla;
}

/// Whether TESObjectREFR::GetWeightInContainer should report equipped weight instead of the
/// inventory weight. It runs for every container and NPC reference; only the player's changes.
[[nodiscard]] constexpr bool UseEquippedWeightForContainer(bool a_enabled, bool a_ownerIsPlayer) noexcept
{
    return a_enabled && a_ownerIsPlayer;
}
/// Marks "no weight reported yet" (equipped weight is never negative).
inline constexpr float kNoWeightReported = -1.0f;

/// What the engine has been told about the player's equipped weight.
struct WeightReportState
{
    float reported  = kNoWeightReported; // last value reported (drives cache invalidation)
    float announced = kNoWeightReported; // last value announced with a real change (drives the crossing message)
};

/// The InventoryWeight notification to send (ghidra: vanilla GetInventoryWeight sends
/// SendActorValueUpdate(actor, InventoryWeight, old, new - old) after every recompute; its sink
/// drops the cached value and, for an upward crossing of the carry weight, queues "You are
/// carrying too much").
struct WeightNotification
{
    bool send   = false;
    float old   = 0.0f;
    float delta = 0.0f;
    WeightReportState next;
};

/// - First report: zero change (only invalidates the cache); the value becomes the baseline.
/// - While the game is paused (menus): a zero-change notification for every new value, so the
///   bottom bar redraws with it, but no announcement: repeated crossings in a menu would each
///   queue a message.
/// - Otherwise: the change since the last announcement, so one message per real crossing, and
///   after a menu the net change of the whole menu session at once.
[[nodiscard]] constexpr WeightNotification DecideWeightNotification(WeightReportState a_state, float a_current, bool a_gamePaused) noexcept
{
    const bool changed = a_state.reported < 0.0f || a_state.reported != a_current;
    if (a_state.announced < 0.0f)
    {
        return {.send = true, .old = a_current, .delta = 0.0f, .next = {a_current, a_current}};
    }
    if (!a_gamePaused && a_state.announced != a_current)
    {
        return {.send = true, .old = a_state.announced, .delta = a_current - a_state.announced, .next = {a_current, a_current}};
    }
    if (changed)
    {
        return {.send = true, .old = a_current, .delta = 0.0f, .next = {a_current, a_state.announced}};
    }
    return {.next = a_state};
}

} // namespace EquipLoad::Rules
