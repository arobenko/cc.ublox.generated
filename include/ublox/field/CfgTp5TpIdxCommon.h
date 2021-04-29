// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgTp5TpIdx field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgTp5TpIdx field.
struct CfgTp5TpIdxCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgTp5TpIdx field.
    enum class ValueType : std::uint8_t
    {
        TIMEPULSE = 0, ///< value @b TIMEPULSE.
        TIMEPULSE2 = 1, ///< value @b TIMEPULSE2.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::CfgTp5TpIdx field.
    static const char* name()
    {
        return "tpIdx";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "TIMEPULSE",
            "TIMEPULSE2"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::CfgTp5TpIdx field.
using CfgTp5TpIdxVal = CfgTp5TpIdxCommon::ValueType;

} // namespace field

} // namespace ublox


