// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"NAV-HPPOSECEF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/EcefHP.h"
#include "ublox/field/EcefX.h"
#include "ublox/field/EcefY.h"
#include "ublox/field/EcefZ.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res3.h"
#include "ublox/message/NavHpposecefCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavHpposecef.
/// @tparam TOpt Extra options
/// @see @ref NavHpposecef
/// @headerfile "ublox/message/NavHpposecef.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavHpposecefFields
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
            return ublox::message::NavHpposecefFieldsCommon::VersionCommon::name();
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
            return ublox::message::NavHpposecefFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefX"</b> field.
    using EcefX =
        ublox::field::EcefX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefY"</b> field.
    using EcefY =
        ublox::field::EcefY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    using EcefZ =
        ublox::field::EcefZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefXHp"</b> field.
    struct EcefXHp : public
        ublox::field::EcefHP<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposecefFieldsCommon::EcefXHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"ecefYHp"</b> field.
    struct EcefYHp : public
        ublox::field::EcefHP<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposecefFieldsCommon::EcefYHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"ecefZHp"</b> field.
    struct EcefZHp : public
        ublox::field::EcefHP<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposecefFieldsCommon::EcefZHpCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavHpposecefFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"pAcc"</b> field.
    struct PAcc : public
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
            return ublox::message::NavHpposecefFieldsCommon::PAccCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        EcefX,
        EcefY,
        EcefZ,
        EcefXHp,
        EcefYHp,
        EcefZHp,
        Reserved2,
        PAcc
    >;
};

/// @brief Definition of <b>"NAV-HPPOSECEF"</b> message class.
/// @details
///     See @ref NavHpposecefFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavHpposecef.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavHpposecef : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavHpposecef,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposecef>,
        comms::option::def::FieldsImpl<typename NavHpposecefFields<TOpt>::All>,
        comms::option::def::MsgType<NavHpposecef<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavHpposecef,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposecef>,
            comms::option::def::FieldsImpl<typename NavHpposecefFields<TOpt>::All>,
            comms::option::def::MsgType<NavHpposecef<TMsgBase, TOpt> >,
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
    ///         for @ref NavHpposecefFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavHpposecefFields::Reserved1 field.
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavHpposecefFields::Itow field.
    ///     @li @b Field_ecefX type and @b field_ecefX() access fuction
    ///         for @ref NavHpposecefFields::EcefX field.
    ///     @li @b Field_ecefY type and @b field_ecefY() access fuction
    ///         for @ref NavHpposecefFields::EcefY field.
    ///     @li @b Field_ecefZ type and @b field_ecefZ() access fuction
    ///         for @ref NavHpposecefFields::EcefZ field.
    ///     @li @b Field_ecefXHp type and @b field_ecefXHp() access fuction
    ///         for @ref NavHpposecefFields::EcefXHp field.
    ///     @li @b Field_ecefYHp type and @b field_ecefYHp() access fuction
    ///         for @ref NavHpposecefFields::EcefYHp field.
    ///     @li @b Field_ecefZHp type and @b field_ecefZHp() access fuction
    ///         for @ref NavHpposecefFields::EcefZHp field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref NavHpposecefFields::Reserved2 field.
    ///     @li @b Field_pAcc type and @b field_pAcc() access fuction
    ///         for @ref NavHpposecefFields::PAcc field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        reserved1,
        itow,
        ecefX,
        ecefY,
        ecefZ,
        ecefXHp,
        ecefYHp,
        ecefZHp,
        reserved2,
        pAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavHpposecefCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


