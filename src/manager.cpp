#include "Utility/util.h"
#include "config.h"
#include "manager.h"
#include "mod-data.h"



namespace EXCO
{

// void Manager::ManageSneakStamina(RE::Actor* a_actor, float a_deltaTime)
// {
//     if (!ActorValidAndNotGod(a_actor))
//         return;

//     if (!a_actor->IsSneaking() || !ActorUtil::IsMoving(a_actor))
//         return;

//     if (a_actor->GetActorValue(RE::ActorValue::kStamina) <= 0.f)
//         return;

//     const auto cond_item     = ActorUtil::GetWieldingWeapon(a_actor);
//     const float default_cost = a_actor->IsPlayerRef() ? CONFIG::stamina_cost_sneak_player.GetValue()
//                                                       : CONFIG::stamina_cost_sneak_npc.GetValue();

//     float reduce = default_cost * a_deltaTime;

//     // PEPE Perk
//     RE::HandleEntryPoint(ENTRIES::sneakStamEP, a_actor, reduce, ENTRIES::sneakStam, cond_item);

//     a_actor->DamageActorValue(RE::ActorValue::kStamina, reduce);
// }

} // namespace EXCO
