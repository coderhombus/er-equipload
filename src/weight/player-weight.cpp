#include "weight/player-weight.h"

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <atomic>
#include <format>
#include <string>
#include <thread>

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

/// The game's main thread (recorded at plugin load, which SKSE runs on it). The InventoryWeight
/// notification runs engine code (movement speed, HUD message) that vanilla only drives from the
/// main thread, so the mod only sends it there.
std::atomic<std::thread::id> g_mainThread{};

/// What the engine was told about the player's weight. Main thread only.
Rules::WeightReportState g_reportState;

/// Set from any thread: a report is needed (a change seen off the main thread) or the state must
/// be forgotten (the mod was off). Consumed on the main thread.
std::atomic_bool g_reportPending{false};

/// g_reportState.reported, readable from any thread (written on the main thread only).
std::atomic<float> g_mainReportedWeight{Rules::kNoWeightReported};
std::atomic_bool g_forgetReports{false};

bool IsMainThread()
{
    return std::this_thread::get_id() == g_mainThread.load(std::memory_order_relaxed);
}

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

/// Runs on whichever thread dispatches TESEquipEvent: the main thread for menu and console
/// equips, worker threads for hotkey equips.
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
        // Equip events arrive on worker threads for hotkey equips (round-5 log): only thread-safe
        // work here (form lookup, logging, an atomic flag); no UI or actor state is read.
        logs::debug("[equip] Player | item: {} | {} | outcome: sync requested", Describe(item), a_event->equipped ? "equipped" : "unequipped");
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

void RecordMainThread()
{
    g_mainThread.store(std::this_thread::get_id(), std::memory_order_relaxed);
}

void ReportPlayerWeight(RE::PlayerCharacter& a_player, float a_equippedWeight, bool a_deferred)
{
    if (!IsMainThread())
    {
        // A read here (e.g. GetActorValue(InventoryWeight) on a worker thread during an equip)
        // may have cached this value in the engine. Only a value the main thread has not reported
        // can be stale there, so only that defers a report (and its forced invalidation) to the
        // next player update: reads agreeing with the main thread cost nothing.
        if (a_equippedWeight != g_mainReportedWeight.load(std::memory_order_relaxed))
        {
            logs::debug("[inventory-weight] Player | read off the main thread | equipped weight {:.2f} differs from the last report {:.2f} | "
                        "deferred to the main thread",
                        a_equippedWeight, g_mainReportedWeight.load(std::memory_order_relaxed));
            g_reportPending.store(true);
        }
        return;
    }
    if (g_forgetReports.exchange(false))
    {
        g_reportState = {};
        g_mainReportedWeight.store(Rules::kNoWeightReported, std::memory_order_relaxed);
    }
    auto* ui          = RE::UI::GetSingleton();
    const bool paused = ui && ui->GameIsPaused();

    // Update the state before sending: the sink can read InventoryWeight, which recomputes it
    // through GetWeightInContainer and lands here again; that nested report then sees no change.
    const auto notification = Rules::DecideWeightNotification(g_reportState, a_equippedWeight, paused, a_deferred);
    g_reportState           = notification.next;
    g_mainReportedWeight.store(g_reportState.reported, std::memory_order_relaxed);
    if (!notification.send)
    {
        return;
    }
    SendActorValueUpdate(a_player, RE::ActorValue::kInventoryWeight, notification.old, notification.delta);
    // Values only: reading InventoryWeight here would recompute it inside this call.
    logs::debug("[inventory-weight] Player | equipped weight {:.2f} | {} (old {:.2f}, delta {:.2f}) | game paused: {}", a_equippedWeight,
                notification.delta != 0.0f ? "change announced"
                                           : (a_deferred ? "cached value invalidated (deferred report)" : "cached value invalidated"),
                notification.old, notification.delta, paused);
}

void ForgetReportedWeight()
{
    g_forgetReports.store(true);
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
        ForgetReportedWeight();
        RequestSync(enabled ? "enabled" : "disabled");
    }

    // Weight changes seen off the main thread, or inside a paused menu (announced only now that
    // the game runs again, as one net change), are reported here.
    const bool deferred = g_reportPending.exchange(false);
    if (enabled && (deferred || g_reportState.announced != g_reportState.reported))
    {
        ReportPlayerWeight(a_player, CalcEquippedWeightLive(a_player), deferred);
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
    // "already current" means the InventoryWeight notification had already brought the value up
    // to date, i.e. this sync did nothing (evidence for removing it, docs/in-game-testing.md).
    logs::debug("[weight-sync] Player | reason: {} | {} | InventoryWeight actor value {:.2f} -> {:.2f} (target {:.2f}) | {} | {}", reason,
                enabled ? "equipped weight" : "vanilla inventory weight", before, a_player.GetActorValue(RE::ActorValue::kInventoryWeight), target,
                before == target ? "already current" : "changed by this sync", DescribeUiState());
}
} // namespace EquipLoad::Weight
