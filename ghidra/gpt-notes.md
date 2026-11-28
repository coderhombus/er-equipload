# Skyrim RE: `ActorValueOwner::GetActorValue` — Actor implementation, ID `0x1F`

## 1. Virtual dispatch and vtable

The `ActorValueOwner` subobject is located at:

- `Actor + 0xB8`

In the Actor constructor, `FUN_14065E270`, the vtable pointer at `Actor+0xB8` is initially assigned `VTABLE_ActorValueOwner`, then overwritten with `VTABLE_Actor_6`.

`VTABLE_Actor_6` is at `0x14189E2F0`.

Relevant entries:

| Slot | Vtable offset | Function            |
| ---- | ------------- | ------------------- |
| 0    | `+0x00`       | `LAB_1406A9294`     |
| 1    | `+0x08`       | `FUN_1406B2230`     |
| 2    | `+0x10`       | `FUN_1406B23A0`     |
| 3    | `+0x18`       | `FUN_1406B2470`     |
| 4    | `+0x20`       | `SetBaseActorValue` |
| 5    | `+0x28`       | `ModifyActorValue`  |
| 6    | `+0x30`       | `ModActorValue`     |

Slot 1 is the Actor implementation of `ActorValueOwner::GetActorValue`.

The function at slot 3 is the Actor implementation of `GetBaseActorValue`.

## 2. `FUN_1406B2230` — GetActorValue

Address:

- `0x1406B2230`

Arguments relevant to the analysis:

- `param_1`: ActorValueOwner subobject pointer (`Actor+0xB8`)
- `param_2`: actor-value ID
- `param_3`, `param_4`: additional arguments passed through parts of the function

The function accesses actor-value metadata through:

`DAT_1420F6310 + 8 + actor_value_id * 8`

It reads metadata flags at offset `+0x60`.

### Special path

The initial condition checks:

- Metadata flag bit `0x12`.
- `param_1[8]` (the subobject pointer plus `0x40`, corresponding to `Actor+0xF8`).
- The pointer at `param_1[8] + 0x50`.

If these conditions pass, it calls:

`FUN_1407261A0(*(undefined8 *)(param_1[8] + 0x50), param_2, &local_float, param_4, -2)`

If this returns nonzero, the function returns the float written to `local_float`.

### Normal path

If the special function does not return successfully:

1. Calls the virtual function at `*param_1 + 0x18`:\
   `GetBaseActorValue(param_2)`.
2. Obtains a modifier-record pointer.
3. Calls `FUN_1406CFEF0` if a record exists.
4. Adds the modifier contribution to the base value.
5. If the special-path object was available, calls `FUN_1407261D0` with the resulting value.

The function has special hard-coded handling for IDs `0x18`, `0x19`, `0x1A` and `0x25`. Other IDs use:

`FUN_1406D0A00(param_1 + 0x2A, param_2)`

For ID `0x1F`, this is the generic modifier lookup.

## 3. `FUN_1406B2470` — GetBaseActorValue

This is the function called through the ActorValueOwner vtable at offset `+0x18`.

The relevant decompilation shows:

- `param_1` is the ActorValueOwner subobject pointer (`Actor+0xB8`).
- `param_1 + 0x150` corresponds to `Actor+0x208`.
- `param_1 - 0x78` recovers the Actor pointer.

The function first calls:

`FUN_1406D02E0(param_1 + 0x150, param_2, &local_value)`

If that lookup fails, it calls:

`FUN_14043C050(param_2, &local_value)`

If both fail, it obtains a value through a virtual call on the object at:

`*(longlong *)(param_1 - 0x78) + 0xE8`

It then reads actor-value metadata flags at `+0x60`, and under certain conditions calls:

`ActorValueOwner::sub(...)`

The resulting value is eventually written to the base-value table through:

`FUN_1406D0380(param_1 + 0x150, param_2, value)`

There is also a global flag check involving:

`*(uint *)(DAT_14317ABA8 + 0x340) >> 1 & 1`

which affects whether the cache-writing function is called.

