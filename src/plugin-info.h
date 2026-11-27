#pragma once

#include <SKSE/SKSE.h>

#include <array>

namespace EquipLoad::Plugin
{
/// Name the FUCK menu framework knows this plugin by (settings/translation folders). Must match
/// the DLL name set in xmake.lua.
inline constexpr const char* kName = "er-equipload";

/// Display name.
inline constexpr const char* kDisplayName = "ER Equipload";

// -------------------------------------------------------------------------------------------
// Runtime compatibility
//
// Hook addresses, offsets and patched instruction bytes were verified only against the
// runtimes listed here. Address Library would let the DLL load on any AE build, so the plugin
// checks this list itself and refuses to load on anything else.
//
//  - To support another runtime: verify the hooks, then add its version to the list.
//  - To test on an unlisted runtime temporarily: set kEnforceSupportedRuntime to false. The
//    plugin then only logs a warning. Do not ship builds with this disabled.
// -------------------------------------------------------------------------------------------
inline constexpr bool kEnforceSupportedRuntime = true;

inline constexpr std::array kSupportedRuntimes{
    SKSE::RUNTIME_SSE_1_6_1170,
};
} // namespace EquipLoad::Plugin
