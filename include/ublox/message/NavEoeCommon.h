// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavEoe message and its fields.

#pragma once

#include "ublox/field/ItowCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavEoe message.
/// @see ublox::message::NavEoeFields
struct NavEoeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavEoeFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavEoe message.
/// @see ublox::message::NavEoe
struct NavEoeCommon
{
    /// @brief Name of the @ref ublox::message::NavEoe message.
    static const char* name()
    {
        return "NAV-EOE";
    }
    
};

} // namespace message

} // namespace ublox


