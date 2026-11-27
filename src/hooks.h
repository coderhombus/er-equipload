#pragma once

#include <cstddef>

namespace EquipLoad::Hooks
{
/// Trampoline space Install() needs.
///  - call hook: one 14-byte absolute jump (jmp [rip] + address)
///  - prologue hook: the same jump into our function, plus a stub that runs the overwritten
///    prologue bytes and jumps back into the original (prologue bytes + 14)
inline constexpr std::size_t kAbsoluteJumpBytes = 14;
inline constexpr std::size_t kPrologueBytes     = 6; // both hooked prologues: push reg; sub rsp, 0x30
inline constexpr std::size_t kCallHookCount     = 1;
inline constexpr std::size_t kPrologueHookCount = 2;
inline constexpr std::size_t kTrampolineBytes =
    kCallHookCount * kAbsoluteJumpBytes + kPrologueHookCount * (kAbsoluteJumpBytes + kPrologueBytes + kAbsoluteJumpBytes);

/// Installs every hook. Requires SKSE::AllocTrampoline(kTrampolineBytes) first.
void Install();
} // namespace EquipLoad::Hooks
