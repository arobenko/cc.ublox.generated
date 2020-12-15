// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaIniTimeUtc message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/DayCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaIniTimeUtc message.
/// @see ublox::message::MgaIniTimeUtcFields
struct MgaIniTimeUtcFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeUtcFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeUtcFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MgaIniTimeUtcFields::Ref field.
    struct RefMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Source field.
        struct SourceCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Source field.
            enum class ValueType : std::uint8_t
            {
                None = 0, ///< value @b None.
                EXTINT0 = 1, ///< value @b EXTINT0.
                EXTINT1 = 2, ///< value @b EXTINT1.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Source field.
            static const char* name()
            {
                return "source";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "None",
                    "EXTINT0",
                    "EXTINT1"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Source field.
        using SourceVal = SourceCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::MgaIniTimeUtcFields::RefMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "fall",
                    "last"
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
    ///     @ref ublox::message::MgaIniTimeUtcFields::Ref field.
    struct RefCommon
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Ref field.
        static const char* name()
        {
            return "ref";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::LeapSecs field.
    struct LeapSecsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeUtcFields::LeapSecs field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::LeapSecs field.
        static const char* name()
        {
            return "leapSecs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Minute field.
    struct MinuteCommon : public ublox::field::MinCommon
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Minute field.
        static const char* name()
        {
            return "minute";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Second field.
    struct SecondCommon : public ublox::field::SecCommon
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Second field.
        static const char* name()
        {
            return "second";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Ns field.
    struct NsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeUtcFields::Ns field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Ns field.
        static const char* name()
        {
            return "ns";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::TAccS field.
    struct TAccSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeUtcFields::TAccS field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::TAccS field.
        static const char* name()
        {
            return "tAccS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeUtcFields::TAccNs field.
    struct TAccNsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeUtcFields::TAccNs field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeUtcFields::TAccNs field.
        static const char* name()
        {
            return "tAccNs";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaIniTimeUtc message.
/// @see ublox::message::MgaIniTimeUtc
struct MgaIniTimeUtcCommon
{
    /// @brief Name of the @ref ublox::message::MgaIniTimeUtc message.
    static const char* name()
    {
        return "MGA-BDS-TIME_UTC";
    }
    
};

} // namespace message

} // namespace ublox


