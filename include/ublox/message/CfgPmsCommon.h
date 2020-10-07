// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPms message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPms message.
/// @see ublox::message::CfgPmsFields
struct CfgPmsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmsFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmsFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmsFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmsFields::PowerSetupValue field.
    struct PowerSetupValueCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPmsFields::PowerSetupValue field.
        enum class ValueType : std::uint8_t
        {
            FullPower = 0, ///< value <b>Full power</b>.
            Balanced = 1, ///< value @b Balanced.
            Interval = 2, ///< value @b Interval.
            Agressive1Hz = 3, ///< value <b>Aggressive with 1Hz</b>.
            Agressive2Hz = 4, ///< value <b>Aggressive with 2Hz</b>.
            Agressive4Hz = 5, ///< value <b>Aggressive with 4Hz</b>.
            Invalid = 255, ///< value @b Invalid.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 255, ///< Last defined value.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgPmsFields::PowerSetupValue field.
        static const char* name()
        {
            return "powerSetupValue";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            using NameInfo = std::pair<ValueType, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(ValueType::FullPower, "Full power"),
                std::make_pair(ValueType::Balanced, "Balanced"),
                std::make_pair(ValueType::Interval, "Interval"),
                std::make_pair(ValueType::Agressive1Hz, "Aggressive with 1Hz"),
                std::make_pair(ValueType::Agressive2Hz, "Aggressive with 2Hz"),
                std::make_pair(ValueType::Agressive4Hz, "Aggressive with 4Hz"),
                std::make_pair(ValueType::Invalid, "Invalid")
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
    ///     @ref ublox::message::CfgPmsFields::PowerSetupValue field.
    using PowerSetupValueVal = PowerSetupValueCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmsFields::Period field.
    struct PeriodCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmsFields::Period field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmsFields::Period field.
        static const char* name()
        {
            return "period";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmsFields::OnTime field.
    struct OnTimeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmsFields::OnTime field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmsFields::OnTime field.
        static const char* name()
        {
            return "onTime";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmsFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgPmsFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPms message.
/// @see ublox::message::CfgPms
struct CfgPmsCommon
{
    /// @brief Name of the @ref ublox::message::CfgPms message.
    static const char* name()
    {
        return "CFG-PMS";
    }
    
};

} // namespace message

} // namespace ublox


