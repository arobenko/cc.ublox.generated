// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGalTimeoffset message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGalTimeoffset message.
/// @see ublox::message::MgaGalTimeoffsetFields
struct MgaGalTimeoffsetFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalTimeoffsetFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalTimeoffsetFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::A0G field.
    struct A0GCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalTimeoffsetFields::A0G field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::A0G field.
        static const char* name()
        {
            return "a0G";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::A1G field.
    struct A1GCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalTimeoffsetFields::A1G field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::A1G field.
        static const char* name()
        {
            return "a1G";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::T0G field.
    struct T0GCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalTimeoffsetFields::T0G field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::T0G field.
        static const char* name()
        {
            return "t0G";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::Wn0G field.
    struct Wn0GCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalTimeoffsetFields::Wn0G field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::Wn0G field.
        static const char* name()
        {
            return "wn0G";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalTimeoffsetFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGalTimeoffsetFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGalTimeoffset message.
/// @see ublox::message::MgaGalTimeoffset
struct MgaGalTimeoffsetCommon
{
    /// @brief Name of the @ref ublox::message::MgaGalTimeoffset message.
    static const char* name()
    {
        return "MGA-GAL-TIMEOFFSET";
    }
    
};

} // namespace message

} // namespace ublox


