// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgGeofence message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/LatCommon.h"
#include "ublox/field/LonCommon.h"
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgGeofence message.
/// @see ublox::message::CfgGeofenceFields
struct CfgGeofenceFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGeofenceFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::NumFences field.
    struct NumFencesCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGeofenceFields::NumFences field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::NumFences field.
        static const char* name()
        {
            return "numFences";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::ConfLvl field.
    struct ConfLvlCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGeofenceFields::ConfLvl field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::ConfLvl field.
        static const char* name()
        {
            return "confLvl";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::PioEnabled field.
    struct PioEnabledCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgGeofenceFields::PioEnabled field.
        enum class ValueType : std::uint8_t
        {
            Disable = 0, ///< value @b Disable.
            Enable = 1, ///< value @b Enable.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::PioEnabled field.
        static const char* name()
        {
            return "pioEnabled";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Disable",
                "Enable"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgGeofenceFields::PioEnabled field.
    using PioEnabledVal = PioEnabledCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::PinPolarity field.
    struct PinPolarityCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgGeofenceFields::PinPolarity field.
        enum class ValueType : std::uint8_t
        {
            LowInside = 0, ///< value @b LowInside.
            LowOutside = 1, ///< value @b LowOutside.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::PinPolarity field.
        static const char* name()
        {
            return "pinPolarity";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "LowInside",
                "LowOutside"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgGeofenceFields::PinPolarity field.
    using PinPolarityVal = PinPolarityCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::Pin field.
    struct PinCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGeofenceFields::Pin field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::Pin field.
        static const char* name()
        {
            return "pin";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGeofenceFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgGeofenceFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgGeofenceFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Lat field.
            using LatCommon = ublox::field::LatCommon;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Lon field.
            using LonCommon = ublox::field::LonCommon;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Radius field.
            struct RadiusCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Radius field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Radius field.
                static const char* name()
                {
                    return "radius";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::CfgGeofenceFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::CfgGeofenceFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgGeofenceFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::CfgGeofenceFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgGeofence message.
/// @see ublox::message::CfgGeofence
struct CfgGeofenceCommon
{
    /// @brief Name of the @ref ublox::message::CfgGeofence message.
    static const char* name()
    {
        return "CFG-GEOFENCE";
    }
    
};

} // namespace message

} // namespace ublox


