#pragma once

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <string>

namespace EquipLoad
{
namespace logs = SKSE::log;

/// Display name for log lines ("Lydia", "Iron Helmet"); "<none>" for null.
[[nodiscard]] inline std::string Describe(const RE::TESForm* a_form)
{
    if (!a_form)
    {
        return "<none>";
    }
    const char* name = a_form->GetName();
    return name && name[0] ? name : "<unnamed>";
}
} // namespace EquipLoad
