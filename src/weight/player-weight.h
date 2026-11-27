#pragma once

// Engine-facing side of the mod: reads weights from the game, keeps the player's InventoryWeight
// actor value in step with equipment changes. Decisions live in weight/rules.h.
//
// NPCs are not supported yet. Everything here is player-only by design; NPC support would need
// its own settings and a separate decision about which engine paths to change for them.

#include <RE/Skyrim.h>

#include "weight/rules.h"

namespace EquipLoad::Weight
{
/// Recomputes the actor's equipped weight from its inventory now (Actor::CalcEquippedWeight),
/// refreshing the engine's cached value. GetEquippedWeight() can return a stale cache right
/// after an equipment change.
[[nodiscard]] float CalcEquippedWeightLive(RE::Actor& a_actor);

/// CarryWeight actor value after the "Get Max Carry Weight" perk entry point, exactly as vanilla
/// Actor::IsOverEncumbered computes it.
[[nodiscard]] float GetCarryWeight(RE::Actor& a_actor);

/// Facts for Rules::IsOverEncumbered. Weights are only read when they can matter (player, not in
/// god mode, not mounted); otherwise they stay 0.
[[nodiscard]] Rules::EncumbranceFacts GatherEncumbranceFacts(RE::Actor& a_actor);

/// Registers for TESEquipEvent. Call once at SKSE kPostLoad.
void RegisterEquipEventSink();

/// Marks the player's InventoryWeight actor value for an update on the next player update.
void RequestSync();

/// Called every player update: applies a pending update, if any.
void ApplyPendingSync(RE::PlayerCharacter& a_player);
} // namespace EquipLoad::Weight
