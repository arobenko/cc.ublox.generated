// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavGeofence message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GeofenceStateCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavGeofence message.
/// @see ublox::message::NavGeofenceFields
struct NavGeofenceFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavGeofenceFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavGeofenceFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavGeofenceFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavGeofenceFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavGeofenceFields::Status field.
    struct StatusCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavGeofenceFields::Status field.
        enum class ValueType : std::uint8_t
        {
            NotAvailable = 0, ///< value <b>Not available</b>.
            Active = 1, ///< value @b Active
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::NavGeofenceFields::Status field.
        static const char* name()
        {
            return "status";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Not available",
                "Active"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavGeofenceFields::Status field.
    using StatusVal = StatusCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavGeofenceFields::NumFences field.
    struct NumFencesCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavGeofenceFields::NumFences field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavGeofenceFields::NumFences field.
        static const char* name()
        {
            return "numFences";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavGeofenceFields::CombState field.
    struct CombStateCommon : public ublox::field::GeofenceStateCommon
    {
        /// @brief Name of the @ref ublox::message::NavGeofenceFields::CombState field.
        static const char* name()
        {
            return "combState";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavGeofenceFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavGeofenceFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavGeofenceFields::ListMembers::ElementMembers::State field.
            struct StateCommon : public ublox::field::GeofenceStateCommon
            {
                /// @brief Name of the @ref ublox::message::NavGeofenceFields::ListMembers::ElementMembers::State field.
                static const char* name()
                {
                    return "state";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavGeofenceFields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public ublox::field::Res1Common
            {
                /// @brief Name of the @ref ublox::message::NavGeofenceFields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::NavGeofenceFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::NavGeofenceFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavGeofenceFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::NavGeofenceFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavGeofence message.
/// @see ublox::message::NavGeofence
struct NavGeofenceCommon
{
    /// @brief Name of the @ref ublox::message::NavGeofence message.
    static const char* name()
    {
        return "NAV-GEOFENCE";
    }
    
};

} // namespace message

} // namespace ublox


