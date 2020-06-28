// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::GeofenceState field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::GeofenceState field.
struct GeofenceStateCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::GeofenceState field.
    enum class ValueType : std::uint8_t
    {
        Unknown = 0, ///< value @b Unknown
        Inside = 1, ///< value @b Inside
        Outside = 2, ///< value @b Outside
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::GeofenceState field.
    static const char* name()
    {
        return "GeofenceState";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "Unknown",
            "Inside",
            "Outside"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::GeofenceState field.
using GeofenceStateVal = GeofenceStateCommon::ValueType;

} // namespace field

} // namespace ublox


