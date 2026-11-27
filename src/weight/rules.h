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
    float carryWeight    = 0.0f; // CarryWeight actor value after the "Get Max Carry Weight" perk entry point
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
} // namespace EquipLoad::Rules
