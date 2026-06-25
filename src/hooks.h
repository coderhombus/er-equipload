#pragma once

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

struct PlayerHUDEncumberance
{
    static void __fastcall Call(RE::Actor* actor, float param2, float param3, float param4);
    static inline REL::Relocation<decltype(Call)> func;
};

struct GetActorValue
{
    static float Call(RE::Actor* actor, RE::ActorValue av);
    static inline REL::Relocation<decltype(Call)> func;
};
struct GetActorValue2
{
    static float Call(RE::Actor* actor, RE::ActorValue av, std::uint64_t vmArg, double* result);
    static inline REL::Relocation<decltype(Call)> func;
};

} // namespace HOOKS
} // namespace EXCO