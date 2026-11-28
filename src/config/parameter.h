#pragma once

// One configurable value plus everything needed to load, validate, save, document and draw it.
// Engine-independent (no RE/SKSE), so it is unit-tested on any host.

#include <algorithm>
#include <atomic>
#include <cstdint>
#include <string>
#include <utility>
#include <variant>

namespace EquipLoad::Config
{
/// Menu section a parameter is drawn in.
enum class Group : std::uint8_t
{
    General,
    Player,
};

template <class T>
struct ParameterSpec
{
    std::string section;     // TOML table, dotted for nested tables ("Player")
    std::string key;         // TOML key ("bPlayerEnabled")
    std::string label;       // menu label; ImGui "##suffix" keeps ids unique across groups
    std::string description; // menu tooltip and TOML comment
    T defaultValue{};
    T minValue{};
    T maxValue{};
    Group group        = Group::General;
    bool visibleInMenu = true; // flip to true to expose a hidden parameter
};

/// A typed setting. Values are always kept inside [min, max]: the store validates on load and
/// SetValue clamps, so gameplay code can read values without re-checking them.
///
/// Threading: the in-game menu writes values from its own thread while game threads (main,
/// Papyrus) read them, so the value is a std::atomic. Relaxed ordering: each setting is
/// independent, a value one frame old is harmless, and on x64 a relaxed load or store of a
/// bool/float/int32 compiles to the same plain move as before, so the hot path costs nothing.
template <class T>
class Parameter
{
  public:
    using ValueType = T;

    explicit Parameter(ParameterSpec<T> a_spec)
        : m_spec(std::move(a_spec)),
          m_value(m_spec.defaultValue)
    {
    }

    [[nodiscard]] T GetValue() const noexcept { return m_value.load(std::memory_order_relaxed); }
    [[nodiscard]] const ParameterSpec<T>& Spec() const noexcept { return m_spec; }

    /// Stores the value clamped to the valid range. Signature matches what StyyxUtil::FUCKUtil
    /// widgets expect from a config entry.
    void SetValue(T a_value) noexcept { m_value.store(Clamp(a_value), std::memory_order_relaxed); }

    void ResetToDefault() noexcept { m_value.store(m_spec.defaultValue, std::memory_order_relaxed); }

    [[nodiscard]] bool InRange(T a_value) const noexcept { return !(a_value < m_spec.minValue) && !(m_spec.maxValue < a_value); }

    [[nodiscard]] T Clamp(T a_value) const noexcept { return std::clamp(a_value, m_spec.minValue, m_spec.maxValue); }

  private:
    static_assert(std::atomic<T>::is_always_lock_free, "settings must be lock-free atomics");

    ParameterSpec<T> m_spec;
    std::atomic<T> m_value;
};

using BoolParameter  = Parameter<bool>;
using FloatParameter = Parameter<float>;
using IntParameter   = Parameter<std::int32_t>;

/// Non-owning handle used to iterate every parameter (load, save, validate, menu).
using ParameterRef = std::variant<BoolParameter*, FloatParameter*, IntParameter*>;
} // namespace EquipLoad::Config
