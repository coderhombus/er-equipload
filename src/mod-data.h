#pragma once

#include "API/PerkEntryPointExtenderAPI.h"

namespace EXCO
{

namespace DATA
{
inline constexpr auto MOD_VERSION = 1;
inline constexpr auto MOD_NAME    = "skse-template"; // Exhaustion Combat
} // namespace DATA

inline constexpr auto TOML_DEFAULT   = "Data/SKSE/Plugins/skse-template.toml";       // exhaustion-combat
inline constexpr auto TOML_CUSTOM    = "Data/SKSE/Plugins/skse-templatecustom.toml"; // exhaustion-combat
inline constexpr auto MOD_NPC        = "skse-template.NPC";                          // Stamina.NPC
inline constexpr auto MOD_PL         = "skse-template.Player";                       // Stamina.Player
inline constexpr auto SETTING_PLAYER = "skse-template";                              // Exhaustion
inline constexpr auto SETTING_NPCS   = "NPCS";

namespace ENTRIES
{
// inline constexpr auto attackStam                 = "NormalAttackStamina";
// inline constexpr RE::PerkEntryPoint attackStamEP = RE::PerkEntryPoint::kModPowerAttackStamina;

} // namespace ENTRIES

} // namespace EXCO