#include "menu/settings-menu.h"

#include <SimpleIni.h> // FUCK_API.h uses CSimpleIniA without including it
#include <atomic>
#include <st-fui.h>
#include <string>
#include <variant>

#include "config/config-store.h"
#include "config/settings.h"
#include "logging.h"
#include "plugin-info.h"

namespace EquipLoad::Menu
{
namespace
{
using StyyxUtil::FUCKUtil;

constexpr unsigned int kRequiredFuckApiVersion = 1;
constexpr float kSectionTitleIndent            = 5.0f;

/// Applies settings that must take effect the moment they change, not only on the next read.
void OnChanged(const void* a_parameter)
{
    auto& settings = Config::Get();
    if (a_parameter == &settings.general.logLevel)
    {
        SetLogLevel(settings.general.logLevel.GetValue());
    }
}

bool DrawWidget(Config::BoolParameter& a_parameter)
{
    const auto& spec = a_parameter.Spec();
    bool value       = a_parameter.GetValue();
    return FUCKUtil::Checkbox(spec.label.c_str(), value, a_parameter, spec.description.c_str());
}

bool DrawWidget(Config::FloatParameter& a_parameter)
{
    const auto& spec = a_parameter.Spec();
    float value      = a_parameter.GetValue();
    return FUCKUtil::SliderFloat(spec.label.c_str(), value, a_parameter, spec.minValue, spec.maxValue, spec.description.c_str());
}

bool DrawWidget(Config::IntParameter& a_parameter)
{
    const auto& spec = a_parameter.Spec();
    int value        = a_parameter.GetValue();
    return FUCKUtil::SliderInt(spec.label.c_str(), value, a_parameter, static_cast<int>(spec.minValue), static_cast<int>(spec.maxValue),
                               spec.description.c_str());
}

class SettingsTool final : public FUCK::ITool
{
  public:
    const char* PluginName() const override { return Plugin::kName; }
    const char* Name() const override { return Plugin::kDisplayName; }
    const char* Group() const override { return "ASX Mods"; }

    void Draw() override
    {
        DrawSection("Player", "Equip load for the Player", Config::Group::Player);
        if (FUCK::CollapsingHeader("General"))
        {
            DrawGroup(Config::Group::General);
            if (FUCK::Button("Reset Defaults"))
            {
                auto& settings = Config::Get();
                settings.ResetToDefaults();
                for (const auto& ref : settings.All())
                {
                    std::visit([](const auto* a_parameter) { OnChanged(a_parameter); }, ref);
                }
                m_dirty = true;
                logs::info("settings reset to defaults from the menu");
            }
        }
    }

    // Saves only when something changed. Runs on the menu (render) thread; the file is small.
    void OnClose() override
    {
        if (!m_dirty.exchange(false))
        {
            return;
        }
        std::string error;
        if (Config::SaveToFile(std::string(Config::kConfigFilePath), Config::Get(), error))
        {
            logs::info("settings saved to {}", Config::kConfigFilePath);
        }
        else
        {
            logs::error("saving settings failed: {}", error);
        }
    }

  private:
    void DrawSection(const char* a_header, const char* a_title, Config::Group a_group)
    {
        if (!FUCK::CollapsingHeader(a_header))
        {
            return;
        }
        FUCKUtil::GreenTitleText(a_title, kSectionTitleIndent);
        FUCK::Indent();
        DrawGroup(a_group);
        FUCK::Unindent();
    }

    void DrawGroup(Config::Group a_group)
    {
        for (const auto& ref : Config::Get().All())
        {
            std::visit(
                [&](auto* a_parameter)
                {
                    const auto& spec = a_parameter->Spec();
                    if (spec.group == a_group && spec.visibleInMenu && DrawWidget(*a_parameter))
                    {
                        OnChanged(a_parameter);
                        m_dirty = true;
                    }
                },
                ref);
        }
    }

    std::atomic_bool m_dirty{false};
};

SettingsTool g_settingsTool;
} // namespace

void Register()
{
    if (FUCK::Connect(Plugin::kName, kRequiredFuckApiVersion))
    {
        FUCK::RegisterTool(&g_settingsTool);
        logs::info("registered settings page with FUCK");
    }
    else
    {
        logs::info("FUCK menu framework not available; settings can still be edited in {}", Config::kConfigFilePath);
    }
}
} // namespace EquipLoad::Menu
