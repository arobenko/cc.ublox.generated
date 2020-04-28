// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::EsfIns message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::EsfIns message.
/// @see ublox::message::EsfInsFields
struct EsfInsFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::EsfInsFields::Bitfield0 field.
    struct Bitfield0MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::EsfInsFields::Bitfield0Members::Version field.
        struct VersionCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::EsfInsFields::Bitfield0Members::Version field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::EsfInsFields::Bitfield0Members::Version field.
            static const char* name()
            {
                return "version";
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::EsfInsFields::Bitfield0Members::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::EsfInsFields::Bitfield0Members::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::EsfInsFields::Bitfield0Members::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "xAngRateValid",
                    "yAngRateValid",
                    "zAngRateValid",
                    "xAccelValid",
                    "yAccelValid",
                    "zAccelValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::EsfInsFields::Bitfield0 field.
    struct Bitfield0Common
    {
        /// @brief Name of the @ref ublox::message::EsfInsFields::Bitfield0 field.
        static const char* name()
        {
            return "bitfield0";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::EsfInsFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::XAngRate field.
    struct XAngRateCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::EsfInsFields::XAngRate field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::EsfInsFields::XAngRate field.
        static const char* name()
        {
            return "xAngRate";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::YAngRate field.
    struct YAngRateCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::EsfInsFields::YAngRate field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::EsfInsFields::YAngRate field.
        static const char* name()
        {
            return "yAngRate";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::ZAngRate field.
    struct ZAngRateCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::EsfInsFields::ZAngRate field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::EsfInsFields::ZAngRate field.
        static const char* name()
        {
            return "zAngRate";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::XAccel field.
    struct XAccelCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::EsfInsFields::XAccel field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::EsfInsFields::XAccel field.
        static const char* name()
        {
            return "xAccel";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::YAccel field.
    struct YAccelCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::EsfInsFields::YAccel field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::EsfInsFields::YAccel field.
        static const char* name()
        {
            return "yAccel";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfInsFields::ZAccel field.
    struct ZAccelCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::EsfInsFields::ZAccel field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::EsfInsFields::ZAccel field.
        static const char* name()
        {
            return "zAccel";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::EsfIns message.
/// @see ublox::message::EsfIns
struct EsfInsCommon
{
    /// @brief Name of the @ref ublox::message::EsfIns message.
    static const char* name()
    {
        return "ESF-INS";
    }
    
};

} // namespace message

} // namespace ublox


