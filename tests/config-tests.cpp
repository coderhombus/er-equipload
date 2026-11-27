#include <doctest/doctest.h>
#include <filesystem>
#include <fstream>
#include <set>
#include <sstream>
#include <string>
#include <variant>

#include "config/config-store.h"
#include "config/settings.h"

using namespace EquipLoad::Config;

namespace
{
bool HasDiagnostic(const LoadReport& a_report, Severity a_severity, std::string_view a_needle)
{
    for (const auto& d : a_report.diagnostics)
    {
        if (d.severity == a_severity && d.message.find(a_needle) != std::string::npos)
        {
            return true;
        }
    }
    return false;
}

std::string ReadFile(const std::filesystem::path& a_path)
{
    std::ifstream file(a_path, std::ios::binary);
    std::stringstream text;
    text << file.rdbuf();
    std::string content = text.str();
    std::erase(content, '\r'); // tolerate a CRLF checkout on Windows
    return content;
}
} // namespace

TEST_CASE("Parameter table is internally consistent")
{
    Settings settings;
    std::set<std::string> keys;
    std::set<std::string> labels;

    for (const auto& ref : settings.All())
    {
        std::visit(
            [&](auto* p)
            {
                const auto& s = p->Spec();
                CAPTURE(s.key);
                CHECK_FALSE(s.section.empty());
                CHECK_FALSE(s.key.empty());
                CHECK_FALSE(s.label.empty());
                CHECK_FALSE(s.description.empty());
                CHECK(s.description.find('%') == std::string::npos);    // tooltips are printf-style formats
                CHECK(s.description.find("\n\n") == std::string::npos); // no empty comment lines
                CHECK(s.description.back() != '\n');
                CHECK_FALSE(s.maxValue < s.minValue);
                CHECK(p->InRange(s.defaultValue));
                CHECK(p->GetValue() == s.defaultValue);
                CHECK(s.visibleInMenu);
                CHECK(keys.insert(s.section + "." + s.key).second); // unique key
                CHECK(labels.insert(s.label).second);               // unique ImGui id
            },
            ref);
    }
    CHECK(keys == std::set<std::string>{"General.iLogLevel", "Player.bPlayerEnabled"});
}

TEST_CASE("Defaults: mod enabled, info logging")
{
    Settings s;
    CHECK(s.player.enabled.GetValue());
    CHECK(s.general.logLevel.GetValue() == kLogLevelInfo);
    CHECK(s.general.logLevel.Spec().minValue == kLogLevelTrace);
    CHECK(s.general.logLevel.Spec().maxValue == kLogLevelOff);
}

TEST_CASE("SetValue clamps to the valid range; ResetToDefaults restores the table defaults")
{
    Settings s;
    s.general.logLevel.SetValue(42);
    CHECK(s.general.logLevel.GetValue() == kLogLevelOff);
    s.general.logLevel.SetValue(-3);
    CHECK(s.general.logLevel.GetValue() == kLogLevelTrace);
    s.player.enabled.SetValue(false);
    s.ResetToDefaults();
    CHECK(s.player.enabled.GetValue());
    CHECK(s.general.logLevel.GetValue() == kLogLevelInfo);
}

TEST_CASE("Serialize -> Load round-trips every value with no diagnostics")
{
    Settings source;
    source.player.enabled.SetValue(false);
    source.general.logLevel.SetValue(1);

    const std::string text = Serialize(source);

    Settings loaded;
    const auto report = LoadFromString(text, loaded);
    CHECK(report.parsed);
    CHECK(report.diagnostics.empty());
    CHECK_FALSE(loaded.player.enabled.GetValue());
    CHECK(loaded.general.logLevel.GetValue() == 1);
    CHECK(Serialize(loaded) == text);
}

TEST_CASE("Serialized file documents purpose, default and range for every setting")
{
    Settings s;
    const std::string text = Serialize(s);
    CHECK(text.find("[General]") != std::string::npos);
    CHECK(text.find("[Player]") != std::string::npos);
    CHECK(text.find("# Default: 2 | Valid: 0 to 6\niLogLevel = 2") != std::string::npos);
    CHECK(text.find("# Default: true | Valid: true or false\nbPlayerEnabled = true") != std::string::npos);
    SUBCASE("multi-line descriptions become one comment line each")
    {
        CHECK(text.find("# On: only equipped items count towards the player's carried weight and over-encumbrance.\n# Off: vanilla") !=
              std::string::npos);
        std::istringstream lines(text);
        for (std::string line; std::getline(lines, line);)
        {
            CAPTURE(line);
            const bool isComment = line.starts_with("#"), isSection = line.starts_with("["), isBlank = line.empty();
            const bool isAssignment = line.find(" = ") != std::string::npos;
            CHECK((isComment || isSection || isBlank || isAssignment));
        }
    }
}

