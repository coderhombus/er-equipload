#pragma once
#include "REX/REX/TOML.h"
#include "mod-data.h"

namespace EXCO::CONFIG
{
inline REX::TOML::Bool player_enable_mod{MOD_PL, "bPlayerEquippedWeightOnly", true};

// inline REX::TOML::F32 player_attack_cost{STAM_PL, "fPlayerStaminaCostAttack", 10.F};

void UpdateSettings(bool a_save = false);
} // namespace EXCO::CONFIG
