// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgValget message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/CfgValLayerCommon.h"
#include "ublox/field/CfgValPairSimpleCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgValget message.
/// @see ublox::message::CfgValgetFields
struct CfgValgetFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValgetFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgValgetFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgValgetFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValgetFields::Layer field.
    struct LayerCommon : public ublox::field::CfgValLayerCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValgetFields::Layer field.
        static const char* name()
        {
            return "layer";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValgetFields::Position field.
    struct PositionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgValgetFields::Position field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgValgetFields::Position field.
        static const char* name()
        {
            return "position";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgValgetFields::Cfgdata list.
    struct CfgdataMembersCommon
    {
        /// @brief Common types and functions for members of
        ///     @ref ublox::message::CfgValgetFields::CfgdataMembers::Element field.
        using ElementMembersCommon = ublox::field::CfgValPairSimpleMembersCommon;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgValgetFields::CfgdataMembers::Element field.
        struct ElementCommon : public ublox::field::CfgValPairSimpleCommon
        {
            /// @brief Name of the @ref ublox::message::CfgValgetFields::CfgdataMembers::Element field.
            static const char* name()
            {
                return "Element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgValgetFields::Cfgdata field.
    struct CfgdataCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValgetFields::Cfgdata field.
        static const char* name()
        {
            return "cfgdata";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgValget message.
/// @see ublox::message::CfgValget
struct CfgValgetCommon
{
    /// @brief Name of the @ref ublox::message::CfgValget message.
    static const char* name()
    {
        return "CFG-VALGET";
    }
    
};

} // namespace message

} // namespace ublox


