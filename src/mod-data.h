#pragma once

#include "API/PerkEntryPointExtenderAPI.h"

namespace EXCO
{

namespace DATA
{
inline constexpr auto MOD_VERSION = 1;
inline constexpr auto MOD_NAME    = "er-equipload"; // Exhaustion Combat
} // namespace DATA

inline constexpr auto TOML_DEFAULT   = "Data/SKSE/Plugins/er-equipload.toml";        // exhaustion-combat
inline constexpr auto TOML_CUSTOM    = "Data/SKSE/Plugins/er-equipload-custom.toml"; // exhaustion-combat
inline constexpr auto MOD_NPC        = "er-equipload.NPC";                           // Stamina.NPC
inline constexpr auto MOD_PL         = "er-equipload.Player";                        // Stamina.Player
inline constexpr auto SETTING_PLAYER = "er-equipload";                               // Exhaustion
inline constexpr auto SETTING_NPCS   = "NPCS";

namespace ENTRIES
{
inline constexpr auto maxCarryWeight                 = "MaxCarryWeight";
inline constexpr RE::PerkEntryPoint maxCarryWeightEP = RE::PerkEntryPoint::kGetMaxCarryWeight;

} // namespace ENTRIES

} // namespace EXCO