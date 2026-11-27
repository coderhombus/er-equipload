#include "config/config-store.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <exception>
#include <format>
#include <fstream>
#include <limits>
#include <set>
#include <sstream>
#include <toml.hpp>
#include <type_traits>

namespace EquipLoad::Config
{
namespace
{
const toml::value* FindTable(const toml::value& a_root, std::string_view a_dottedSection)
{
    const toml::value* current = &a_root;
    std::size_t start          = 0;
    while (start <= a_dottedSection.size())
    {
        const std::size_t end = a_dottedSection.find('.', start);
        const std::string part(a_dottedSection.substr(start, end == std::string_view::npos ? std::string_view::npos : end - start));
        if (!current->is_table() || !current->contains(part))
        {
            return nullptr;
        }
        current = &current->at(part);
        if (end == std::string_view::npos)
        {
            break;
        }
        start = end + 1;
    }
    return current->is_table() ? current : nullptr;
}

std::string Where(const ParameterSpec<bool>& s)
{
    return std::format("[{}] {}", s.section, s.key);
}
std::string Where(const ParameterSpec<float>& s)
{
    return std::format("[{}] {}", s.section, s.key);
}
std::string Where(const ParameterSpec<std::int32_t>& s)
{
    return std::format("[{}] {}", s.section, s.key);
}

std::string FormatValue(bool a_value)
{
    return a_value ? "true" : "false";
}
std::string FormatValue(std::int32_t a_value)
{
    return std::format("{}", a_value);
}
std::string FormatValue(float a_value)
{
    std::string text = std::format("{}", a_value); // shortest round-trip representation
    if (text.find_first_of(".eEn") == std::string::npos)
    {
        text += ".0"; // keep it a TOML float, not an integer
    }
    return text;
}

/// Reads one raw TOML value into a parameter, applying the validation rules.
template <class T>
void Apply(Parameter<T>& a_parameter, const toml::value& a_raw, std::vector<Diagnostic>& a_out)
{
    const auto& spec = a_parameter.Spec();
    const auto where = Where(spec);

    const auto rejectType = [&](std::string_view a_expected)
    {
        a_out.push_back({Severity::Warning, std::format("{}: expected {}, found {}; using default {}", where, a_expected,
                                                        toml::to_string(a_raw.type()), FormatValue(spec.defaultValue))});
    };

    T value{};
    if constexpr (std::is_same_v<T, bool>)
    {
        if (!a_raw.is_boolean())
        {
            return rejectType("true or false");
        }
        value = a_raw.as_boolean();
    }
    else if constexpr (std::is_same_v<T, float>)
    {
        double number = 0.0;
        if (a_raw.is_floating())
        {
            number = a_raw.as_floating();
        }
        else if (a_raw.is_integer())
        {
            number = static_cast<double>(a_raw.as_integer()); // "10" is as good as "10.0"
        }
        else
        {
            return rejectType("a number");
        }
        if (!std::isfinite(number))
        {
            a_out.push_back(
                {Severity::Warning, std::format("{}: {} is not a finite number; using default {}", where, number, FormatValue(spec.defaultValue))});
            return;
        }
        // Clamp in double first so huge values do not overflow float before range checking.
        value = static_cast<float>(
            std::clamp(number, static_cast<double>(std::numeric_limits<float>::lowest()), static_cast<double>(std::numeric_limits<float>::max())));
    }
    else
    {
        static_assert(std::is_same_v<T, std::int32_t>);
        if (!a_raw.is_integer())
        {
            return rejectType("an integer");
        }
        const auto number = a_raw.as_integer();
        value             = static_cast<std::int32_t>(
            std::clamp<std::int64_t>(number, std::numeric_limits<std::int32_t>::min(), std::numeric_limits<std::int32_t>::max()));
    }

    if (!a_parameter.InRange(value))
    {
        const T clamped = a_parameter.Clamp(value);
        a_out.push_back({Severity::Warning, std::format("{}: {} is outside {}..{}; clamped to {}", where, FormatValue(value),
                                                        FormatValue(spec.minValue), FormatValue(spec.maxValue), FormatValue(clamped))});
        value = clamped;
    }
    a_parameter.SetValue(value);
}

void CollectLeafKeys(const toml::value& a_table, const std::string& a_prefix, std::vector<std::string>& a_out)
{
    for (const auto& [key, child] : a_table.as_table())
    {
        const std::string path = a_prefix.empty() ? key : a_prefix + "." + key;
        if (child.is_table())
        {
            CollectLeafKeys(child, path, a_out);
        }
        else
        {
            a_out.push_back(path);
        }
    }
}

template <class T>
void AppendSetting(std::ostringstream& a_out, const Parameter<T>& a_parameter)
{
    const auto& spec             = a_parameter.Spec();
    std::string_view description = spec.description; // one comment line per '\n'
    while (!description.empty())
    {
        const auto lineEnd = description.find('\n');
        a_out << "# " << description.substr(0, lineEnd) << '\n';
        description = lineEnd == std::string_view::npos ? std::string_view{} : description.substr(lineEnd + 1);
    }
    if constexpr (std::is_same_v<T, bool>)
    {
        a_out << "# Default: " << FormatValue(spec.defaultValue) << " | Valid: true or false\n";
    }
    else
    {
        a_out << "# Default: " << FormatValue(spec.defaultValue) << " | Valid: " << FormatValue(spec.minValue) << " to " << FormatValue(spec.maxValue)
              << '\n';
    }
    a_out << spec.key << " = " << FormatValue(a_parameter.GetValue()) << "\n\n";
}

std::string_view SectionOf(const ParameterRef& a_ref)
{
    return std::visit([](const auto* a_parameter) -> std::string_view { return a_parameter->Spec().section; }, a_ref);
}
} // namespace

std::size_t LoadReport::Count(Severity a_severity) const
{
    return static_cast<std::size_t>(
        std::count_if(diagnostics.begin(), diagnostics.end(), [a_severity](const Diagnostic& d) { return d.severity == a_severity; }));
}

LoadReport LoadFromString(std::string_view a_toml, Settings& a_settings)
{
    LoadReport report;
    report.fileFound = true;
    a_settings.ResetToDefaults();

    toml::value root;
    try
    {
        auto result = toml::try_parse_str(std::string(a_toml));
        if (result.is_err())
        {
            std::string message = "config could not be parsed; using defaults for every setting";
            for (const auto& error : result.unwrap_err())
            {
                message += "\n" + toml::format_error(error);
            }
            report.diagnostics.push_back({Severity::Error, std::move(message)});
            return report;
        }
        root = std::move(result.unwrap());
    }
    catch (const std::exception& e)
    {
        report.diagnostics.push_back({Severity::Error, std::format("config could not be parsed ({}); using defaults", e.what())});
        return report;
    }
    report.parsed = true;

    std::set<std::string> knownKeys;
    for (const auto& ref : a_settings.All())
    {
        std::visit(
            [&](auto* a_parameter)
            {
                const auto& spec = a_parameter->Spec();
                knownKeys.insert(spec.section + "." + spec.key);

                const toml::value* table = FindTable(root, spec.section);
                if (!table || !table->contains(spec.key))
                {
                    report.diagnostics.push_back(
                        {Severity::Info, std::format("{}: missing; using default {}", Where(spec), FormatValue(spec.defaultValue))});
                    return;
                }
                Apply(*a_parameter, table->at(spec.key), report.diagnostics);
            },
            ref);
    }

    std::vector<std::string> present;
    if (root.is_table())
    {
        CollectLeafKeys(root, "", present);
        std::ranges::sort(present); // deterministic diagnostic order
    }
    for (const auto& path : present)
    {
        if (!knownKeys.contains(path))
        {
            report.diagnostics.push_back({Severity::Warning, std::format("unknown setting '{}' ignored (typo or outdated key?)", path)});
        }
    }
    return report;
}

LoadReport LoadFromFile(const std::filesystem::path& a_path, Settings& a_settings)
{
    std::ifstream file(a_path, std::ios::binary);
    if (!file)
    {
        a_settings.ResetToDefaults();
        LoadReport report;
        report.diagnostics.push_back(
            {Severity::Info, std::format("config file '{}' not found; using defaults (it is created when settings are saved)", a_path.string())});
        return report;
    }
    std::ostringstream text;
    text << file.rdbuf();
    return LoadFromString(text.str(), a_settings);
}

std::string Serialize(Settings& a_settings)
{
    std::ostringstream out;
    out << "# ER Equipload configuration\n"
           "#\n"
           "# Read when the game starts and rewritten when settings change in the in-game menu.\n"
           "# Every setting lists what it does, its default and its valid range. Values outside the\n"
           "# range are clamped; missing or invalid values fall back to the default and are reported\n"
           "# in the SKSE log (Documents/My Games/Skyrim Special Edition/SKSE/er-equipload.log).\n";

    std::string_view currentSection;
    for (const auto& ref : a_settings.All())
    {
        const std::string_view section = SectionOf(ref);
        if (section != currentSection)
        {
            out << (currentSection.empty() ? "\n[" : "[") << section << "]\n\n"; // settings already end in a blank line
            currentSection = section;
        }
        std::visit([&out](const auto* a_parameter) { AppendSetting(out, *a_parameter); }, ref);
    }

    std::string text = out.str();
    while (text.ends_with("\n\n"))
    {
        text.pop_back();
    }
    return text;
}

bool SaveToFile(const std::filesystem::path& a_path, Settings& a_settings, std::string& a_error)
{
    const std::string text = Serialize(a_settings);
    auto temp              = a_path;
    temp += ".tmp";

    {
        std::ofstream file(temp, std::ios::binary | std::ios::trunc);
        if (!file)
        {
            a_error = std::format("cannot open '{}' for writing", temp.string());
            return false;
        }
        file << text;
        file.flush();
        if (!file)
        {
            a_error = std::format("failed writing '{}'", temp.string());
            return false;
        }
    }

    std::error_code ec;
    std::filesystem::rename(temp, a_path, ec); // replaces the destination (MoveFileEx on Windows)
    if (ec)
    {
        a_error = std::format("cannot replace '{}': {}", a_path.string(), ec.message());
        std::filesystem::remove(temp, ec);
        return false;
    }
    return true;
}
} // namespace EquipLoad::Config
