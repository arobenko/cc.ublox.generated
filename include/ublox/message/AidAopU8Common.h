// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAopU8 message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAopU8 message.
/// @see ublox::message::AidAopU8Fields
struct AidAopU8FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAopU8Fields::GnssId field.
    using GnssIdCommon = ublox::field::GnssIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAopU8Fields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAopU8Fields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAopU8Fields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAopU8Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::AidAopU8Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::AidAopU8Fields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::AidAopU8Fields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAopU8 message.
/// @see ublox::message::AidAopU8
struct AidAopU8Common
{
    /// @brief Name of the @ref ublox::message::AidAopU8 message.
    static const char* name()
    {
        return "AID-AOP (ublox-8)";
    }
    
};

} // namespace message

} // namespace ublox


