#pragma once

#include "REL/Relocation.h"
namespace EXCO
{
namespace HOOKS
{

void InstallHooks();


struct IsOverEncumberedHook
{
    static bool Call(RE::Actor* a_this);
    static inline REL::Relocation<decltype(Call)> func;
};

struct IsOverEncumberedGameFuncHook
{
    static bool Call(RE::Actor* a_this);
    static inline REL::Relocation<decltype(Call)> func;
};

struct GetInventoryWeightHook
{
    static float Call(RE::InventoryChanges* a_this);
    static inline REL::Relocation<decltype(Call)> func;
};

} // namespace HOOKS
} // namespace EXCO