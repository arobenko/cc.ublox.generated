// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaIniTimeGnss message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaIniTimeGnss message.
/// @see ublox::message::MgaIniTimeGnssFields
struct MgaIniTimeGnssFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeGnssFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeGnssFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MgaIniTimeGnssFields::Ref field.
    struct RefMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
        struct SourceCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
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
            
            /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
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
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
        using SourceVal = SourceCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Bits field.
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
    ///     @ref ublox::message::MgaIniTimeGnssFields::Ref field.
    struct RefCommon
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Ref field.
        static const char* name()
        {
            return "ref";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::GnssId field.
    using GnssIdCommon = ublox::field::GnssIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeGnssFields::Week field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Tow field.
    using TowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Ns field.
    struct NsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeGnssFields::Ns field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Ns field.
        static const char* name()
        {
            return "ns";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::TAccS field.
    struct TAccSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeGnssFields::TAccS field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::TAccS field.
        static const char* name()
        {
            return "tAccS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniTimeGnssFields::TAccNs field.
    struct TAccNsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniTimeGnssFields::TAccNs field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniTimeGnssFields::TAccNs field.
        static const char* name()
        {
            return "tAccNs";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaIniTimeGnss message.
/// @see ublox::message::MgaIniTimeGnss
struct MgaIniTimeGnssCommon
{
    /// @brief Name of the @ref ublox::message::MgaIniTimeGnss message.
    static const char* name()
    {
        return "MGA-BDS-TIME_GNSS";
    }
    
};

} // namespace message

} // namespace ublox


