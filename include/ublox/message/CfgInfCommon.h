// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgInf message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/InfMaskCommon.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgInf message.
/// @see ublox::message::CfgInfFields
struct CfgInfFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgInfFields::ProtocolId field.
    struct ProtocolIdCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgInfFields::ProtocolId field.
        enum class ValueType : std::uint8_t
        {
            UBX = 0, ///< value @b UBX.
            NMEA = 1, ///< value @b NMEA.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgInfFields::ProtocolId field.
        static const char* name()
        {
            return "protocolId";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "UBX",
                "NMEA"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgInfFields::ProtocolId field.
    using ProtocolIdVal = ProtocolIdCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgInfFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::CfgInfFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgInfFields::InfMsgMask list.
    struct InfMsgMaskMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgInfFields::InfMsgMaskMembers::Element field.
        struct ElementCommon : public ublox::field::InfMaskCommon
        {
            /// @brief Name of the @ref ublox::message::CfgInfFields::InfMsgMaskMembers::Element field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgInfFields::InfMsgMask field.
    struct InfMsgMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgInfFields::InfMsgMask field.
        static const char* name()
        {
            return "infMsgMask";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgInf message.
/// @see ublox::message::CfgInf
struct CfgInfCommon
{
    /// @brief Name of the @ref ublox::message::CfgInf message.
    static const char* name()
    {
        return "CFG-INF";
    }
    
};

} // namespace message

} // namespace ublox


