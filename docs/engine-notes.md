# Engine notes (Skyrim AE 1.6.1170)

What the mod relies on, with the evidence for each point. "Disassembly" refers to `ghidra/*.md`;
"log" to results recorded in `docs/in-game-testing.md`.

## Weights

| Fact | Evidence |
| --- | --- |
| `InventoryChanges::GetEquippedWeight` (ID 16126) sums worn items: armour after the "Mod Armor Weight" entry point (Conditioning, Unhindered…), weapons once per hand, equipped ammunition excluded. `Actor::CalcEquippedWeight` (38044) refreshes the actor's cache from it. | Disassembly `GetEquippedWeight.md`; log: Conditioning 50 -> 20 |
| `Actor::GetTotalCarryWeight` (37452) equals the CarryWeight actor value after the "Get Max Carry Weight" entry point, which is what vanilla `IsOverEncumbered` computes by hand. | Log: equal in every check, incl. Fortify Carry Weight and perks |
| `InventoryChanges::GetInventoryWeight` (16123) recomputes only when its cache is invalid, then calls `Actor::SendActorValueUpdate(actor, InventoryWeight, old, delta)`; it does not store the actor value. | Disassembly `get_weight_in_container.md` |
| `TESObjectREFR::GetWeightInContainer` (19703) runs for every container and NPC reference; for NPCs vanilla caps it at their total carry weight. | Disassembly; log: chests, followers, vendors keep their weights with the player-only hook |
| The `InventoryWeight` actor value (0x1F) holds a stored value: reading it does not recompute it. Its registered `computeBaseFunc` (ID 37456, forwards to `GetWeightInContainer`) has no effect because the actor value's flags are 0. | Disassembly `0x1406735f0.md` (registration in FUN_14043c1e0); log 19:58:16: live equipped 9, actor value still 50 until the next sync |

## Notifications

| Fact | Evidence |
| --- | --- |
| `Actor::SendActorValueUpdate` (38470) calls `ActorValueUpdateSinks[av]`. For `InventoryWeight` that is ID 38489, for `CarryWeight` 38490 (both player-only). | Disassembly `ActorValueUpdateSinks.md` |
| Sink 38489 refreshes AI-process cached flags and movement speed, and shows "You are carrying too much…" when the new value crosses the carry weight. It does not touch the inventory menu. | Same |

## Menus and timing

| Fact | Evidence |
| --- | --- |
| `PlayerCharacter::Update` does not run while a menu pauses the game (inventory, favourites); the equip-event sync lands when the menu closes. | Log: `[equip]` with `game paused: true`, `[weight-sync]` only after closing |
| At `TESEquipEvent` time the engine's equipped-weight cache is sometimes already updated (equips), sometimes still the old value (unequips) and invalidated (-1) for weapons. A weight read inside the event is therefore not reliable. | Log `[equip]` lines |
| ID 51119 (0x1408F9AC0), called from `ContainerMenu`, reads the **other** actor's `GetInventoryWeight` and `GetTotalCarryWeight` directly (follower capacity), bypassing the `GetWeightInContainer` hook. | Disassembly `0x1408F9AC0.md` |

## For a future NPC equipped-weight mode (not implemented)

- The container-weight hook already has the player check in one place (`Rules::UseEquippedWeightForContainer`); an NPC mode would
  extend that rule with its own setting.
- Vanilla `IsOverEncumbered` and `CanRun` return "not encumbered" / "may run" for NPCs regardless of weight, so NPC movement is
  unaffected unless those are changed too.
- The follower-capacity check in `ContainerMenu` (ID 51119) calls `GetInventoryWeight` directly; an NPC mode that should affect
  how much a follower accepts needs that call site as well.
