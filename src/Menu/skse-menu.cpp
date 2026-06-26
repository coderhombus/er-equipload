#include "skse-menu.h"

#include "API/SKSEMenuFramework.h"
#include "config.h"
#include "shared-menu.h"
#include "st-ui.h"


namespace EXCO
{

void SKSEMenu::RegisterSKSEMenu()
{
    if (!SKSEMenuFramework::IsInstalled())
    {
        return;
    }
    SKSEMenuFramework::SetSection(MENU::TITLE::mod_name);
    SKSEMenuFramework::AddSectionItem(MENU::TITLE::settings_section, RenderMenu);
    RegisterMenuOpenCloseEventSKSE();
}

void SKSEMenu::OnMenuOpen()
{
    MENU::SHARED::LoadFromConfig();
}
void SKSEMenu::OnMenuClose()
{
    CONFIG::UpdateSettings(true);
}

static void __stdcall MenuEventListener(SKSEMenuFramework::Model::EventType eventType)
{
    switch (eventType)
    {
        case SKSEMenuFramework::Model::kOpenMenu:
            SKSEMenu::OnMenuOpen();
            break;
        case SKSEMenuFramework::Model::kCloseMenu:
            SKSEMenu::OnMenuClose();
            break;
        default:
            break;
    }
}

void SKSEMenu::RegisterMenuOpenCloseEventSKSE()
{
    static SKSEMenuFramework::Model::Event event(MenuEventListener, 0);
}
void SKSEMenu::DrawNPCSection()
{
    using namespace MENU;
    UIUtil::GreenTitleText("Config for NPCs");
    // UIUtil::SetSliderFloat(LAB::npc_attack_cost.c_str(), VAR::npc_attack_cost, CONFIG::npc_attack_cost, 0.0, 50.0,
    //                        TOOL::npc_attack_cost.c_str());
}
void SKSEMenu::DrawPlayerSection()
{
    using namespace MENU;
    UIUtil::GreenTitleText("Config for Player");
    // UIUtil::SetSliderFloat(LAB::player_attack_cost.c_str(), VAR::player_attack_cost, CONFIG::player_attack_cost, 0.0,
    //                        50.0, TOOL::player_attack_cost.c_str());
    UIUtil::SetCheckbox(LAB::player_enable_mod.c_str(), VAR::player_enable_mod, CONFIG::player_enable_mod, TOOL::player_enable_mod.c_str());
}
void SKSEMenu::DrawResetMenuSection()
{
    if (Button(MENU::TITLE::restore_button.c_str()))
    {
        MENU::SHARED::RestoreDefaults();
    }
}

void __stdcall SKSEMenu::RenderMenu()
{
    if (CollapsingHeader(MENU::TITLE::player_section.c_str(), ImGuiTreeNodeFlags_DefaultOpen))
    {
        DrawPlayerSection();
    }
    if (CollapsingHeader(MENU::TITLE::npc_section.c_str(), ImGuiTreeNodeFlags_DefaultOpen))
    {
        DrawNPCSection();
    }
    if (CollapsingHeader(MENU::TITLE::system_section.c_str(), ImGuiTreeNodeFlags_DefaultOpen))
    {
        DrawResetMenuSection();
    }
}

} // namespace EXCO