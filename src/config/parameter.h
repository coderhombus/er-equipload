#pragma once

// One configurable value plus everything needed to load, validate, save, document and draw it.
// Engine-independent (no RE/SKSE), so it is unit-tested on any host.

#include <algorithm>
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
/// Threading: the in-game menu writes values from the render thread while game threads read
/// them. Values are single bool/float/int32 stores, which are not torn on x64; a stale read
/// for one frame is harmless, so no locking is used on the hot path.
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

    [[nodiscard]] T GetValue() const noexcept { return m_value; }
    [[nodiscard]] const ParameterSpec<T>& Spec() const noexcept { return m_spec; }

    /// Stores the value clamped to the valid range. Signature matches what StyyxUtil::FUCKUtil
    /// widgets expect from a config entry.
    void SetValue(T a_value) noexcept { m_value = Clamp(a_value); }

    void ResetToDefault() noexcept { m_value = m_spec.defaultValue; }

    [[nodiscard]] bool InRange(T a_value) const noexcept { return !(a_value < m_spec.minValue) && !(m_spec.maxValue < a_value); }

    [[nodiscard]] T Clamp(T a_value) const noexcept { return std::clamp(a_value, m_spec.minValue, m_spec.maxValue); }

  private:
    ParameterSpec<T> m_spec;
    T m_value;
};

using BoolParameter  = Parameter<bool>;
using FloatParameter = Parameter<float>;
using IntParameter   = Parameter<std::int32_t>;

/// Non-owning handle used to iterate every parameter (load, save, validate, menu).
using ParameterRef = std::variant<BoolParameter*, FloatParameter*, IntParameter*>;
} // namespace EquipLoad::Config
