#pragma once

#include "RE/A/Actor.h"
#include "RE/I/InventoryChanges.h"
#include "RE/P/PlayerCharacter.h"
#include "RE/RTTI.h"
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
struct CanRunHook
{
    static bool Call(RE::Actor* a_this);
    static inline REL::Relocation<decltype(Call)> func;
};
struct PlayerUpdateHook
{
    static void Call(RE::PlayerCharacter* a_this, float a_deltaTime);
    static inline REL::Relocation<decltype(Call)> func;
};

struct GetWeightInContainerHook
{
    static float prev_weight;
    static float Call(RE::TESObjectREFR* a_this);
    static inline REL::Relocation<decltype(Call)> func;
};


} // namespace HOOKS
} // namespace EXCO