## 4. Base-value storage: `Actor+0x208`

The base-value table is accessed through `Actor+0x208`.

Its relevant structure:

| Actor offset | Contents                                     |
| ------------ | -------------------------------------------- |
| `+0x208`     | Pointer to encoded actor-value ID byte array |
| `+0x210`     | Pointer to corresponding float array         |

IDs in the byte array are stored encoded as `ID + 1`; zero is used as the terminator. Entries are sorted.

### `FUN_1406D02E0` — base-value lookup

Address:

- `0x1406D02E0`

Arguments:

- `param_1`: base-value table structure
- `param_2`: actor-value ID
- `param_3`: output float pointer

It acquires a read lock on `DAT_14319ACD8`, searches the encoded ID byte array, and if a match exists reads the corresponding float from the value array.

Returns a success byte and writes the found value to `param_3`. If no match exists, writes zero and returns failure.

### `FUN_1406D0380` — base-value insertion/update

Address:

- `0x1406D0380`

Arguments:

- `param_1`: base-value table structure
- `EDX`: actor-value ID
- `XMM2`: float value

It increments the ID byte (`ID+1` encoding), acquires a write lock on `DAT_14319ACD8`, searches the sorted ID array, and either updates the existing float or inserts a new ID/value entry.

It may resize the arrays and calls `FUN_140CECA70` to update the ID list.

### `FUN_1406D0620` — base-value removal

Address:

- `0x1406D0620`

This operates on the same table structure. It removes an actor-value entry and shifts the remaining IDs and float values.

It is called elsewhere with `Actor+0x208`.

## 5. Modifier-record storage: `Actor+0x218`

> **Corrected (Claude, round 4).** The earlier version said `Actor+0x150` / `+0x160` / `+0x168`. That
> forgot that `param_1` is the `ActorValueOwner` sub-object at `Actor+0xB8`, not the Actor.
> `param_1 + 0x2A` (8-byte units) = owner `+0x150` = `Actor+0x208`: the **same** structure as the
> base-value table in section 4. `FUN_1406D0A00` then reads that structure's `+0x10` / `+0x18`.

The modifier records live in the second half of the structure at `Actor+0x208`; the base-value cache
uses its first half (`FUN_1406D02E0` reads `[+0x0]` and `[+0x8]`).

For the generic modifier lookup, `FUN_1406B2230` passes `param_1 + 0x2A` (owner `+0x150` = `Actor+0x208`).

Relevant structure:

| Actor offset | Contents                                     |
| ------------ | -------------------------------------------- |
| `+0x218`     | Pointer to encoded actor-value ID byte array |
| `+0x220`     | Pointer to modifier-record array             |

The ID byte array is also sorted and uses `ID+1` encoding, with zero as the terminator.

### `FUN_1406D0A00` — modifier-record lookup

Address:

- `0x1406D0A00`

Arguments:

- `param_1`: the structure at `Actor+0x208` (modifier fields at its `+0x10` / `+0x18`)
- `param_2`: actor-value ID

It acquires a read lock on `DAT_14319ACD8`, searches the ID byte array at `[param_1+0x10]`, and if found returns a pointer into the array at `[param_1+0x18]`.

The record address is calculated as:

`record_array + index * 0xC`

Each record is therefore `0xC` bytes long.

### `FUN_1406CFEF0` — modifier-record value

Address:

- `0x1406CFEF0`

Assembly:

```
MOVSS XMM0, dword ptr [RCX + 0x4]
ADDSS XMM0, dword ptr [RCX]
ADDSS XMM0, dword ptr [RCX + 0x8]
RET
```

Equivalent decompilation:

```
float FUN_1406cfeF0(float *param_1)
{
    return param_1[1] + *param_1 + param_1[2];
}
```

The three float fields are at record offsets:

- `+0x0`
- `+0x4`
- `+0x8`

The function adds all three.

## 6. Other functions and callback investigation

### `Actor::SendActorValueUpdate`

Address:

- `0x1406B2A40`

Uses the callback table at:

- `0x14319A460` (`REL::ID(403905)` fallback)

