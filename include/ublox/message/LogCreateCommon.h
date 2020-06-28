// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogCreate message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::LogCreate message.
/// @see ublox::message::LogCreateFields
struct LogCreateFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogCreateFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogCreateFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogCreateFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::LogCreateFields::LogCfg field.
    struct LogCfgCommon
    {
        /// @brief Name of the @ref ublox::message::LogCreateFields::LogCfg field.
        static const char* name()
        {
            return "logCfg";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::LogCreateFields::LogCfg field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "logCfg"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogCreateFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogCreateFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogCreateFields::LogSize field.
    struct LogSizeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::LogCreateFields::LogSize field.
        enum class ValueType : std::uint8_t
        {
            Maximum = 0, ///< value @b Maximum
            Minimum = 1, ///< value @b Minimum
            UserDefined = 2, ///< value @b UserDefined
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::LogCreateFields::LogSize field.
        static const char* name()
        {
            return "logSize";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Maximum",
                "Minimum",
                "UserDefined"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::LogCreateFields::LogSize field.
    using LogSizeVal = LogSizeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogCreateFields::UserDefinedSize field.
    struct UserDefinedSizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogCreateFields::UserDefinedSize field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogCreateFields::UserDefinedSize field.
        static const char* name()
        {
            return "userDefinedSize";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogCreate message.
/// @see ublox::message::LogCreate
struct LogCreateCommon
{
    /// @brief Name of the @ref ublox::message::LogCreate message.
    static const char* name()
    {
        return "LOG-CREATE";
    }
    
};

} // namespace message

} // namespace ublox


