// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPwr message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPwr message.
/// @see ublox::message::CfgPwrFields
struct CfgPwrFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPwrFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPwrFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPwrFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPwrFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::CfgPwrFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPwrFields::State field.
    struct StateCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPwrFields::State field.
        enum class ValueType : std::uint32_t
        {
            Backup = 0x42434B50UL, ///< value @b Backup.
            Running = 0x52554E20UL, ///< value @b Running.
            Stopped = 0x53544F50UL, ///< value @b Stopped.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0x42434B50UL, ///< First defined value.
            LastValue = 0x53544F50UL, ///< Last defined value.
            ValuesLimit = 0x53544F51UL, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgPwrFields::State field.
        static const char* name()
        {
            return "state";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            using NameInfo = std::pair<ValueType, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(ValueType::Backup, "Backup"),
                std::make_pair(ValueType::Running, "Running"),
                std::make_pair(ValueType::Stopped, "Stopped")
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
    ///     @ref ublox::message::CfgPwrFields::State field.
    using StateVal = StateCommon::ValueType;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPwr message.
/// @see ublox::message::CfgPwr
struct CfgPwrCommon
{
    /// @brief Name of the @ref ublox::message::CfgPwr message.
    static const char* name()
    {
        return "CFG-PWR";
    }
    
};

} // namespace message

} // namespace ublox


