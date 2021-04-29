// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::UpdSosCreate message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::UpdSosCreate message.
/// @see ublox::message::UpdSosCreateFields
struct UpdSosCreateFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosCreateFields::Cmd field.
    struct CmdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::UpdSosCreateFields::Cmd field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::UpdSosCreateFields::Cmd field.
        static const char* name()
        {
            return "cmd";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosCreateFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::UpdSosCreateFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::UpdSosCreate message.
/// @see ublox::message::UpdSosCreate
struct UpdSosCreateCommon
{
    /// @brief Name of the @ref ublox::message::UpdSosCreate message.
    static const char* name()
    {
        return "UPD-SOS (Create)";
    }
    
};

} // namespace message

} // namespace ublox


