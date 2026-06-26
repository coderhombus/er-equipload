#pragma once

namespace EXCO
{
namespace MENU
{
namespace SHARED
{
void LoadFromConfig();
void RestoreDefaults();

} // namespace SHARED

namespace TITLE
{
inline std::string mod_name_dev     = "er-equipload";
inline std::string mod_name         = "ER Equipload";
inline std::string group_name       = "ASX Mods";
inline std::string npc_section      = "NPC Config";
inline std::string player_section   = "Player Config";
inline std::string settings_section = "Settings";
inline std::string restore_button   = "Reset Defaults";
inline std::string system_section   = "System";
} // namespace TITLE

namespace LAB
{
// NPCs
// inline std::string npc_attack_cost = "Attack Cost##npc";

// Player
inline std::string player_enable_mod = "Enable Mod##player";

} // namespace LAB


namespace TOOL
{

// NPCs
// inline std::string npc_attack_cost = "Stamina cost for normal attacks";

// Player
inline std::string player_enable_mod = "Only count equipped item for player weight";
} // namespace TOOL

namespace VAR
{

// inline float npc_attack_cost{};

inline bool player_enable_mod{};

} // namespace VAR

} // namespace MENU
} // namespace EXCO