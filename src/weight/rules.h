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

/// What the can-run decision depends on.
struct RunFacts
{
    bool hasProcess = false; // the actor has an AI process
    bool staggered  = false;
    EncumbranceFacts encumbrance;
};

/// Pre-refactor rule: no running while staggered (only checked with an AI process) or while
/// over-encumbered.
[[nodiscard]] constexpr bool CanRun(const RunFacts& a_facts) noexcept
{
    if (a_facts.hasProcess && a_facts.staggered)
    {
        return false;
    }
    return !IsOverEncumbered(a_facts.encumbrance);
}
} // namespace EquipLoad::Rules
