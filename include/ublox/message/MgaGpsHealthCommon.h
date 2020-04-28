// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGpsHealth message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGpsHealth message.
/// @see ublox::message::MgaGpsHealthFields
struct MgaGpsHealthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsHealthFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsHealthFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsHealthFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsHealthFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsHealthFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsHealthFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsHealthFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGpsHealthFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaGpsHealthFields::HealthCode field.
    struct HealthCodeCommon
    {
        /// @brief Name of the @ref ublox::message::MgaGpsHealthFields::HealthCode field.
        static const char* name()
        {
            return "healthCode";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsHealthFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaGpsHealthFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGpsHealth message.
/// @see ublox::message::MgaGpsHealth
struct MgaGpsHealthCommon
{
    /// @brief Name of the @ref ublox::message::MgaGpsHealth message.
    static const char* name()
    {
        return "MGA-GPS-HEALTH";
    }
    
};

} // namespace message

} // namespace ublox