It indexes the table using the actor-value ID, loading the callback at:

`table_base + actor_value_id * 8`

The entry at index `0x1F` is at:

`0x14319A558`

Initialization at `0x1400A1A20` writes `PlayerCharacter::sub` to this entry. The same-named callback is also installed at index `0x20`, address `0x14319A560`.

### `PlayerCharacter::sub`

Address:

- `0x1406B3C90`

This callback:

- Calls `FUN_1406D0620(param_1 + 0x208, id)`: the decompiler drops the second argument, but the
  assembly at `0x1406B3C90` leaves the callback's `EDX` (the actor-value ID) untouched up to the call.
  So the sink **removes the cached base value of the actor value it is notified about**
  (`InventoryWeight` for slot `0x1F`). The next `GetActorValue` recomputes it (section 9).
- Calls `FUN_14067FAC0(param_1)`.
- Conditionally calls `Character::UpdateMovementSpeed(param_1)`.
- Under a player-specific condition, makes a virtual call using the ActorValueOwner pointer at `DAT_1431874F8 + 0xB8`, with actor-value ID `0x20`.
- May then call `FUN_14073A250(DAT_1431874F8, 1)`.

The callback receives two float arguments, `param_3` and `param_4`: **the old value and the change**.
Every supplied caller passes them that way: `InventoryChanges::GetInventoryWeight` passes
`(previous total, new total - previous total)`, and `SetBaseActorValue` passes `(GetActorValue before,
new base - cached base)`. The HUD check `param_3 <= carry && carry < param_3 + param_4` is therefore an
upward crossing of the carry weight.

### `FUN_14073A250`

Address:

- `0x14073A250`

When its initial global gate allows execution and its second argument is nonzero, it calls:

`SendHUDMessage::ShowHUDMessage(...)`

with the string:

`"You are carrying too much to be able to run."`

It also clears a timer field at actor offset `+0x908`.

> **Unverified (Claude, round 4):** the notes only show the pointer name `PTR_aYouAreCarrying_142008cb8`,
> not the full string, and the timer offset comes from the decompiler's field name, not from a listing.

### `FUN_14067FAC0`

Address:

- `0x14067FAC0`

Traverses pointers through `this+0xF8` and a nested object at `+0x50`, then clears several bits in a dword at nested offset `+0x2C`.

### `FUN_1406D0620`

Address:

- `0x1406D0620`

Removes an entry from the base-value table at `Actor+0x208`. It uses the same lock, ID encoding and parallel ID/float-array structure as `FUN_1406D02E0` and `FUN_1406D0380`.

## 7. Functions inspected in round 4 (`ghidra/` commit 37c9099)

- **`ActorValueOwner::SetBaseActorValue`** (Actor vtable slot 4, `ghidra/SetBaseActorValue.md`):
  reads `GetActorValue(id)` (old value), looks up the cached base, writes the new base into the cache at
  `Actor+0x208` (`FUN_1406D0380`), calls `Character::sub(actor, id)`, and **if the base changed, calls
  `SendActorValueUpdate(actor, id, old value, new - cached)`**. So setting `InventoryWeight` triggers the
  sink, which immediately removes the entry just written; the next read recomputes it.
- **`ActorValueOwner::sub`** (ID 27229, `0x14043C130`, `ghidra/ActorValueOwner::sub.md`): for IDs below
  `0xA4`, calls the function pointer at `ActorValueInfo + 0x68` (CommonLib: `computeBaseFunc`) with
  `RCX` unchanged (the owner) and returns its result. For `InventoryWeight` that is ID 37456, which
  calls `GetWeightInContainer(owner - 0xB8)`.
- **ID 40434** (`0x14072FDD0`, `ghidra/0x14094fb42.md`): `encumbrance = GetActorValue(InventoryWeight)`,
  `maxEncumbrance = Actor::GetTotalCarryWeight()`. `GetTotalCarryWeight` (37452) = `GetActorValue(CarryWeight)`
  after the "Get Max Carry Weight" entry point (10).
