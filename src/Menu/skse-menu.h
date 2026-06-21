#pragma once

namespace EXCO
{
namespace SKSEMenu
{
void RegisterSKSEMenu();
void OnMenuOpen();
void OnMenuClose();
void RegisterMenuOpenCloseEventSKSE();
void DrawNPCSection();
void DrawPlayerSection();
void DrawResetMenuSection();
void __stdcall RenderMenu();
} // namespace SKSEMenu
} // namespace EXCO