// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaIniClkd message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaIniClkd message.
/// @see ublox::message::MgaIniClkdFields
struct MgaIniClkdFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniClkdFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniClkdFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniClkdFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniClkdFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniClkdFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniClkdFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniClkdFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniClkdFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniClkdFields::ClkD field.
    struct ClkDCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniClkdFields::ClkD field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniClkdFields::ClkD field.
        static const char* name()
        {
            return "clkD";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniClkdFields::ClkDAcc field.
    struct ClkDAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniClkdFields::ClkDAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniClkdFields::ClkDAcc field.
        static const char* name()
        {
            return "clkDAcc";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaIniClkd message.
/// @see ublox::message::MgaIniClkd
struct MgaIniClkdCommon
{
    /// @brief Name of the @ref ublox::message::MgaIniClkd message.
    static const char* name()
    {
        return "MGA-BDS-CLKD";
    }
    
};

} // namespace message

} // namespace ublox


