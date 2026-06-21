#pragma once

#include "REL/Relocation.h"
namespace EXCO
{
namespace HOOKS
{

void InstallHooks();

// struct PlayerUpdateHook
// {
//     static void Call(RE::PlayerCharacter* a_this, float a_deltaTime);
//     static inline REL::Relocation<decltype(Call)> func;
// };

// struct NPCUpdateHook
// {
//     static void Call(RE::Actor* a_this, float a_deltaTime);
//     static inline REL::Relocation<decltype(Call)> func;
// };

} // namespace HOOKS
} // namespace EXCO