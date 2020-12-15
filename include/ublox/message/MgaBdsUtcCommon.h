// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaBdsUtc message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaBdsUtc message.
/// @see ublox::message::MgaBdsUtcFields
struct MgaBdsUtcFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::A0UTC field.
    struct A0UTCCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::A0UTC field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::A0UTC field.
        static const char* name()
        {
            return "a0UTC";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::A1UTC field.
    struct A1UTCCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::A1UTC field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::A1UTC field.
        static const char* name()
        {
            return "a1UTC";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::DtLS field.
    struct DtLSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::DtLS field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::DtLS field.
        static const char* name()
        {
            return "dtLS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::WnRec field.
    struct WnRecCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::WnRec field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::WnRec field.
        static const char* name()
        {
            return "wnRec";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::WnLSF field.
    struct WnLSFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::WnLSF field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::WnLSF field.
        static const char* name()
        {
            return "wnLSF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::DN field.
    struct DNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::DN field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::DN field.
        static const char* name()
        {
            return "dN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::DtLSF field.
    struct DtLSFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsUtcFields::DtLSF field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::DtLSF field.
        static const char* name()
        {
            return "dtLSF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsUtcFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsUtcFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaBdsUtc message.
/// @see ublox::message::MgaBdsUtc
struct MgaBdsUtcCommon
{
    /// @brief Name of the @ref ublox::message::MgaBdsUtc message.
    static const char* name()
    {
        return "MGA-BDS-UTC";
    }
    
};

} // namespace message

} // namespace ublox


