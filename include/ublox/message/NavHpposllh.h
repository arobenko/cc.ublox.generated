// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"NAV-HPPOSLLH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/HMSL.h"
#include "ublox/field/Height.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Res3.h"
#include "ublox/message/NavHpposllhCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavHpposllh.
/// @tparam TOpt Extra options
/// @see @ref NavHpposllh
/// @headerfile "ublox/message/NavHpposllh.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavHpposllhFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::Reserved1Common::name();
        }
        
    };
    
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
    
    /// @brief Definition of <b>"lonHp"</b> field.
    struct LonHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 100000000L>,
            comms::option::def::UnitsDegrees,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::LonHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"latHp"</b> field.
    struct LatHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 100000000L>,
            comms::option::def::UnitsDegrees,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::LatHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"heigthHp"</b> field.
    struct HeigthHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-9, 9>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::HeigthHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"hMSLHp"</b> field.
    struct HMSLHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-9, 9>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::HMSLHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"hAcc"</b> field.
    struct HAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::HAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"vAcc"</b> field.
    struct VAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposllhFieldsCommon::VAccCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        Lon,
        Lat,
        Height,
        HMSL,
        LonHp,
        LatHp,
        HeigthHp,
        HMSLHp,
        HAcc,
        VAcc
    >;
};

/// @brief Definition of <b>"NAV-HPPOSLLH"</b> message class.
/// @details
///     See @ref NavHpposllhFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavHpposllh.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavHpposllh : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavHpposllh,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposllh>,
        comms::option::def::FieldsImpl<typename NavHpposllhFields<TOpt>::All>,
        comms::option::def::MsgType<NavHpposllh<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavHpposllh,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposllh>,
            comms::option::def::FieldsImpl<typename NavHpposllhFields<TOpt>::All>,
            comms::option::def::MsgType<NavHpposllh<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref NavHpposllhFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavHpposllhFields::Reserved1 field.
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavHpposllhFields::Itow field.
    ///     @li @b Field_lon type and @b field_lon() access fuction
    ///         for @ref NavHpposllhFields::Lon field.
    ///     @li @b Field_lat type and @b field_lat() access fuction
    ///         for @ref NavHpposllhFields::Lat field.
    ///     @li @b Field_height type and @b field_height() access fuction
    ///         for @ref NavHpposllhFields::Height field.
    ///     @li @b Field_hMSL type and @b field_hMSL() access fuction
    ///         for @ref NavHpposllhFields::HMSL field.
    ///     @li @b Field_lonHp type and @b field_lonHp() access fuction
    ///         for @ref NavHpposllhFields::LonHp field.
    ///     @li @b Field_latHp type and @b field_latHp() access fuction
    ///         for @ref NavHpposllhFields::LatHp field.
    ///     @li @b Field_heigthHp type and @b field_heigthHp() access fuction
    ///         for @ref NavHpposllhFields::HeigthHp field.
    ///     @li @b Field_hMSLHp type and @b field_hMSLHp() access fuction
    ///         for @ref NavHpposllhFields::HMSLHp field.
    ///     @li @b Field_hAcc type and @b field_hAcc() access fuction
    ///         for @ref NavHpposllhFields::HAcc field.
    ///     @li @b Field_vAcc type and @b field_vAcc() access fuction
    ///         for @ref NavHpposllhFields::VAcc field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        reserved1,
        itow,
        lon,
        lat,
        height,
        hMSL,
        lonHp,
        latHp,
        heigthHp,
        hMSLHp,
        hAcc,
        vAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavHpposllhCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


