// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNmeaSvNumbering field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgNmeaSvNumbering field.
struct CfgNmeaSvNumberingCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgNmeaSvNumbering field.
    enum class ValueType : std::uint8_t
    {
        Strict = 0, ///< value @b Strict
        Extended = 1, ///< value @b Extended
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::CfgNmeaSvNumbering field.
    static const char* name()
    {
        return "cfgNmeaSvNumbering";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "Strict",
            "Extended"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::CfgNmeaSvNumbering field.
using CfgNmeaSvNumberingVal = CfgNmeaSvNumberingCommon::ValueType;

} // namespace field

} // namespace ublox


