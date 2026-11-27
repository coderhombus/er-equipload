# In-game test checklist

Unit tests cover the encumbrance rules and the configuration. Everything below needs Skyrim
AE 1.6.1170. Set `iLogLevel = 1` in `er-equipload.toml` first (or `0` to also see every check);
the log is `Documents/My Games/Skyrim Special Edition/SKSE/er-equipload.log`. Each item is "do
X, expect log line Y". Items marked ★ confirm or refute a hypothesis from the audit.

## Loading
- [ ] Log shows `runtime 1.6.1170 is supported`, `config loaded from ... (0 warnings, 0 errors): bPlayerEnabled = true, iLogLevel = 1`
      and `hooks installed: IsOverEncumbered yes, CanRun yes, player update yes, container weight yes`.
- [ ] `registered for equip events`; with FUCK installed `registered settings page with FUCK`, without it one info line.
- [ ] Temporarily remove 1.6.1170 from `kSupportedRuntimes`: a critical line listing the supported runtimes; the plugin does not load.
- [ ] With another mod that hooks IsOverEncumbered or CanRun: an error line naming the function; the rest still works.

## Equip load (enabled)
- [ ] Equip and unequip armour with the inventory **closed** (favourites hotkey): `[equip] Player | item: ... | cached equipped weight at event: ...`
      followed by `[weight-sync] Player | reason: equip | equipped weight | InventoryWeight actor value A -> B`, B = new equipped weight.
- [ ] Pick up and drop heavy loot without equipping it: weight shown in the inventory stays the equipped weight.
- [ ] Equip until over the carry weight: `[encumbrance] Player | ... | over-encumbered: false -> true` and `[can-run] ... can run: true -> false (blocked by equipped weight)`;
      walking is slow, sprint/run blocked, "You are carrying too much..." appears, fast travel refused. Unequip: both flip back.
- [ ] Same over-weight loadout while mounted and with `tgm`: not over-encumbered, can run.
- [ ] Carry-weight perks / Fortify Carry Weight: over-encumbrance threshold moves accordingly.
- [ ] ★ F8: in every `[encumbrance]` line, `carry X (actor value ..., engine total Y)`: X equals Y. If they always match, the manual carry
      calculation can be replaced by `GetTotalCarryWeight`.
- [ ] ★ Armour-weight perks (e.g. Conditioning, Weightless): note whether `equipped` drops when the perk is taken; it shows whether
      `InventoryChanges::GetEquippedWeight` applies the "Mod Armor Weight" entry point.

## Running (CanRun now defers to vanilla for everything but the equipped-weight block)
- [ ] Grab a heavy object with the grab key (Z) while under the carry weight: running is blocked as in vanilla (restored).
- [ ] Staggered player: note whether running is blocked (vanilla's own check now decides; before, IsStaggered() did).
- [ ] NPCs and followers run normally (they now get vanilla CanRun).
- [ ] ★ With lots of unequipped loot (vanilla weight > carry, equipped weight < carry): the player can still run. If not, vanilla's own
      check is reading the full inventory weight: send the `[can-run]` trace lines (iLogLevel = 0).

## Container weight (now player-only)
- [ ] ★ F2: open a follower's inventory, a chest and a vendor's barter menu: their weights are their own, not the player's equipped weight.
      With iLogLevel = 0, `[container-weight]` lines appear only for the player.

## UI refresh (F3 investigation, no fix yet)
- [ ] ★ Equip armour with the inventory **open**: compare the `[equip]` line's `game paused / inventory menu open` with when the
      `[weight-sync]` line appears. Expected (hypothesis): the sync line only appears after the menu closes, because the player update
      does not run while the menu pauses the game.
- [ ] ★ Same test: does the displayed weight change while the menu is open? Note `cached equipped weight at event`: -1 means the engine
      had already invalidated its cache when the event fired.

## Toggle
- [ ] Menu: untick Enabled. `[toggle] Player | equipped-weight-only disabled` and `[weight-sync] ... reason: disabled | vanilla inventory weight`;
      the inventory shows the full weight and vanilla encumbrance applies. Tick again: the reverse, without a restart.
- [ ] Close the menu after a change: `settings saved to Data/SKSE/Plugins/er-equipload.toml` once; close without a change: no save line.
- [ ] Reset Defaults: Enabled back on, log level 2; values survive a game restart.
- [ ] Tooltips show their two lines.

## Save and load
- [ ] Save while over-encumbered, reload: same state and weight. Save with the mod disabled, reload: vanilla weight.
- [ ] Old config file (`[er-equipload.Player] bPlayerEquippedWeightOnly`): one `unknown setting` warning, defaults apply.
