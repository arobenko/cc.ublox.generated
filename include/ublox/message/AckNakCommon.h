// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AckNak message and its fields.

#pragma once

#include "ublox/field/MsgIdCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AckNak message.
/// @see ublox::message::AckNakFields
struct AckNakFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AckNakFields::MsgId field.
    using MsgIdCommon = ublox::field::MsgIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AckNak message.
/// @see ublox::message::AckNak
struct AckNakCommon
{
    /// @brief Name of the @ref ublox::message::AckNak message.
    static const char* name()
    {
        return "ACK-NAK";
    }
    
};

} // namespace message

} // namespace ublox


