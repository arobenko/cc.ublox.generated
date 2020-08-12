// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::SbasSys field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::SbasSys field.
struct SbasSysCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::SbasSys field.
    enum class ValueType : std::int8_t
    {
        Unknown = -1, ///< value @b Unknown.
        WAAS = 0, ///< value @b WAAS.
        EGNOS = 1, ///< value @b EGNOS.
        MSAS = 2, ///< value @b MSAS.
        GAGAN = 3, ///< value @b GAGAN.
        GPS = 16, ///< value @b GPS.
        
        // --- Extra values generated for convenience ---
        FirstValue = -1, ///< First defined value.
        LastValue = 16, ///< Last defined value.
        ValuesLimit = 17, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::SbasSys field.
    static const char* name()
    {
        return "sbasSys";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        using NameInfo = std::pair<ValueType, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(ValueType::Unknown, "Unknown"),
            std::make_pair(ValueType::WAAS, "WAAS"),
            std::make_pair(ValueType::EGNOS, "EGNOS"),
            std::make_pair(ValueType::MSAS, "MSAS"),
            std::make_pair(ValueType::GAGAN, "GAGAN"),
            std::make_pair(ValueType::GPS, "GPS")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, ValueType v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::SbasSys field.
using SbasSysVal = SbasSysCommon::ValueType;

} // namespace field

} // namespace ublox


