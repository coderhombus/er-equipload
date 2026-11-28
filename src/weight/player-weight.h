#pragma once

// Engine-facing side of the mod: reads weights from the game and keeps the player's
// InventoryWeight actor value in step with equipment changes and the enable toggle. Decisions
// live in weight/rules.h.
//
// NPCs are not supported yet. Everything here is player-only by design; NPC support would need
// its own settings and a separate decision about which engine paths to change for them.

#include <RE/Skyrim.h>

#include <string>

#include "weight/rules.h"

namespace EquipLoad::Weight
{
/// [Player] bPlayerEnabled. Read on every hooked call, so the toggle takes effect at once.
[[nodiscard]] bool IsEnabled();

/// Recomputes the actor's equipped weight from its inventory now (Actor::CalcEquippedWeight),
/// refreshing the engine's cached value. Threads: it writes the actor's equipped-weight cache
/// from whichever thread calls it, exactly as the engine's own GetEquippedWeight does on a
/// cache miss; the mod adds no other off-main-thread engine writes. GetEquippedWeight() can return a stale cache right
/// after an equipment change.
///
/// What counts (InventoryChanges::GetEquippedWeight, ghidra/GetEquippedWeight.md, confirmed in
/// game): every worn item's weight; worn armour after the "Mod Armor Weight" perk entry point
/// (Conditioning, Unhindered and similar perks apply without any code of ours); a weapon once
/// per hand it is held in; equipped ammunition does not count.
[[nodiscard]] float CalcEquippedWeightLive(RE::Actor& a_actor);

/// Facts for the rules. Weights are only read when they can matter (player, not in god mode,
/// not mounted); otherwise they stay 0.
[[nodiscard]] Rules::EncumbranceFacts GatherEncumbranceFacts(RE::Actor& a_actor);

/// Debug/trace text with every weight involved in an encumbrance decision, for diagnostics.
[[nodiscard]] std::string DescribeWeights(RE::Actor& a_actor, const Rules::EncumbranceFacts& a_facts);

/// Records the calling thread as the game's main thread. Call from SKSEPluginLoad.
void RecordMainThread();

/// Tells the engine the player's equipped weight, as vanilla GetInventoryWeight does after a
/// recompute: when it changed since the last report, sends the InventoryWeight actor-value
/// update. Its sink drops the player's cached InventoryWeight, so the next read (inventory
/// bottom bar, vanilla checks) recomputes it through GetWeightInContainer = our hook.
/// Call from the container-weight hook, player branch only. Any thread: off the main thread it
/// only marks a report for the next player update. While the game is paused it only
/// invalidates the cache (Rules::DecideWeightNotification), so repeated crossings in a menu do
/// not queue one "carrying too much" message each.
/// a_deferred: called by the player update for a report first seen off the main thread; always
/// invalidates the cached value, since the other thread may have cached a stale one.
void ReportPlayerWeight(RE::PlayerCharacter& a_player, float a_equippedWeight, bool a_deferred = false);

/// Forgets what was reported (the mod is off), so the next report invalidates the cache. Any thread.
void ForgetReportedWeight();

/// Registers for TESEquipEvent. Call once at SKSE kPostLoad.
void RegisterEquipEventSink();

/// Marks the player's InventoryWeight actor value for an update on the next player update.
void RequestSync(const char* a_reason);

/// Called every player update: notices a change of the enable toggle and applies a pending
/// update, if any.
void ApplyPendingSync(RE::PlayerCharacter& a_player);
} // namespace EquipLoad::Weight
