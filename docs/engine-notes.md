# Engine notes (Skyrim AE 1.6.1170)

What the mod relies on, with the evidence for each point. "Disassembly" refers to `ghidra/*.md`;
"log" to results recorded in `docs/in-game-testing.md`.

## Weights

| Fact | Evidence |
| --- | --- |
| `InventoryChanges::GetEquippedWeight` (ID 16126) sums worn items: armour after the "Mod Armor Weight" entry point (Conditioning, Unhindered…), weapons once per hand. Equipped ammunition never counts: an item whose form type is `0x2A` (`FormType::Ammo`) is skipped before its weight is read (`CMP byte ptr [RCX+0x1A],0x2A; JZ` at `0x1402365AC`). `Actor::CalcEquippedWeight` (38044) refreshes the actor's cache from it. | Disassembly `GetEquippedWeight.md`; log: Conditioning 50 -> 20 |
| `Actor::GetTotalCarryWeight` (37452) equals the CarryWeight actor value after the "Get Max Carry Weight" entry point, which is what vanilla `IsOverEncumbered` computes by hand. | Log: equal in every check, incl. Fortify Carry Weight and perks |
| `InventoryChanges::GetInventoryWeight` (16123) recomputes only when its cache is invalid, then calls `Actor::SendActorValueUpdate(actor, InventoryWeight, old, delta)`; it does not store the actor value. | Disassembly `get_weight_in_container.md` |
| `TESObjectREFR::GetWeightInContainer` (19703) runs for every container and NPC reference; for NPCs vanilla caps it at their total carry weight. | Disassembly; log: chests, followers, vendors keep their weights with the player-only hook |
| The `InventoryWeight` actor value (0x1F) is a **per-actor cached base value**. `GetActorValue` (ID 38462) = `GetBaseActorValue` (38464) + modifiers. `GetBaseActorValue` first looks the value up in the actor's base-value table at `Actor+0x208` (`FUN_1406D02E0`); only on a miss does it compute it (for the player always through `ActorValueOwner::sub`) and store the result (`FUN_1406D0380`). So a value, once cached, is returned until the entry is removed. | Disassembly `misc/02.md` (`GetBaseActorValue`), `misc/01.md`; log 19:58:16: live equipped 9, actor value still 50 |
| The registered `computeBaseFunc` for `InventoryWeight` is ID 37456, which forwards to `GetWeightInContainer`. Whether `ActorValueOwner::sub` calls it on a cache miss is **not yet verified**. | Disassembly `0x1406735f0.md`; `ActorValueOwner::sub` body not supplied |

## Notifications

| Fact | Evidence |
| --- | --- |
| `Actor::SendActorValueUpdate` (38470) calls `ActorValueUpdateSinks[av]`. For `InventoryWeight` that is ID 38489, for `CarryWeight` 38490 (both player-only). | Disassembly `ActorValueUpdateSinks.md` |
| Sink 38489 first **removes the actor's cached base value** for the actor value it is notified about (`FUN_1406D0620(actor+0x208, id)`; the ID stays in `RDX`), then refreshes AI-process flags and movement speed, and shows "You are carrying too much…" when the new value crosses the carry weight. So in vanilla every recompute in `GetInventoryWeight` invalidates the cached `InventoryWeight`. Our container-weight hook bypasses `GetInventoryWeight` for the player, so the cache is never invalidated; only our `SetActorValue` changes it. | Same, assembly at `0x1406B3C90` |

## Inventory bottom bar

| Fact | Evidence |
| --- | --- |
| `InventoryMenu` (ID 51865, `0x14092EC30`) fills its bottom bar through `FUN_14094F9A0` and sends it to Flash as `UpdatePlayerInfo`; the barter, container and magic menus use the same function. | Disassembly `UpdatePlayerInfo.md`, `encumbrance.md` |
| `FUN_14094F9A0` first calls the player's virtual `WornArmorChanged` (vtable `+0x908`, slot 0x121), then gets **both** `encumbrance` and `maxEncumbrance` from one call, ID 40434 (`0x14072FDD0`), then rounds them. | `encumbrance.md` (call at `0x14094FB42`) |
| The `PlayerCharacter` override of `WornArmorChanged` calls `GetWeightInContainer` (its XREF list); that is the read our hook logs at the moment of every equip in the open menu, and it already returns the new equipped weight. | Log round 2: `[container-weight] … read while the inventory menu is open` in the same millisecond as each `[equip]` |
| The bottom bar is redrawn on every equip (armour rating changes at once). SkyUI only formats the engine's values: `ceil(encumbrance) + "/" + floor(maxEncumbrance)`. | Log round 2; `skyui-flash-scripts.md` line 167 |

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
