#include "weight/player-weight.h"

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <atomic>
#include <format>
#include <string>

#include "config/settings.h"
#include "logging.h"

namespace EquipLoad::Weight
{
namespace
{
/// Set by equip events and toggle changes, consumed by the next player update (all on the main
/// thread). Several requests in one frame collapse into one update; applying is idempotent (it
/// always writes the current weight), so a repeated event can never apply twice.
std::atomic_bool g_syncPending{false};

/// Reason of the first pending request, for the log line ("equip", "enabled", "disabled").
std::atomic<const char*> g_syncReason{""};

/// Whether the UI is in a state where the player update may not run (F3 investigation).
std::string DescribeUiState()
{
    auto* ui = RE::UI::GetSingleton();
    if (!ui)
    {
        return "ui: <none>";
    }
    return std::format("game paused: {}, inventory menu open: {}", ui->GameIsPaused(), ui->IsMenuOpen(RE::InventoryMenu::MENU_NAME));
}

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
            logs::debug("[equip] Player | item {:08X} | skipped: not a bound object", a_event->baseObject);
            return RE::BSEventNotifyControl::kContinue;
        }
        if (!IsEnabled())
        {
            logs::debug("[equip] Player | item: {} | {} | skipped: mod disabled", Describe(item), a_event->equipped ? "equipped" : "unequipped");
            return RE::BSEventNotifyControl::kContinue;
        }
        if (IsDebugEnabled())
        {
            // The engine's cached equipped weight, read without recomputing it (a recompute here
            // would write the cache). -1 means the engine has already invalidated it for this
            // change; a stale positive value means the change lands later (F3 investigation).
            const auto* actor = a_event->actor->As<RE::Actor>();
            logs::debug("[equip] Player | item: {} | {} | cached equipped weight at event: {:.2f} | {} | outcome: sync requested", Describe(item),
                        a_event->equipped ? "equipped" : "unequipped", actor ? actor->equippedWeight : -1.0f, DescribeUiState());
        }
        RequestSync("equip");
        return RE::BSEventNotifyControl::kContinue;
    }
};

EquipEventSink g_equipEventSink;
} // namespace

bool IsEnabled()
{
    return Config::Get().player.enabled.GetValue();
}

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

std::string DescribeWeights(RE::Actor& a_actor, const Rules::EncumbranceFacts& a_facts)
{
    // Every value that could explain a decision: the inputs used, the engine's cached equipped
    // weight, the raw carry weight, the engine's own total carry weight (expected equal to the
    // manual one) and the InventoryWeight actor value vanilla compares against.
    return std::format("equipped {:.2f} (cached {:.2f}) | carry {:.2f} (actor value {:.2f}, engine total {:.2f}) | "
                       "InventoryWeight actor value {:.2f} | god mode {} | mounted {}",
                       a_facts.equippedWeight, a_actor.equippedWeight, a_facts.carryWeight, a_actor.GetActorValue(RE::ActorValue::kCarryWeight),
                       a_actor.GetTotalCarryWeight(), a_actor.GetActorValue(RE::ActorValue::kInventoryWeight), a_facts.godMode, a_facts.mounted);
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

void RequestSync(const char* a_reason)
{
    if (!g_syncPending.exchange(true))
    {
        g_syncReason.store(a_reason);
    }
}

void ApplyPendingSync(RE::PlayerCharacter& a_player)
{
    // The toggle can change from the menu (render thread) or Reset Defaults; noticing it here
    // covers every source. Starts from the value loaded at startup, so loading never syncs.
    static bool lastEnabled = IsEnabled();
    const bool enabled      = IsEnabled();
    if (enabled != lastEnabled)
    {
        lastEnabled = enabled;
        logs::info("[toggle] Player | equipped-weight-only {}", enabled ? "enabled" : "disabled");
        RequestSync(enabled ? "enabled" : "disabled");
    }

    if (!g_syncPending.exchange(false))
    {
        return;
    }
    const char* reason = g_syncReason.load();

    // Enabled: equipped weight. Disabled: the vanilla inventory weight (GetWeightInContainer is
    // not redirected while disabled), so turning the mod off restores the value vanilla expects.
    const float before = a_player.GetActorValue(RE::ActorValue::kInventoryWeight);
    const float target = enabled ? CalcEquippedWeightLive(a_player) : a_player.GetWeightInContainer();
    a_player.SetActorValue(RE::ActorValue::kInventoryWeight, target);
    logs::debug("[weight-sync] Player | reason: {} | {} | InventoryWeight actor value {:.2f} -> {:.2f} (target {:.2f}) | {}", reason,
                enabled ? "equipped weight" : "vanilla inventory weight", before, a_player.GetActorValue(RE::ActorValue::kInventoryWeight), target,
                DescribeUiState());
}
} // namespace EquipLoad::Weight
