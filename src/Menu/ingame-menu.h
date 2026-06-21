#pragma once

#include <st-fui.h>

#include "API/FUCK_API.h"
#include "shared-menu.h"


namespace EXCO
{

namespace FMenu
{
void RegisterFMenu();

struct ModITool : FUCK::ITool
{

    const char* PluginName() const override { return MENU::TITLE::mod_name_dev.c_str(); }
    const char* Name() const override { return MENU::TITLE::mod_name.c_str(); }
    const char* Group() const override { return MENU::TITLE::group_name.c_str(); }
    void Draw() override;
    void OnOpen() override;
    void OnClose() override;

  private:
    void DrawNPCs();
    void DrawPlayer();
    void DrawSystem();
};
inline ModITool g_modITool;

} // namespace FMenu

} // namespace EXCO