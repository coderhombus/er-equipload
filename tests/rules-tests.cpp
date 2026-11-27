// Characterisation tests: these pin the encumbrance decisions as the mod made them before the
// refactor. Changing an expected value here is a gameplay change and needs a deliberate decision.

#include <doctest/doctest.h>
#include <limits>

#include "weight/rules.h"

using namespace EquipLoad::Rules;

namespace
{
constexpr float kNaN = std::numeric_limits<float>::quiet_NaN();

EncumbranceFacts Player(float a_equipped, float a_carry)
{
    return EncumbranceFacts{.isPlayer = true, .godMode = false, .mounted = false, .equippedWeight = a_equipped, .carryWeight = a_carry};
}
} // namespace

TEST_CASE("IsOverEncumbered: equipped weight against carry weight")
{
    CHECK(IsOverEncumbered(Player(301.0f, 300.0f)));
    CHECK_FALSE(IsOverEncumbered(Player(300.0f, 300.0f))); // equal is not over
    CHECK_FALSE(IsOverEncumbered(Player(0.0f, 300.0f)));
    CHECK_FALSE(IsOverEncumbered(Player(0.0f, 0.0f)));
    CHECK(IsOverEncumbered(Player(0.1f, 0.0f)));         // zero carry weight: anything equipped is too much
    CHECK(IsOverEncumbered(Player(0.0f, -5.0f)));        // negative carry weight (debuffs)
    CHECK_FALSE(IsOverEncumbered(Player(kNaN, 300.0f))); // NaN never encumbers
    CHECK_FALSE(IsOverEncumbered(Player(300.0f, kNaN)));
    CHECK(IsOverEncumbered(Player(std::numeric_limits<float>::max(), 300.0f)));
}

TEST_CASE("IsOverEncumbered: skipped for NPCs, god mode and mounted")
{
    auto npc     = Player(1000.0f, 1.0f);
    npc.isPlayer = false;
    CHECK_FALSE(IsOverEncumbered(npc));

    auto god    = Player(1000.0f, 1.0f);
    god.godMode = true;
    CHECK_FALSE(IsOverEncumbered(god));

    auto mounted    = Player(1000.0f, 1.0f);
    mounted.mounted = true;
    CHECK_FALSE(IsOverEncumbered(mounted));
}

TEST_CASE("DecideRun: equipped weight blocks the player; everything else is vanilla's decision")
{
    CHECK(DecideRun(Player(301.0f, 300.0f)) == RunDecision::kBlock);
    CHECK(DecideRun(Player(300.0f, 300.0f)) == RunDecision::kVanilla);
    CHECK(DecideRun(Player(10.0f, 300.0f)) == RunDecision::kVanilla);

    auto god    = Player(1000.0f, 1.0f);
    god.godMode = true;
    CHECK(DecideRun(god) == RunDecision::kVanilla);

    auto mounted    = Player(1000.0f, 1.0f);
    mounted.mounted = true;
    CHECK(DecideRun(mounted) == RunDecision::kVanilla);

    auto npc     = Player(1000.0f, 1.0f);
    npc.isPlayer = false;
    CHECK(DecideRun(npc) == RunDecision::kVanilla);
}

TEST_CASE("Container weight: equipped weight only for the player's inventory, only while enabled")
{
    CHECK(UseEquippedWeightForContainer(true, true));
    CHECK_FALSE(UseEquippedWeightForContainer(true, false)); // NPCs, followers, chests keep their vanilla weight
    CHECK_FALSE(UseEquippedWeightForContainer(false, true)); // disabled: vanilla everywhere
    CHECK_FALSE(UseEquippedWeightForContainer(false, false));
}
