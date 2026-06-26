#include "ingame-menu.h"

#include "API/FUCK_API.h"
#include "Menu/shared-menu.h"
#include "config.h"
#include "shared-menu.h"
#include "st-fui.h"

namespace EXCO
{

void FMenu::ModITool::Draw()
{
    if (FUCK::CollapsingHeader(MENU::TITLE::npc_section.c_str()))
    {

        DrawNPCs();
    }
    if (FUCK::CollapsingHeader(MENU::TITLE::player_section.c_str()))
    {

        DrawPlayer();
    }
    if (FUCK::CollapsingHeader(MENU::TITLE::system_section.c_str()))
    {
        DrawSystem();
    }
}
void FMenu::ModITool::OnOpen()
{
    MENU::SHARED::LoadFromConfig();
}
void FMenu::ModITool::OnClose()
{
    CONFIG::UpdateSettings(true);
}
void FMenu::ModITool::DrawNPCs()
{

    using namespace MENU;
    FUCKUtil::GreenTitleText("Config for NPCs", 5);
    FUCK::Indent();


    FUCK::Unindent();
};
void FMenu::ModITool::DrawPlayer()
{

    using namespace MENU;
    FUCKUtil::GreenTitleText("Config for Player", 5);
    FUCK::Indent();

    FUCKUtil::Checkbox(LAB::player_enable_mod.c_str(), VAR::player_enable_mod, CONFIG::player_enable_mod, TOOL::player_enable_mod.c_str());

    FUCK::Unindent();
}
void FMenu::ModITool::DrawSystem()
{
    if (FUCK::Button(MENU::TITLE::restore_button.c_str()))
    {
        MENU::SHARED::RestoreDefaults();
    }
}
void FMenu::RegisterFMenu()
{
    if (FUCK::Connect(MENU::TITLE::mod_name_dev.c_str(), 1))
    {
        FUCK::RegisterTool(&g_modITool);
    }
}
} // namespace EXCO