// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavTimegps message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/FtowCommon.h"
#include "ublox/field/ItowCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavTimegps message.
/// @see ublox::message::NavTimegpsFields
struct NavTimegpsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimegpsFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimegpsFields::Ftow field.
    using FtowCommon = ublox::field::FtowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimegpsFields::Weeks field.
    struct WeeksCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimegpsFields::Weeks field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::NavTimegpsFields::Weeks field.
        static const char* name()
        {
            return "weeks";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimegpsFields::LeapS field.
    struct LeapSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimegpsFields::LeapS field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavTimegpsFields::LeapS field.
        static const char* name()
        {
            return "leapS";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavTimegpsFields::Valid field.
    struct ValidCommon
    {
        /// @brief Name of the @ref ublox::message::NavTimegpsFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavTimegpsFields::Valid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "towValid",
                "weekValid",
                "leapSValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimegpsFields::TAcc field.
    struct TAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimegpsFields::TAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavTimegpsFields::TAcc field.
        static const char* name()
        {
            return "tAcc";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavTimegps message.
/// @see ublox::message::NavTimegps
struct NavTimegpsCommon
{
    /// @brief Name of the @ref ublox::message::NavTimegps message.
    static const char* name()
    {
        return "NAV-TIMEGPS";
    }
    
};

} // namespace message

} // namespace ublox


