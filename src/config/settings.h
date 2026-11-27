#pragma once

// The single source of truth for every configurable value: TOML section/key, default, range,
// menu label, tooltip/TOML comment and menu visibility all live in settings.cpp.
// Engine-independent; gameplay code reaches it through Config::Get().

#include <cstdint>
#include <vector>

#include "config/parameter.h"

namespace EquipLoad::Config
{
/// spdlog level numbers: 0 trace, 1 debug, 2 info, 3 warn, 4 error, 5 critical, 6 off.
inline constexpr std::int32_t kLogLevelTrace = 0;
inline constexpr std::int32_t kLogLevelInfo  = 2;
inline constexpr std::int32_t kLogLevelOff   = 6;

struct GeneralSettings
{
    IntParameter logLevel;
};

/// Player settings. NPCs are not supported yet; NPC support would get its own struct (and
/// Group) next to this one rather than sharing the player's values.
struct PlayerSettings
{
    BoolParameter enabled;
};

struct Settings
{
    Settings();

    GeneralSettings general;
    PlayerSettings player;

    /// Every parameter, in file and menu order.
    [[nodiscard]] std::vector<ParameterRef> All();

    void ResetToDefaults();
};

/// Process-wide settings instance (constructed on first use, so no static-init-order issues).
[[nodiscard]] Settings& Get();
} // namespace EquipLoad::Config
