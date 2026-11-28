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

/// Last equipped weight reported to the engine; Rules::kNoWeightReported when unknown. Atomic:
/// GetWeightInContainer can run outside the main thread (Papyrus).
std::atomic<float> g_lastReportedWeight{Rules::kNoWeightReported};

/// Actor::SendActorValueUpdate (ID 38470): (actor, actor value, old value, delta, cause). Vanilla
/// GetInventoryWeight and SetBaseActorValue pass a null cause.
void SendActorValueUpdate(RE::Actor& a_actor, RE::ActorValue a_value, float a_old, float a_delta)
{
    using func_t = void (*)(RE::Actor*, RE::ActorValue, float, float, void*);
    static REL::Relocation<func_t> func{REL::ID(38470)};
    func(&a_actor, a_value, a_old, a_delta, nullptr);
}

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
        // Actor::GetTotalCarryWeight: the CarryWeight actor value after the "Get Max Carry Weight"
        // perk entry point, the same value vanilla IsOverEncumbered computes by hand (matched in
        // every logged check, including Fortify Carry Weight and carry-weight perks).
        facts.carryWeight = a_actor.GetTotalCarryWeight();
    }
    return facts;
}

std::string DescribeWeights(RE::Actor& a_actor, const Rules::EncumbranceFacts& a_facts)
{
    // Every value that could explain a decision: the inputs used, the engine's cached equipped
    // weight, the raw CarryWeight actor value (before perks) and the InventoryWeight actor value
    // vanilla compares against.
    return std::format("equipped {:.2f} (cached {:.2f}) | carry {:.2f} (actor value {:.2f}) | "
                       "InventoryWeight actor value {:.2f} | god mode {} | mounted {}",
                       a_facts.equippedWeight, a_actor.equippedWeight, a_facts.carryWeight, a_actor.GetActorValue(RE::ActorValue::kCarryWeight),
                       a_actor.GetActorValue(RE::ActorValue::kInventoryWeight), a_facts.godMode, a_facts.mounted);
}

void ReportPlayerWeight(RE::PlayerCharacter& a_player, float a_equippedWeight)
{
    // Record before sending: the sink can read InventoryWeight, which recomputes it through
    // GetWeightInContainer and lands here again; that nested report then sees no change.
    const float last        = g_lastReportedWeight.exchange(a_equippedWeight);
    const auto notification = Rules::DecideWeightNotification(last, a_equippedWeight);
    if (!notification.send)
    {
        return;
    }
    SendActorValueUpdate(a_player, RE::ActorValue::kInventoryWeight, notification.old, notification.delta);
    // Values only: reading InventoryWeight here would recompute it inside this call.
    logs::debug("[inventory-weight] Player | equipped weight {:.2f} -> {:.2f} | InventoryWeight update sent (old {:.2f}, delta {:.2f}) | {}",
                last < 0.0f ? a_equippedWeight : last, a_equippedWeight, notification.old, notification.delta, DescribeUiState());
}

void ForgetReportedWeight()
{
    g_lastReportedWeight.store(Rules::kNoWeightReported);
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
