# In-game test checklist

Unit tests cover the encumbrance rules and the configuration. Everything below needs Skyrim
AE 1.6.1170. Set `iLogLevel = 1` in `er-equipload.toml` first (or `0` to also see every check);
the log is `Documents/My Games/Skyrim Special Edition/SKSE/er-equipload.log`. Each item is "do
X, expect log line Y". Items marked ★ confirm or refute a hypothesis from the audit.

## Loading
- [v] Log shows `runtime 1.6.1170 is supported`, `config loaded from ... (0 warnings, 0 errors): bPlayerEnabled = true, iLogLevel = 1`
      and `hooks installed: IsOverEncumbered yes, CanRun yes, player update yes, container weight yes`.
- [v] `registered for equip events`; with FUCK installed `registered settings page with FUCK`, without it one info line.
- [v] Temporarily remove 1.6.1170 from `kSupportedRuntimes`: a critical line listing the supported runtimes; the plugin does not load.
- [v] With another mod that hooks IsOverEncumbered or CanRun: an error line naming the function; the rest still works.

## Equip load (enabled)
- [-] Equip and unequip armour with the inventory **closed** (favourites hotkey): `[equip] Player | item: ... | cached equipped weight at event: ...`
      followed by `[weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value A -> B`, B = new equipped weight.
> When equipping/unequippping via the favourites menu (from 19:53:01 onwards):
> ```
> [19:51:13.648] [ 384 ] [I] er-equipload v1-0-0-0
> [19:51:13.648] [ 384 ] [I] runtime 1-6-1170-0 is supported
> [19:51:13.650] [ 384 ] [I] config loaded from Data/SKSE/Plugins/er-equipload.toml (0 warnings, 0 errors): bPlayerEnabled = true, iLogLevel = 1
> [19:51:13.650] [ 384 ] [D] Default Trampoline => 0B / 82B (00.00%)
> [19:51:13.650] [ 384 ] [D] Default Trampoline => 14B / 82B (17.07%)
> [19:51:13.650] [ 384 ] [D] Default Trampoline => 34B / 82B (41.46%)
> [19:51:13.650] [ 384 ] [D] Default Trampoline => 48B / 82B (58.54%)
> [19:51:13.650] [ 384 ] [D] Default Trampoline => 68B / 82B (82.93%)
> [19:51:13.650] [ 384 ] [D] Default Trampoline => 82B / 82B (100.00%)
> [19:51:13.650] [ 384 ] [I] hooks installed: IsOverEncumbered yes, CanRun yes, player update yes, container weight yes
> [19:51:13.650] [ 384 ] [I] ER Equipload loaded
> [19:51:15.502] [ 384 ] [I] registered for equip events
> [19:51:28.525] [ 712 ] [I] Connected to FUCK API version 7
> [19:51:28.525] [ 712 ] [I] registered settings page with FUCK
> [19:51:42.557] [ 384 ] [D] [equip] Player | item: Iron Boots | equipped | cached equipped weight at event: 6.00 | game paused: true, inventory menu open: false | outcome: sync requested
> [19:51:42.557] [ 384 ] [D] [equip] Player | item: Iron Armor | equipped | cached equipped weight at event: 36.00 | game paused: true, inventory menu open: false | outcome: sync requested
> [19:51:42.558] [ 384 ] [D] [equip] Player | item: Iron Gauntlets | equipped | cached equipped weight at event: 41.00 | game paused: true, inventory menu open: false | outcome: sync requested
> [19:51:42.558] [ 384 ] [D] [equip] Player | item: Iron Helmet | equipped | cached equipped weight at event: 46.00 | game paused: true, inventory menu open: false | outcome: sync requested
> [19:51:42.558] [ 384 ] [D] [equip] Player | item: Iron War Axe | equipped | cached equipped weight at event: -1.00 | game paused: true, inventory menu open: false | outcome: sync requested
> [19:51:43.149] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 57.00 -> 57.00 (target 57.00) | game paused: false, inventory menu open: false
> [19:52:42.157] [ 536 ] [D] [equip] Player | item: Iron Armor | unequipped | cached equipped weight at event: 57.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:52:42.161] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 57.00 -> 27.00 (target 27.00) | game paused: false, inventory menu open: false
> [19:53:01.385] [ 528 ] [D] [equip] Player | item: Iron Armor | equipped | cached equipped weight at event: 57.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:01.388] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 27.00 -> 57.00 (target 57.00) | game paused: false, inventory menu open: false
> [19:53:02.614] [ 544 ] [D] [equip] Player | item: Iron Gauntlets | unequipped | cached equipped weight at event: 57.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:02.619] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 57.00 -> 52.00 (target 52.00) | game paused: false, inventory menu open: false
> [19:53:03.113] [ 548 ] [D] [equip] Player | item: Iron Gauntlets | equipped | cached equipped weight at event: 57.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:03.116] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 52.00 -> 57.00 (target 57.00) | game paused: false, inventory menu open: false
> [19:53:04.046] [ 548 ] [D] [equip] Player | item: Iron Shield | equipped | cached equipped weight at event: 69.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:04.047] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 57.00 -> 69.00 (target 69.00) | game paused: false, inventory menu open: false
> [19:53:04.508] [ 544 ] [D] [equip] Player | item: Iron Shield | unequipped | cached equipped weight at event: 69.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:04.509] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 69.00 -> 57.00 (target 57.00) | game paused: false, inventory menu open: false
> [19:53:05.434] [ 548 ] [D] [equip] Player | item: Iron War Axe | unequipped | cached equipped weight at event: 57.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:05.435] [ 548 ] [D] [equip] Player | item: Iron Sword | equipped | cached equipped weight at event: -1.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:05.435] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 57.00 -> 55.00 (target 55.00) | game paused: false, inventory menu open: false
> [19:53:06.022] [ 528 ] [D] [equip] Player | item: Iron Helmet | unequipped | cached equipped weight at event: 55.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:53:06.023] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 55.00 -> 50.00 (target 50.00) | game paused: false, inventory menu open: false
> ```
- [v] Pick up and drop heavy loot without equipping it: weight shown in the inventory stays the equipped weight.
- [v] Equip until over the carry weight: `[encumbrance] Player | ... | over-encumbered: false -> true` and `[can-run] ... can run: true -> false (blocked by equipped weight)`;
      walking is slow, sprint/run blocked, "You are carrying too much..." appears, fast travel refused. Unequip: both flip back.
