// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgMainTalkerId field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgMainTalkerId field.
struct CfgMainTalkerIdCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgMainTalkerId field.
    enum class ValueType : std::uint8_t
    {
        NotOverridden = 0, ///< value <b>Not overridden</b>.
        GP = 1, ///< value @b GP
        GL = 2, ///< value @b GL
        GN = 3, ///< value @b GN
        GA = 4, ///< value @b GA
        GB = 5, ///< value @b GB
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 5, ///< Last defined value.
        ValuesLimit = 6, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::CfgMainTalkerId field.
    static const char* name()
    {
        return "cfgMainTalkerId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "Not overridden",
            "GP",
            "GL",
            "GN",
            "GA",
            "GB"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::CfgMainTalkerId field.
using CfgMainTalkerIdVal = CfgMainTalkerIdCommon::ValueType;

} // namespace field

} // namespace ublox


