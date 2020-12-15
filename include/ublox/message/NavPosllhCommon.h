// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavPosllh message and its fields.

#pragma once

#include "ublox/field/HAccCommon.h"
#include "ublox/field/HMSLCommon.h"
#include "ublox/field/HeightCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/LatCommon.h"
#include "ublox/field/LonCommon.h"
#include "ublox/field/VAccCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavPosllh message.
/// @see ublox::message::NavPosllhFields
struct NavPosllhFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::Lon field.
    using LonCommon = ublox::field::LonCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::Lat field.
    using LatCommon = ublox::field::LatCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::Height field.
    using HeightCommon = ublox::field::HeightCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::HMSL field.
    using HMSLCommon = ublox::field::HMSLCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::HAcc field.
    using HAccCommon = ublox::field::HAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosllhFields::VAcc field.
    using VAccCommon = ublox::field::VAccCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavPosllh message.
/// @see ublox::message::NavPosllh
struct NavPosllhCommon
{
    /// @brief Name of the @ref ublox::message::NavPosllh message.
    static const char* name()
    {
        return "NAV-POSLLH";
    }
    
};

} // namespace message

} // namespace ublox


