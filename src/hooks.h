#pragma once

#include <cstddef>

namespace EquipLoad::Hooks
{
/// Bytes of SKSE trampoline Install() needs: one 14-byte branch per branch or call hook.
inline constexpr std::size_t kTrampolineHookCount = 3;
inline constexpr std::size_t kBytesPerBranch      = 14;
inline constexpr std::size_t kTrampolineBytes     = kTrampolineHookCount * kBytesPerBranch;

/// Installs every hook. Requires SKSE::AllocTrampoline(kTrampolineBytes) first.
void Install();
} // namespace EquipLoad::Hooks