TEST_CASE("Loading: missing keys, wrong types, ranges and unknown keys")
{
    Settings s;
    s.player.enabled.SetValue(false); // stale value must be reset by loading

    SUBCASE("missing -> default")
    {
        const auto report = LoadFromString("[General]\niLogLevel = 3\n", s);
        REQUIRE(report.parsed);
        CHECK(s.player.enabled.GetValue());
        CHECK(HasDiagnostic(report, Severity::Info, "bPlayerEnabled: missing"));
        CHECK(s.general.logLevel.GetValue() == 3);
    }
    SUBCASE("wrong types, out of range and typos")
    {
        const auto report = LoadFromString(R"(
[General]
iLogLevel = 9

[Player]
bPlayerEnabled = 0
bPlayerEnabeld = false
)",
                                           s);
        REQUIRE(report.parsed);
        CHECK(s.player.enabled.GetValue());
        CHECK(HasDiagnostic(report, Severity::Warning, "bPlayerEnabled: expected true or false"));
        CHECK(s.general.logLevel.GetValue() == kLogLevelOff);
        CHECK(HasDiagnostic(report, Severity::Warning, "iLogLevel: 9 is outside 0..6; clamped to 6"));
        CHECK(HasDiagnostic(report, Severity::Warning, "unknown setting 'Player.bPlayerEnabeld'"));
    }
    SUBCASE("a float for an integer setting is rejected")
    {
        const auto report = LoadFromString("[General]\niLogLevel = 1.5\n", s);
        CHECK(s.general.logLevel.GetValue() == kLogLevelInfo);
        CHECK(HasDiagnostic(report, Severity::Warning, "iLogLevel: expected an integer"));
    }
}

TEST_CASE("The pre-refactor file loads: its old key is reported, the default applies")
{
    Settings s;
    const auto report = LoadFromString("[er-equipload.NPC]\n\n[er-equipload.Player]\nbPlayerEquippedWeightOnly = false\n", s);
    CHECK(report.parsed);
    CHECK(report.Count(Severity::Error) == 0);
    CHECK(s.player.enabled.GetValue());
    CHECK(HasDiagnostic(report, Severity::Warning, "unknown setting 'er-equipload.Player.bPlayerEquippedWeightOnly'"));
}

TEST_CASE("Unparsable file leaves every setting at its default")
{
    Settings s;
    s.player.enabled.SetValue(false);
    const auto report = LoadFromString("[Player\nbPlayerEnabled = false\n", s);
    CHECK_FALSE(report.parsed);
    CHECK(report.Count(Severity::Error) == 1);
    CHECK(s.player.enabled.GetValue());
}

TEST_CASE("File save and load use the same file")
{
    const auto path = std::filesystem::temp_directory_path() / "er-equipload-test.toml";
    std::filesystem::remove(path);

    Settings missing;
    const auto notFound = LoadFromFile(path, missing);
    CHECK_FALSE(notFound.fileFound);
    CHECK(HasDiagnostic(notFound, Severity::Info, "not found"));

    Settings source;
    source.general.logLevel.SetValue(4);
    std::string error;
    REQUIRE(SaveToFile(path, source, error));
    source.general.logLevel.SetValue(1);
    REQUIRE(SaveToFile(path, source, error)); // overwrites in place
    CHECK_FALSE(std::filesystem::exists(path.string() + ".tmp"));

    Settings loaded;
    const auto report = LoadFromFile(path, loaded);
    CHECK(report.fileFound);
    CHECK(report.diagnostics.empty());
    CHECK(loaded.general.logLevel.GetValue() == 1);
    std::filesystem::remove(path);
}

#ifdef ER_EQUIPLOAD_SOURCE_DIR
TEST_CASE("Shipped release TOML is exactly the generated default file")
{
    const std::filesystem::path shipped = std::filesystem::path(ER_EQUIPLOAD_SOURCE_DIR) / "release" / "er-equipload.toml";
    Settings defaults;
    INFO("Regenerate with: er-equipload-tests --write-default-config release/er-equipload.toml");
    CHECK(ReadFile(shipped) == Serialize(defaults));
}
#endif
