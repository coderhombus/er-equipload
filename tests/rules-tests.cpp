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

TEST_CASE("Weight notification: first report only invalidates and sets the baseline")
{
    const auto first = DecideWeightNotification({}, 52.0f, false);
    CHECK(first.send);
    CHECK(first.old == 52.0f);
    CHECK(first.delta == 0.0f);
    CHECK(first.next.reported == 52.0f);
    CHECK(first.next.announced == 52.0f);

    const auto pausedFirst = DecideWeightNotification({}, 52.0f, true);
    CHECK(pausedFirst.send);
    CHECK(pausedFirst.delta == 0.0f);
}

TEST_CASE("Weight notification outside menus: every change announced, unchanged sends nothing")
{
    const WeightReportState at52{52.0f, 52.0f};
    CHECK_FALSE(DecideWeightNotification(at52, 52.0f, false).send);

    const auto up = DecideWeightNotification(at52, 57.0f, false);
    CHECK(up.send);
    CHECK(up.old == 52.0f);
    CHECK(up.delta == 5.0f);
    CHECK(up.next.reported == 57.0f);
    CHECK(up.next.announced == 57.0f);

    const auto down = DecideWeightNotification(up.next, 52.0f, false);
    CHECK(down.old == 57.0f);
    CHECK(down.delta == -5.0f);
}

TEST_CASE("Weight notification in a paused menu: invalidate only, then the net change once")
{
    // round-4 log: helmet on/off five times with the inventory open, 0 <-> 5
    WeightReportState state{0.0f, 0.0f};
    for (int i = 0; i < 5; ++i)
    {
        const auto on = DecideWeightNotification(state, 5.0f, true);
        CHECK(on.send);
        CHECK(on.delta == 0.0f); // no crossing message can be queued
        CHECK(on.next.announced == 0.0f);
        const auto off = DecideWeightNotification(on.next, 0.0f, true);
        CHECK(off.send);
        CHECK(off.delta == 0.0f);
        state = off.next;
    }
    const auto onLast = DecideWeightNotification(state, 5.0f, true);
    state             = onLast.next;
    CHECK_FALSE(DecideWeightNotification(state, 5.0f, true).send); // repeated reads in the menu

    // menu closed: one announcement of the net change
    const auto closed = DecideWeightNotification(state, 5.0f, false);
    CHECK(closed.send);
    CHECK(closed.old == 0.0f);
    CHECK(closed.delta == 5.0f);
    CHECK_FALSE(DecideWeightNotification(closed.next, 5.0f, false).send);
}

TEST_CASE("Weight notification: a menu session that ends where it started announces nothing")
{
    WeightReportState state{52.0f, 52.0f};
    state = DecideWeightNotification(state, 57.0f, true).next;
    state = DecideWeightNotification(state, 52.0f, true).next;
    CHECK_FALSE(DecideWeightNotification(state, 52.0f, false).send);
}

TEST_CASE("Weight notification: a deferred report always invalidates, never announces twice")
{
    // round-5 log, weapon hotkey: the main thread had announced 16 -> 27, then a stale 16 was
    // cached elsewhere; the deferred report must drop the cache although 27 is "unchanged"
    const WeightReportState at27{27.0f, 27.0f};
    CHECK_FALSE(DecideWeightNotification(at27, 27.0f, false).send);
    const auto forced = DecideWeightNotification(at27, 27.0f, false, true);
    CHECK(forced.send);
    CHECK(forced.delta == 0.0f); // no second "carrying too much"
    CHECK(forced.next.reported == 27.0f);
    CHECK(forced.next.announced == 27.0f);

    const auto changed = DecideWeightNotification(at27, 16.0f, false, true); // a real change still announces
    CHECK(changed.old == 27.0f);
    CHECK(changed.delta == -11.0f);

    const auto paused = DecideWeightNotification(at27, 27.0f, true, true); // paused: still only invalidation
    CHECK(paused.send);
    CHECK(paused.delta == 0.0f);
}
