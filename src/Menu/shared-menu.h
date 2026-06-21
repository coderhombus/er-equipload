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
inline std::string mod_name_dev     = "skse-template";
inline std::string mod_name         = "SKSE Template";
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
// inline std::string player_attack_cost = "Attack Cost##player";

} // namespace LAB


namespace TOOL
{

// NPCs
// inline std::string npc_attack_cost = "Stamina cost for normal attacks";

// Player
// inline std::string player_attack_cost = "Stamina Cost for normal attacks";
} // namespace TOOL

namespace VAR
{

// inline float npc_attack_cost{};

// inline float player_attack_cost{};

} // namespace VAR

} // namespace MENU
} // namespace EXCO