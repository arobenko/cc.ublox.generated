// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaBdsHealth message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaBdsHealth message.
/// @see ublox::message::MgaBdsHealthFields
struct MgaBdsHealthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsHealthFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsHealthFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsHealthFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsHealthFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsHealthFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsHealthFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsHealthFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsHealthFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MgaBdsHealthFields::HealthCode list.
    struct HealthCodeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MgaBdsHealthFields::HealthCodeMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::MgaBdsHealthFields::HealthCodeMembers::Element field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::message::MgaBdsHealthFields::HealthCodeMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaBdsHealthFields::HealthCode field.
    struct HealthCodeCommon
    {
        /// @brief Name of the @ref ublox::message::MgaBdsHealthFields::HealthCode field.
        static const char* name()
        {
            return "healthCode";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsHealthFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsHealthFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaBdsHealth message.
/// @see ublox::message::MgaBdsHealth
struct MgaBdsHealthCommon
{
    /// @brief Name of the @ref ublox::message::MgaBdsHealth message.
    static const char* name()
    {
        return "MGA-BDS-HEALTH";
    }
    
};

} // namespace message

} // namespace ublox


