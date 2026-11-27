#include "config/settings.h"

#include <string>

namespace EquipLoad::Config
{
// ---------------------------------------------------------------------------------------------
// To change a default, change it here: the shipped TOML (release/er-equipload.toml) is generated
// from this table and a unit test fails if the two drift apart.
// ---------------------------------------------------------------------------------------------
Settings::Settings()
    : general{.logLevel =
                  IntParameter{{.section      = "General",
                                .key          = "iLogLevel",
                                .label        = "Log Level##general",
                                .description  = "Log detail: 0 trace, 1 debug, 2 info, 3 warnings, 4 errors, 5 critical, 6 off.\n"
                                                "1 logs every equipment change and every change of the over-encumbered state with all weights;\n"
                                                "0 also logs every encumbrance and run check. 0 and 1 write large logs.",
                                .defaultValue = kLogLevelInfo,
                                .minValue     = kLogLevelTrace,
                                .maxValue     = kLogLevelOff,
                                .group        = Group::General}}},
      player{.enabled = BoolParameter{{.section      = "Player",
                                       .key          = "bPlayerEnabled",
                                       .label        = "Enabled##player",
                                       .description  = "On: only equipped items count towards the player's carried weight and over-encumbrance.\n"
                                                       "Off: vanilla behaviour (the whole inventory counts). Takes effect immediately.",
                                       .defaultValue = true,
                                       .minValue     = false,
                                       .maxValue     = true,
                                       .group        = Group::Player}}}
{
}

std::vector<ParameterRef> Settings::All()
{
    return {&general.logLevel, &player.enabled};
}

void Settings::ResetToDefaults()
{
    for (const auto& ref : All())
    {
        std::visit([](auto* a_parameter) { a_parameter->ResetToDefault(); }, ref);
    }
}

Settings& Get()
{
    static Settings settings;
    return settings;
}
} // namespace EquipLoad::Config