- **`PlayerCharacter::WornArmorChanged`** (ID 40708, `0x14074A800`, `ghidra/PlayerCharacter_WornArmorChanged`):
  `FUN_1402259D0`, `FUN_140238C30`, then `GetWeightInContainer(this)`.

Still not inspected (not needed for `InventoryWeight`):

- `ModifyActorValue` (slot 5), `ModActorValue` (slot 6).
- `FUN_1407261A0` / `FUN_1407261D0`: only reached when the actor value's flag bit `0x12` is set;
  `InventoryWeight` is registered with flags 0 (`FUN_14043C1E0`, `ghidra/0x1406735f0.md`).
- `FUN_1402259D0` / `FUN_140238C30` inside `PlayerCharacter::WornArmorChanged`.

## 8. Key addresses reference

| Address       | Function / data                      |
| ------------- | ------------------------------------ |
| `0x14189E2F0` | `VTABLE_Actor_6`                     |
| `0x14065E270` | Actor constructor                    |
| `0x1406B2230` | Actor `GetActorValue`, vtable slot 1 |
| `0x1406B23A0` | Actor `GetActorValueMax`, slot 2     |
| `0x1406B2470` | Actor `GetBaseActorValue`, slot 3    |
| `0x1406D02E0` | Base-value table lookup              |
| `0x1406D0380` | Base-value table update/insert       |
| `0x1406D0620` | Base-value table removal             |
| `0x1406D0A00` | Modifier-record lookup               |
| `0x1406CFEF0` | Sum of three modifier floats         |
| `0x1406B2A40` | `Actor::SendActorValueUpdate`        |
| `0x1406B3C90` | `PlayerCharacter::sub` callback      |
| `0x14073A250` | HUD warning path                     |
| `0x1407261A0` | Special GetActorValue path           |
| `0x1407261D0` | Special-path write/update            |
| `0x14043C130` | `ActorValueOwner::sub` (ID 27229): calls `computeBaseFunc` |
| `0x1406735F0` | ID 37456: `InventoryWeight` `computeBaseFunc` -> `GetWeightInContainer` |
| `0x14072FDD0` | ID 40434: bottom-bar `encumbrance` / `maxEncumbrance` |
| `0x14074A800` | ID 40708: `PlayerCharacter::WornArmorChanged` |
| `0x14094F9A0` | Fills the bottom-bar object (`UpdatePlayerInfo`) |

## 9. Verified chain: why the inventory weight was stale (Claude, round 4)

Each step is checked against the listing or decompile named:

1. Equip in the open inventory → the bottom bar is rebuilt by `FUN_14094F9A0`, which first calls the
   player's virtual `WornArmorChanged` (`call [rax+0x908]` at `0x14094F9D2`) → ID 40708 →
   `GetWeightInContainer(player)`.
2. It then reads `encumbrance` through ID 40434 = `GetActorValue(InventoryWeight)` (call at `0x14094FB42`).
3. `GetActorValue` → `GetBaseActorValue` (ID 38464) returns the cached base at `Actor+0x208` when present.
   On a miss, for the player it always calls `ActorValueOwner::sub` → `computeBaseFunc` (ID 37456) →
   `GetWeightInContainer` → `InventoryChanges::GetInventoryWeight` (our call hook, `+0x4E`), and caches
   the result.
4. Vanilla `GetInventoryWeight`, after recomputing, calls `SendActorValueUpdate(InventoryWeight, old, delta)`
   → sink 38489 → `FUN_1406D0620(actor+0x208, 0x1F)` removes the cached base.
5. The mod's hook returned the equipped weight for the player without calling `GetInventoryWeight`, so
   step 4 never ran in the menu. Only the player-update sync's `SetActorValue` sent it (section 7), and
   that sync waits until the menu closes.

Fix (commit a32ef89): the hook sends the same `SendActorValueUpdate` when the reported equipped weight
changes.

**Scope:** This document records the functions, offsets, data structures and call relationships identified so far. It deliberately does not assign semantic names to the three modifier floats or establish the source of their values.