// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavAopstatusUblox8 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavAopstatusUblox8 message.
/// @see ublox::message::NavAopstatusUblox8Fields
struct NavAopstatusUblox8FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::AopCfg field.
    struct AopCfgCommon
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusUblox8Fields::AopCfg field.
        static const char* name()
        {
            return "aopCfg";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavAopstatusUblox8Fields::AopCfg field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "useAOP"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::Status field.
    struct StatusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAopstatusUblox8Fields::Status field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavAopstatusUblox8Fields::Status field.
        static const char* name()
        {
            return "status";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusUblox8Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusUblox8Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusUblox8Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavAopstatusUblox8 message.
/// @see ublox::message::NavAopstatusUblox8
struct NavAopstatusUblox8Common
{
    /// @brief Name of the @ref ublox::message::NavAopstatusUblox8 message.
    static const char* name()
    {
        return "NAV-AOPSTATUS (ublox-8)";
    }
    
};

} // namespace message

} // namespace ublox


