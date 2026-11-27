#pragma once

// In-game settings page for the FUCK menu framework. Every widget is generated from the
// parameter table in config/settings.cpp: to add a setting, add it there.

namespace EquipLoad::Menu
{
/// Connects to FUCK and registers the settings tool. Call at kDataLoaded.
void Register();
} // namespace EquipLoad::Menu
