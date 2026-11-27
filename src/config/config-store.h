#pragma once

// Loads, validates and saves Settings as one documented TOML file. Engine-independent: it
// returns diagnostics instead of logging, so callers decide how to report them and tests can
// inspect them.

#include <filesystem>
#include <string>
#include <string_view>
#include <vector>

#include "config/settings.h"

namespace EquipLoad::Config
{
/// The one file settings are read from and written to (relative to the game directory).
inline constexpr std::string_view kConfigFilePath = "Data/SKSE/Plugins/er-equipload.toml";

enum class Severity
{
    Info,
    Warning,
    Error,
};

struct Diagnostic
{
    Severity severity;
    std::string message;
};

struct LoadReport
{
    bool fileFound = false;
    bool parsed    = false;
    std::vector<Diagnostic> diagnostics;

    [[nodiscard]] std::size_t Count(Severity a_severity) const;
};

/// Resets every parameter to its default, then applies values from TOML text:
///  - missing key          -> default (Info)
///  - wrong type           -> default (Warning); an integer is accepted for a float setting
///  - NaN / infinity       -> default (Warning)
///  - out of range         -> clamped (Warning)
///  - unknown key/section  -> ignored (Warning), catches typos
///  - unparsable file      -> all defaults (Error)
LoadReport LoadFromString(std::string_view a_toml, Settings& a_settings);

/// LoadFromString for a file. A missing file leaves defaults in place (Info).
LoadReport LoadFromFile(const std::filesystem::path& a_path, Settings& a_settings);

/// The full TOML document for the current values, every setting preceded by comments with its
/// purpose, default and valid range. The shipped release file is this output for defaults.
[[nodiscard]] std::string Serialize(Settings& a_settings);

/// Writes Serialize() to `a_path` via a temporary file and rename. Returns false and fills
/// `a_error` on failure; the existing file is left untouched in that case.
bool SaveToFile(const std::filesystem::path& a_path, Settings& a_settings, std::string& a_error);
} // namespace EquipLoad::Config
