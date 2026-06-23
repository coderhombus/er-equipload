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

struct PlayerMovementEncumberanceCheckHook
{
    static void Call(RE::PlayerCharacter* a_this, void* unused, float previousWeight, float weightDelta);
    static inline REL::Relocation<decltype(Call)> func;
};
struct HUDEncumberanceUseEquippedWeight
{
    static float Call(void* self, uint32_t, float, float);
    static inline REL::Relocation<decltype(Call)> func;
};
struct EncumbranceFactorHook_Code : Xbyak::CodeGenerator
{
    EncumbranceFactorHook_Code(std::uintptr_t returnAddr)
    {
        Xbyak::Label valueLabel;
        Xbyak::Label retnLabel;

        sub(rsp, 0x28);

        movaps(dword[rsp], xmm6);
        movaps(dword[rsp + 0x10], xmm7);

        movss(xmm0, dword[rip + valueLabel]);

        movaps(xmm6, dword[rsp]);
        movaps(xmm7, dword[rsp + 0x10]);

        add(rsp, 0x28);

        jmp(ptr[rip + retnLabel]);

        L(valueLabel);
        dd(0.0f);

        L(retnLabel);
        dq(returnAddr);
    }
};
// struct GetActorValueHook
// {
//     static float Call(RE::ActorValueOwner* a_owner, RE::ActorValue a_av)
//     {
//         if (a_av == RE::ActorValue::kInventoryWeight)
//         {
//             if (auto* actor = skyrim_cast<RE::Actor*>(a_owner); actor)
//             {
//                 if (auto* player = skyrim_cast<RE::PlayerCharacter*>(actor); player)
//                 {
//                     return actor->GetEquippedWeight();
//                 }
//             }
//         }

//         return func(a_owner, a_av);
//     }

//     static inline REL::Relocation<decltype(Call)> func;
// };

} // namespace HOOKS
} // namespace EXCO