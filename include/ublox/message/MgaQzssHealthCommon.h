// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaQzssHealth message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaQzssHealth message.
/// @see ublox::message::MgaQzssHealthFields
struct MgaQzssHealthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssHealthFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssHealthFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssHealthFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssHealthFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssHealthFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssHealthFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssHealthFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaQzssHealthFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaQzssHealthFields::HealthCode field.
    struct HealthCodeCommon
    {
        /// @brief Name of the @ref ublox::message::MgaQzssHealthFields::HealthCode field.
        static const char* name()
        {
            return "healthCode";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssHealthFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::MgaQzssHealthFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaQzssHealth message.
/// @see ublox::message::MgaQzssHealth
struct MgaQzssHealthCommon
{
    /// @brief Name of the @ref ublox::message::MgaQzssHealth message.
    static const char* name()
    {
        return "MGA-QZSS-HEALTH";
    }
    
};

} // namespace message

} // namespace ublox


