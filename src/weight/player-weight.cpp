#include "weight/player-weight.h"

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <atomic>

#include "logging.h"

namespace EquipLoad::Weight
{
namespace
{
/// Set by equip events, consumed by the next player update (both on the main thread). Several
/// events in one frame collapse into one update; applying is idempotent (it always writes the
/// current equipped weight), so a repeated event can never apply twice.
std::atomic_bool g_syncPending{false};

class EquipEventSink final : public RE::BSTEventSink<RE::TESEquipEvent>
{
  public:
    RE::BSEventNotifyControl ProcessEvent(const RE::TESEquipEvent* a_event, RE::BSTEventSource<RE::TESEquipEvent>*) override
    {
        if (!a_event || !a_event->actor || !a_event->actor->IsPlayerRef())
        {
            return RE::BSEventNotifyControl::kContinue;
        }
        const auto* item = RE::TESForm::LookupByID(a_event->baseObject);
        if (!item || !item->As<RE::TESBoundObject>())
        {
            return RE::BSEventNotifyControl::kContinue;
        }
        RequestSync();
        return RE::BSEventNotifyControl::kContinue;
    }
};

EquipEventSink g_equipEventSink;
} // namespace

float CalcEquippedWeightLive(RE::Actor& a_actor)
{
    using func_t = float (*)(RE::Actor*);
    static REL::Relocation<func_t> func{REL::ID(38044)}; // Actor::CalcEquippedWeight
    return func(&a_actor);
}

float GetCarryWeight(RE::Actor& a_actor)
{
    float carry = a_actor.GetActorValue(RE::ActorValue::kCarryWeight);
    RE::BGSEntryPoint::HandleEntryPoint(RE::BGSEntryPoint::ENTRY_POINT::kGetMaxCarryWeight, &a_actor, &carry);
    return carry;
}

Rules::EncumbranceFacts GatherEncumbranceFacts(RE::Actor& a_actor)
{
    Rules::EncumbranceFacts facts{.isPlayer = a_actor.IsPlayerRef()};
    if (!facts.isPlayer)
    {
        return facts;
    }
    facts.godMode = RE::PlayerCharacter::IsGodMode();
    facts.mounted = a_actor.IsOnMount();
    if (!facts.godMode && !facts.mounted)
    {
        facts.equippedWeight = CalcEquippedWeightLive(a_actor);
        facts.carryWeight    = GetCarryWeight(a_actor);
    }
    return facts;
}

void RegisterEquipEventSink()
{
    if (auto* events = RE::ScriptEventSourceHolder::GetSingleton())
    {
        events->PrependEventSink<RE::TESEquipEvent>(&g_equipEventSink);
        logs::info("registered for equip events");
    }
    else
    {
        logs::error("script event source unavailable; equipment changes will not update the weight");
    }
}

void RequestSync()
{
    g_syncPending.store(true);
}

void ApplyPendingSync(RE::PlayerCharacter& a_player)
{
    if (!g_syncPending.exchange(false))
    {
        return;
    }
    a_player.SetActorValue(RE::ActorValue::kInventoryWeight, CalcEquippedWeightLive(a_player));
}
} // namespace EquipLoad::Weight
