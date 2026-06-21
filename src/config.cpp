//
// Created by styyx on 28/04/2026.
//

#include "config.h"

#include "REX/REX/TOML.h"


namespace EXCO::CONFIG
{
void UpdateSettings(const bool a_save)
{
    const auto toml = REX::Singleton<REX::TOML::SettingStore>::GetSingleton();
    toml->Init(TOML_DEFAULT, TOML_CUSTOM);
    if (!a_save)
        toml->Load();
    else
        toml->Save();
}
} // namespace EXCO::CONFIG
