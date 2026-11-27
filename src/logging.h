#pragma once

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <chrono>
#include <cstdint>
#include <string>

namespace EquipLoad
{
namespace logs = SKSE::log;

/// Severity conventions:
///  trace    every encumbrance / run check with its inputs (called many times per second)
///  debug    one line per discrete event (equipment change, weight sync, state change) with all
///           weights involved
///  info     state changes and lifecycle: config loaded/saved, hooks installed, mod toggled
///  warn     recoverable problems: invalid config values, missing optional dependencies
///  error    failures that disable a feature (a hook that could not be installed)
///  critical the plugin will not run (unsupported runtime)
///
/// Line format: [action] actor | inputs | result | outcome; skipped work logs "skipped: <reason>".
///
/// Flushing: every line at debug or above is flushed immediately, so one-off events are in the
/// file as soon as they happen. Trace lines are flushed at least once a second instead of per
/// line, which would be too slow.
inline void SetLogLevel(std::int32_t a_level)
{
    const auto level = static_cast<spdlog::level::level_enum>(a_level);
    if (auto* logger = spdlog::default_logger_raw())
    {
        logger->set_level(level);
        logger->flush_on(level < spdlog::level::debug ? spdlog::level::debug : level);
    }
    static const bool periodicFlushStarted = []
    {
        spdlog::flush_every(std::chrono::seconds(1));
        return true;
    }();
    (void)periodicFlushStarted;
}

/// Cheap checks for hot paths, so arguments of disabled logs are not even computed.
[[nodiscard]] inline bool IsTraceEnabled()
{
    auto* logger = spdlog::default_logger_raw();
    return logger && logger->should_log(spdlog::level::trace);
}

[[nodiscard]] inline bool IsDebugEnabled()
{
    auto* logger = spdlog::default_logger_raw();
    return logger && logger->should_log(spdlog::level::debug);
}

/// Display name for log lines ("Lydia", "Iron Helmet"); "<none>" for null.
[[nodiscard]] inline std::string Describe(const RE::TESForm* a_form)
{
    if (!a_form)
    {
        return "<none>";
    }
    const char* name = a_form->GetName();
    return name && name[0] ? name : "<unnamed>";
}
} // namespace EquipLoad
