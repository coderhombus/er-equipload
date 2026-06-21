#include "hooks.h"

#include "RE/A/ActorMagicCaster.h"
#include "RE/B/BGSAttackData.h"
#include "RE/C/Character.h"
#include "RE/P/PlayerCharacter.h"
#include "REL/Offset.h"
#include "SKSE/Impl/PCH.h"
#include "Utility/util.h"
#include "manager.h"
#include "st-hooks.h"



namespace EXCO::HOOKS
{

// needed cause for NPCs, the update function appears to have a delta of 0.
// always
// static float GetEffectiveDelta(float a_deltaTime)
// {
//     if (a_deltaTime > 0.0f)
//         return a_deltaTime;

//     if (const auto* timer = RE::BSTimer::GetSingleton())
//         return timer->realTimeDelta;
//     return (float)0.016833;
// }

// void PlayerUpdateHook::Call(RE::PlayerCharacter* a_this, float a_deltaTime)
// {
//     Manager::ManageSneakStamina(a_this, a_deltaTime);
//     Manager::ManageSprintStamina(a_this, a_deltaTime);
//     Manager::ManageBowDraw(a_this, a_deltaTime);
//     Manager::ManageSwimStamina(a_this, a_deltaTime);
//     func(a_this, a_deltaTime);
// }

// void NPCUpdateHook::Call(RE::Actor* a_this, float a_deltaTime)
// {
//     const float r_delta = GetEffectiveDelta(a_deltaTime);
//     Manager::ManageSneakStamina(a_this, r_delta);
//     Manager::ManageSprintStamina(a_this, r_delta);
//     Manager::ManageBowDraw(a_this, r_delta);
//     Manager::ManageSwimStamina(a_this, r_delta);
//     func(a_this, a_deltaTime);
// }

void InstallHooks()
{
    // HookUtils::WriteVFunc<RE::PlayerCharacter, 0, 0xad, PlayerUpdateHook>();
    // HookUtils::WriteVFunc<RE::Character, 0, 0xad, NPCUpdateHook>();
}
} // namespace EXCO::HOOKS
