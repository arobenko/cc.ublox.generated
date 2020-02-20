// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"NAV-POSLLH"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/HAcc.h"
#include "ublox/field/HMSL.h"
#include "ublox/field/Height.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/VAcc.h"
#include "ublox/message/NavPosllhCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavPosllh.
/// @tparam TOpt Extra options
/// @see @ref NavPosllh
/// @headerfile "ublox/message/NavPosllh.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavPosllhFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"lon"</b> field.
    using Lon =
        ublox::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"lat"</b> field.
    using Lat =
        ublox::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"height"</b> field.
    using Height =
        ublox::field::Height<
            TOpt
        >;
    
    /// @brief Definition of <b>"hMSL"</b> field.
    using HMSL =
        ublox::field::HMSL<
            TOpt
        >;
    
    /// @brief Definition of <b>"hAcc"</b> field.
    using HAcc =
        ublox::field::HAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"vAcc"</b> field.
    using VAcc =
        ublox::field::VAcc<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Lon,
        Lat,
        Height,
        HMSL,
        HAcc,
        VAcc
    >;
};

/// @brief Definition of <b>"NAV-POSLLH"</b> message class.
/// @details
///     See @ref NavPosllhFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavPosllh.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavPosllh : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavPosllh,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPosllh>,
        comms::option::def::FieldsImpl<typename NavPosllhFields<TOpt>::All>,
        comms::option::def::MsgType<NavPosllh<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavPosllh,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPosllh>,
            comms::option::def::FieldsImpl<typename NavPosllhFields<TOpt>::All>,
            comms::option::def::MsgType<NavPosllh<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() fuction
    ///         for @ref NavPosllhFields::Itow field.
    ///     @li @b Field_lon type and @b field_lon() fuction
    ///         for @ref NavPosllhFields::Lon field.
    ///     @li @b Field_lat type and @b field_lat() fuction
    ///         for @ref NavPosllhFields::Lat field.
    ///     @li @b Field_height type and @b field_height() fuction
    ///         for @ref NavPosllhFields::Height field.
    ///     @li @b Field_hMSL type and @b field_hMSL() fuction
    ///         for @ref NavPosllhFields::HMSL field.
    ///     @li @b Field_hAcc type and @b field_hAcc() fuction
    ///         for @ref NavPosllhFields::HAcc field.
    ///     @li @b Field_vAcc type and @b field_vAcc() fuction
    ///         for @ref NavPosllhFields::VAcc field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        lon,
        lat,
        height,
        hMSL,
        hAcc,
        vAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavPosllhCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


