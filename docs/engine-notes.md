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
| On a cache miss, `ActorValueOwner::sub` (ID 27229) calls `ActorValueInfo::computeBaseFunc` (`+0x68`) with the owner; for `InventoryWeight` that is ID 37456 → `GetWeightInContainer(actor)` → our hook. So the recomputed value is the equipped weight while the mod is on. | `ActorValueOwner::sub.md` (listing `0x14043C15C`), `0x1406735f0.md` |
| `SetBaseActorValue` (Actor vtable slot 4) writes the cache, then sends `SendActorValueUpdate(id, old value, change)` when the value changed; the sink removes the entry again, so the next read recomputes it. The mod's player-update sync goes through this. | `SetBaseActorValue.md` |

## Notifications

| Fact | Evidence |
| --- | --- |
| `Actor::SendActorValueUpdate` (38470) calls `ActorValueUpdateSinks[av]`. For `InventoryWeight` that is ID 38489, for `CarryWeight` 38490 (both player-only). | Disassembly `ActorValueUpdateSinks.md` |
| Sink 38489 first **removes the actor's cached base value** for the actor value it is notified about (`FUN_1406D0620(actor+0x208, id)`; the ID stays in `RDX`), then refreshes AI-process flags and movement speed, and shows "You are carrying too much…" when the new value crosses the carry weight. So in vanilla every recompute in `GetInventoryWeight` invalidates the cached `InventoryWeight`. Our container-weight hook bypasses `GetInventoryWeight` for the player, so the cache is never invalidated; only our `SetActorValue` changes it. | Same, assembly at `0x1406B3C90` |

## Inventory bottom bar

| Fact | Evidence |
| --- | --- |
| `InventoryMenu` (ID 51865, `0x14092EC30`) fills its bottom bar through `FUN_14094F9A0` and sends it to Flash as `UpdatePlayerInfo`; the barter, container and magic menus use the same function. | Disassembly `UpdatePlayerInfo.md`, `encumbrance.md` |
| `FUN_14094F9A0` first calls the player's virtual `WornArmorChanged` (vtable `+0x908`, slot 0x121; `PlayerCharacter` override ID 40708 ends with `GetWeightInContainer`), then gets `encumbrance` = `GetActorValue(InventoryWeight)` and `maxEncumbrance` = `GetTotalCarryWeight` from ID 40434 (`0x14072FDD0`). `GetTotalCarryWeight` = CarryWeight actor value after the "Get Max Carry Weight" entry point. | `encumbrance.md`, `0x14094fb42.md`, `PlayerCharacter_WornArmorChanged` |
| That `GetWeightInContainer` call is the read our hook logs at the moment of every equip in the open menu; it already returns the new equipped weight. Since commit a32ef89 the hook then sends the `InventoryWeight` update, so the cached value is dropped before ID 40434 reads it. | Log round 2: `[container-weight] … read while the inventory menu is open` in the same millisecond as each `[equip]` |
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

## Threads

| Fact | Evidence |
| --- | --- |
| SKSE loads plugins, equip events, the player update and the inventory bottom bar all run on one thread (the main thread). | Thread IDs in the round-2 and round-4 logs |
| The FUCK menu (settings writes) runs on another thread. | Round-4 log: `settings saved` on thread 540, gameplay on 384 |
| `GetWeightInContainer` (hence our container hook) is also reachable from any `GetActorValue(InventoryWeight)` through `computeBaseFunc`, which Papyrus can call on its own threads. | `ActorValueOwner::sub.md`, `0x1406735f0.md` |
| Settings are `std::atomic` (relaxed). The `InventoryWeight` notification is sent only on the main thread; a change seen elsewhere is reported by the next player update. `CalcEquippedWeightLive` writes the engine's equipped-weight cache from the calling thread, as the engine's `GetEquippedWeight` does. | `config/parameter.h`, `weight/player-weight.cpp` |

## What each hook still does (round 5)

| Piece | Responsibility | Covered by the InventoryWeight notification? |
| --- | --- | --- |
| `IsOverEncumbered`, `CanRun` hooks | Decide with the live equipped weight | No: vanilla reads the cached actor value, refreshed only when `GetWeightInContainer` runs for the player. Equipped weight can change without that (perks: round 1 showed 50 cached vs 9 live). Keep. |
| Equip-event sink + `SetActorValue` sync | Bring the actor value up to date after an equip | Proven only for equips inside the inventory menu. Removal needs the round-5 log to show `already current` for hotkey, Favourites and console equips. |
| Toggle sync | Restore the vanilla weight when the mod is turned off | Could become a zero-change notification once the equip sync is gone. |
| Player-update hook | Sync, post-menu announcement, off-main-thread reports, toggle detection | Needed regardless. |
