// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimDosc message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimDosc message.
/// @see ublox::message::TimDoscFields
struct TimDoscFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimDoscFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimDoscFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimDoscFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimDoscFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::TimDoscFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimDoscFields::Value field.
    struct ValueCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimDoscFields::Value field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimDoscFields::Value field.
        static const char* name()
        {
            return "value";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimDosc message.
/// @see ublox::message::TimDosc
struct TimDoscCommon
{
    /// @brief Name of the @ref ublox::message::TimDosc message.
    static const char* name()
    {
        return "TIM-DOSC";
    }
    
};

} // namespace message

} // namespace ublox


