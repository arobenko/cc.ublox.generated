// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavTimebds message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavTimebds message.
/// @see ublox::message::NavTimebdsFields
struct NavTimebdsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimebdsFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimebdsFields::SOW field.
    struct SOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimebdsFields::SOW field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavTimebdsFields::SOW field.
        static const char* name()
        {
            return "SOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimebdsFields::FSOW field.
    struct FSOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimebdsFields::FSOW field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavTimebdsFields::FSOW field.
        static const char* name()
        {
            return "fSOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimebdsFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimebdsFields::Week field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::NavTimebdsFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimebdsFields::LeapS field.
    struct LeapSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimebdsFields::LeapS field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavTimebdsFields::LeapS field.
        static const char* name()
        {
            return "leapS";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavTimebdsFields::Valid field.
    struct ValidCommon
    {
        /// @brief Name of the @ref ublox::message::NavTimebdsFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavTimebdsFields::Valid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "sowValid",
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
    ///     @ref ublox::message::NavTimebdsFields::TAcc field.
    struct TAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimebdsFields::TAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavTimebdsFields::TAcc field.
        static const char* name()
        {
            return "tAcc";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavTimebds message.
/// @see ublox::message::NavTimebds
struct NavTimebdsCommon
{
    /// @brief Name of the @ref ublox::message::NavTimebds message.
    static const char* name()
    {
        return "NAV-TIMEBDS";
    }
    
};

} // namespace message

} // namespace ublox