- [v] Same over-weight loadout while mounted and with `tgm`: not over-encumbered, can run.
- [v] Carry-weight perks / Fortify Carry Weight: over-encumbrance threshold moves accordingly.
- [v] ★ F8: in every `[encumbrance]` line, `carry X (actor value ..., engine total Y)`: X equals Y. If they always match, the manual carry
      calculation can be replaced by `GetTotalCarryWeight`.
  > They do indeed match
- [i think so] ★ Armour-weight perks (e.g. Conditioning, Weightless): note whether `equipped` drops when the perk is taken; it shows whether
      `InventoryChanges::GetEquippedWeight` applies the "Mod Armor Weight" entry point.
> When over-encumbered, but then activating the Conditioning perk which makes heavy armor weigh nothing and no longer slows you down:
> ```
> [19:54:36.386] [ 384 ] [D] [equip] Player | item: Iron Armor | equipped | cached equipped weight at event: 50.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [19:54:37.057] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 20.00 -> 50.00 (target 50.00) | game paused: false, inventory menu open: false
> [19:54:57.387] [ 384 ] [D] [can-run] Player | equipped 50.00 (cached 50.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | can run: true -> false (blocked by equipped weight)
> [19:54:58.022] [ 384 ] [D] [encumbrance] Player | equipped 50.00 (cached 50.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | over-encumbered: false -> true
> [19:55:01.138] [ 384 ] [D] [equip] Player | item: Iron Armor | unequipped | cached equipped weight at event: 50.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [19:55:01.626] [ 384 ] [D] [can-run] Player | equipped 20.00 (cached 20.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 20.00 | god mode false | mounted false | can run: false -> true (vanilla decided)
> [19:55:01.626] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 50.00 -> 20.00 (target 20.00) | game paused: false, inventory menu open: false
> [19:55:01.627] [ 384 ] [D] [encumbrance] Player | equipped 20.00 (cached 20.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 20.00 | god mode false | mounted false | over-encumbered: true -> false
> [19:55:07.783] [ 532 ] [D] [equip] Player | item: Iron Armor | equipped | cached equipped weight at event: 50.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:55:07.787] [ 384 ] [D] [can-run] Player | equipped 50.00 (cached 50.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | can run: true -> false (blocked by equipped weight)
> [19:55:07.787] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 20.00 -> 50.00 (target 50.00) | game paused: false, inventory menu open: false
> [19:55:07.787] [ 384 ] [D] [encumbrance] Player | equipped 50.00 (cached 50.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | over-encumbered: false -> true
> [19:55:43.891] [ 384 ] [D] [can-run] Player | equipped 50.00 (cached 50.00) | carry 400.00 (actor value 400.00, engine total 400.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | can run: false -> true (vanilla decided)
> [19:55:44.560] [ 384 ] [D] [encumbrance] Player | equipped 50.00 (cached 50.00) | carry 400.00 (actor value 400.00, engine total 400.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | over-encumbered: true -> false
> [19:56:32.885] [ 528 ] [D] [can-run] Player | equipped 50.00 (cached 50.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | can run: true -> false (blocked by equipped weight)
> [19:56:32.902] [ 384 ] [D] [encumbrance] Player | equipped 50.00 (cached 50.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | over-encumbered: false -> true
> [19:58:16.452] [ 384 ] [D] [encumbrance] Player | equipped 9.00 (cached 9.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 50.00 | god mode false | mounted false | over-encumbered: true -> false
> [19:58:21.186] [ 532 ] [D] [equip] Player | item: Iron Armor | unequipped | cached equipped weight at event: 9.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:58:21.192] [ 384 ] [D] [can-run] Player | equipped 9.00 (cached 9.00) | carry 40.00 (actor value 40.00, engine total 40.00) | InventoryWeight actor value 9.00 | god mode false | mounted false | can run: false -> true (vanilla decided)
> [19:58:21.192] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 50.00 -> 9.00 (target 9.00) | game paused: false, inventory menu open: false
> [19:58:21.464] [ 544 ] [D] [equip] Player | item: Iron Armor | equipped | cached equipped weight at event: 9.00 | game paused: false, inventory menu open: false | outcome: sync requested
> [19:58:21.468] [ 384 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 9.00 -> 9.00 (target 9.00) | game paused: false, inventory menu open: false
> ```
## Running (CanRun now defers to vanilla for everything but the equipped-weight block)
- [v] Grab a heavy object with the grab key (Z) while under the carry weight: running is blocked as in vanilla (restored).
- [v] Staggered player: note whether running is blocked (vanilla's own check now decides; before, IsStaggered() did).
- [v] NPCs and followers run normally (they now get vanilla CanRun).
- [v] ★ With lots of unequipped loot (vanilla weight > carry, equipped weight < carry): the player can still run. If not, vanilla's own
      check is reading the full inventory weight: send the `[can-run]` trace lines (iLogLevel = 0).

## Container weight (now player-only)
- [v] ★ F2: open a follower's inventory, a chest and a vendor's barter menu: their weights are their own, not the player's equipped weight.
      With iLogLevel = 0, `[container-weight]` lines appear only for the player.
> This is great, i would like to hook into this feature later, by making them also optionally only account for equipped items
## UI refresh (F3 investigation, no fix yet)
- [v] ★ Equip armour with the inventory **open**: compare the `[equip]` line's `game paused / inventory menu open` with when the
      `[weight-sync]` line appears. Expected (hypothesis): the sync line only appears after the menu closes, because the player update
      does not run while the menu pauses the game.
> As expected, it does not run when the menu is open, this equips/unequips were done in the inventory menu
> ```
> [18:33:24.547] [ 428 ] [D] [equip] Player | item: Iron Gauntlets | equipped | cached equipped weight at event: 69.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [18:33:25.183] [ 428 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 64.00 -> 69.00 (target 69.00) | game paused: false, inventory menu open: false
> [18:33:36.173] [ 428 ] [D] [equip] Player | item: Iron War Axe | unequipped | cached equipped weight at event: 69.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [18:33:36.174] [ 428 ] [D] [equip] Player | item: Iron Dagger | equipped | cached equipped weight at event: -1.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [18:33:47.412] [ 428 ] [D] [equip] Player | item: Iron Dagger | unequipped | cached equipped weight at event: 60.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [18:33:47.413] [ 428 ] [D] [equip] Player | item: Iron War Axe | equipped | cached equipped weight at event: -1.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [18:33:48.716] [ 428 ] [D] [equip] Player | item: Iron Helmet | unequipped | cached equipped weight at event: 69.00 | game paused: true, inventory menu open: true | outcome: sync requested
> [18:33:50.662] [ 428 ] [D] [weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value 69.00 -> 64.00 (target 64.00) | game paused: false, inventory menu open: false
> ```

- [v] ★ Same test: does the displayed weight change while the menu is open? Note `cached equipped weight at event`: -1 means the engine
      had already invalidated its cache when the event fired.
> the displayed weight does not change while the menu is open, look at log above
## Toggle
- [v] Menu: untick Enabled. `[toggle] Player | equipped-weight-only disabled` and `[weight-sync] ... reason: disabled | vanilla inventory weight`;
      the inventory shows the full weight and vanilla encumbrance applies. Tick again: the reverse, without a restart.
- [v] Close the menu after a change: `settings saved to Data/SKSE/Plugins/er-equipload.toml` once; close without a change: no save line.
- [v] Reset Defaults: Enabled back on, log level 2; values survive a game restart.
- [v] Tooltips show their two lines.

## Save and load
- [v] Save while over-encumbered, reload: same state and weight. Save with the mod disabled, reload: vanilla weight.
- [v] Old config file (`[er-equipload.Player] bPlayerEquippedWeightOnly`): one `unknown setting` warning, defaults apply.
