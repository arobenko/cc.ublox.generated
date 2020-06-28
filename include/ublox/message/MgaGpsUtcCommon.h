// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGpsUtc message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGpsUtc message.
/// @see ublox::message::MgaGpsUtcFields
struct MgaGpsUtcFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcA0 field.
    struct UtcA0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcA0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcA0 field.
        static const char* name()
        {
            return "utcA0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcA1 field.
    struct UtcA1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcA1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcA1 field.
        static const char* name()
        {
            return "utcA1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcDtLS field.
    struct UtcDtLSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcDtLS field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcDtLS field.
        static const char* name()
        {
            return "utcDtLS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcTot field.
    struct UtcTotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcTot field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcTot field.
        static const char* name()
        {
            return "utcTot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcWNt field.
    struct UtcWNtCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcWNt field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcWNt field.
        static const char* name()
        {
            return "utcWNt";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcWNlsf field.
    struct UtcWNlsfCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcWNlsf field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcWNlsf field.
        static const char* name()
        {
            return "utcWNlsf";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcDn field.
    struct UtcDnCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcDn field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcDn field.
        static const char* name()
        {
            return "utcDn";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::UtcDtLSF field.
    struct UtcDtLSFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGpsUtcFields::UtcDtLSF field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::UtcDtLSF field.
        static const char* name()
        {
            return "utcDtLSF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGpsUtcFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGpsUtcFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGpsUtc message.
/// @see ublox::message::MgaGpsUtc
struct MgaGpsUtcCommon
{
    /// @brief Name of the @ref ublox::message::MgaGpsUtc message.
    static const char* name()
    {
        return "MGA-GPS-UTC";
    }
    
};

} // namespace message

} // namespace ublox


