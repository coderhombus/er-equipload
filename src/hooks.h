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

struct WornArmorChangedHook
{
    // static void Call(RE::PlayerCharacter* a_player);
    // static void Call(RE::Actor* a_actor, void* a_arg);
    static void Call(RE::PlayerCharacter* a_actor, void* a_arg);
    static inline REL::Relocation<decltype(Call)> func;
};


struct SendActorValueUpdateHook
{
    static void Call(RE::Actor* actor, RE::ActorValue av, RE::ACTOR_VALUE_MODIFIERS flag, float delta, void* extra);
    static inline REL::Relocation<decltype(Call)> func;
};

} // namespace HOOKS
} // namespace EXCO