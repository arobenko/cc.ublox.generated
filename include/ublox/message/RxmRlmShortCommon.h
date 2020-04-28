// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmRlmShort message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmRlmShort message.
/// @see ublox::message::RxmRlmShortFields
struct RxmRlmShortFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmShortFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmShortFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmShortFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmShortFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmShortFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmShortFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmShortFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmRlmShortFields::Beacon field.
    struct BeaconCommon
    {
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Beacon field.
        static const char* name()
        {
            return "beacon";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmShortFields::Message field.
    struct MessageCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmShortFields::Message field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Message field.
        static const char* name()
        {
            return "message";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmRlmShortFields::Params field.
    struct ParamsCommon
    {
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Params field.
        static const char* name()
        {
            return "params";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmShortFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::RxmRlmShortFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmRlmShort message.
/// @see ublox::message::RxmRlmShort
struct RxmRlmShortCommon
{
    /// @brief Name of the @ref ublox::message::RxmRlmShort message.
    static const char* name()
    {
        return "RXM-RLM (Short)";
    }
    
};

} // namespace message

} // namespace ublox


