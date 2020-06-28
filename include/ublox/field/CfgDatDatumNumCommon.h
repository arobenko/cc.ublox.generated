// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgDatDatumNum field.

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
///     @ref ublox::field::CfgDatDatumNum field.
struct CfgDatDatumNumCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgDatDatumNum field.
    enum class ValueType : std::uint16_t
    {
        WGS84 = 0, ///< value @b WGS84
        User = 65535L, ///< value @b User
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 65535L, ///< Last defined value.
        
    };
    
    /// @brief Name of the @ref ublox::field::CfgDatDatumNum field.
    static const char* name()
    {
        return "cfgDatDatumNum";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        using NameInfo = std::pair<ValueType, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(ValueType::WGS84, "WGS84"),
            std::make_pair(ValueType::User, "User")
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
///     @ref ublox::field::CfgDatDatumNum field.
using CfgDatDatumNumVal = CfgDatDatumNumCommon::ValueType;

} // namespace field

} // namespace ublox


