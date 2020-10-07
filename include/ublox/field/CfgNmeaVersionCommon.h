// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNmeaVersion field.

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
///     @ref ublox::field::CfgNmeaVersion field.
struct CfgNmeaVersionCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgNmeaVersion field.
    enum class ValueType : std::uint8_t
    {
        V21 = 33, ///< value <b>v2.1</b>.
        V23 = 35, ///< value <b>v2.3</b>.
        V40 = 64, ///< value <b>v4.0</b>.
        V41 = 65, ///< value <b>v4.1</b>.
        
        // --- Extra values generated for convenience ---
        FirstValue = 33, ///< First defined value.
        LastValue = 65, ///< Last defined value.
        ValuesLimit = 66, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::CfgNmeaVersion field.
    static const char* name()
    {
        return "cfgNmeaVersion";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        using NameInfo = std::pair<ValueType, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(ValueType::V21, "v2.1"),
            std::make_pair(ValueType::V23, "v2.3"),
            std::make_pair(ValueType::V40, "v4.0"),
            std::make_pair(ValueType::V41, "v4.1")
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
///     @ref ublox::field::CfgNmeaVersion field.
using CfgNmeaVersionVal = CfgNmeaVersionCommon::ValueType;

} // namespace field

} // namespace ublox


