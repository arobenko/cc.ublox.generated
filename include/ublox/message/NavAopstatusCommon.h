// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavAopstatus message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavAopstatus message.
/// @see ublox::message::NavAopstatusFields
struct NavAopstatusFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavAopstatusFields::AopCfg field.
    struct AopCfgCommon
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::AopCfg field.
        static const char* name()
        {
            return "aopCfg";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavAopstatusFields::AopCfg field.
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
    ///     @ref ublox::message::NavAopstatusFields::Status field.
    struct StatusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAopstatusFields::Status field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::Status field.
        static const char* name()
        {
            return "status";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusFields::Reserved0 field.
    struct Reserved0Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusFields::AvailGPS field.
    struct AvailGPSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAopstatusFields::AvailGPS field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::AvailGPS field.
        static const char* name()
        {
            return "availGPS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAopstatusFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavAopstatusFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavAopstatus message.
/// @see ublox::message::NavAopstatus
struct NavAopstatusCommon
{
    /// @brief Name of the @ref ublox::message::NavAopstatus message.
    static const char* name()
    {
        return "NAV-AOPSTATUS";
    }
    
};

} // namespace message

} // namespace ublox


