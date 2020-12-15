// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::GpsFix field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::GpsFix field.
struct GpsFixCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::GpsFix field.
    enum class ValueType : std::uint8_t
    {
        NoFix = 0x00U, ///< value <b>no fix</b>.
        DeadReckon = 0x01U, ///< value <b>dead reckoning</b>.
        Fix2D = 0x02U, ///< value <b>2D fix</b>.
        Fix3D = 0x03U, ///< value <b>3D fix</b>.
        GpsAndDeadReckon = 0x04U, ///< value <b>GPS + dead reckoning</b>.
        TimeOnlyFix = 0x05U, ///< value <b>time only fix</b>.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0x00U, ///< First defined value.
        LastValue = 0x05U, ///< Last defined value.
        ValuesLimit = 0x06U, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::GpsFix field.
    static const char* name()
    {
        return "gpsFix";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "no fix",
            "dead reckoning",
            "2D fix",
            "3D fix",
            "GPS + dead reckoning",
            "time only fix"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::GpsFix field.
using GpsFixVal = GpsFixCommon::ValueType;

} // namespace field

} // namespace ublox


