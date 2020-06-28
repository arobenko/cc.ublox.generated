// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AckAck message and its fields.

#pragma once

#include "ublox/field/MsgIdCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AckAck message.
/// @see ublox::message::AckAckFields
struct AckAckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AckAckFields::MsgId field.
    using MsgIdCommon = ublox::field::MsgIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AckAck message.
/// @see ublox::message::AckAck
struct AckAckCommon
{
    /// @brief Name of the @ref ublox::message::AckAck message.
    static const char* name()
    {
        return "ACK-ACK";
    }
    
};

} // namespace message

} // namespace ublox


