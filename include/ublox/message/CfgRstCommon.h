// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgRst message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgRst message.
/// @see ublox::message::CfgRstFields
struct CfgRstFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgRstFields::NavBbrMask field.
    struct NavBbrMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgRstFields::NavBbrMask field.
        static const char* name()
        {
            return "navBbrMask";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgRstFields::NavBbrMask field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "eph",
                "alm",
                "health",
                "klob",
                "pos",
                "clkd",
                "osc",
                "utc",
                "rtc",
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                "aop"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgRstFields::ResetMode field.
    struct ResetModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgRstFields::ResetMode field.
        enum class ValueType : std::uint8_t
        {
            Hardware = 0, ///< value @b Hardware.
            Software = 1, ///< value @b Software.
            SoftwareGnssOnly = 2, ///< value <b>Software (GNSS only)</b>.
            HardwareAfterShutdown = 4, ///< value <b>Hardware (after shutdown)</b>.
            GnssStop = 8, ///< value <b>GNSS stop</b>.
            GnssStart = 9, ///< value <b>GNSS start</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 9, ///< Last defined value.
            ValuesLimit = 10, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgRstFields::ResetMode field.
        static const char* name()
        {
            return "resetMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Hardware",
                "Software",
                "Software (GNSS only)",
                nullptr,
                "Hardware (after shutdown)",
                nullptr,
                nullptr,
                nullptr,
                "GNSS stop",
                "GNSS start"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgRstFields::ResetMode field.
    using ResetModeVal = ResetModeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgRstFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgRstFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgRst message.
/// @see ublox::message::CfgRst
struct CfgRstCommon
{
    /// @brief Name of the @ref ublox::message::CfgRst message.
    static const char* name()
    {
        return "CFG-RST";
    }
    
};

} // namespace message

} // namespace ublox


