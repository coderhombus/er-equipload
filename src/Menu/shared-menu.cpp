#include "shared-menu.h"

#include "config.h"


void EXCO::MENU::SHARED::LoadFromConfig()
{

    using namespace VAR;
    // npcs
    // npc_attack_cost = CONFIG::stamina_cost_attack_npc.GetValue();

    // player
    player_enable_mod = CONFIG::player_enable_mod.GetValue();
}

void EXCO::MENU::SHARED::RestoreDefaults()
{

    using namespace VAR;
    // Default values

    // npcs
    // npc_attack_cost = 10.F;

    // player
    // player_attack_cost = 10.F;
    player_enable_mod = true;

    // ---------------------------------------------------------------

    // Set Defaults
    // CONFIG::npc_attack_cost.SetValue(npc_attack_cost);

    // player
    CONFIG::player_enable_mod.SetValue(true);

    CONFIG::UpdateSettings(true);
}
