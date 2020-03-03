// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"MGA-BDS-POS_LLH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Res2.h"
#include "ublox/message/MgaIniPosLlhCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniPosLlh.
/// @tparam TOpt Extra options
/// @see @ref MgaIniPosLlh
/// @headerfile "ublox/message/MgaIniPosLlh.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniPosLlhFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniPosLlhFieldsCommon::TypeCommon::name();
        }
        
    };
    
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
            return ublox::message::MgaIniPosLlhFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniPosLlhFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"lat"</b> field.
    using Lat =
        ublox::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"lon"</b> field.
    using Lon =
        ublox::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"alt"</b> field.
    struct Alt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniPosLlhFieldsCommon::AltCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"posAcc"</b> field.
    struct PosAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniPosLlhFieldsCommon::PosAccCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        Lat,
        Lon,
        Alt,
        PosAcc
    >;
};

/// @brief Definition of <b>"MGA-BDS-POS_LLH"</b> message class.
/// @details
///     See @ref MgaIniPosLlhFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniPosLlh.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniPosLlh : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniPosLlh,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniPosLlhFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniPosLlh<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniPosLlh,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniPosLlhFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniPosLlh<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() fuction
    ///         for @ref MgaIniPosLlhFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaIniPosLlhFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaIniPosLlhFields::Reserved1 field.
    ///     @li @b Field_lat type and @b field_lat() fuction
    ///         for @ref MgaIniPosLlhFields::Lat field.
    ///     @li @b Field_lon type and @b field_lon() fuction
    ///         for @ref MgaIniPosLlhFields::Lon field.
    ///     @li @b Field_alt type and @b field_alt() fuction
    ///         for @ref MgaIniPosLlhFields::Alt field.
    ///     @li @b Field_posAcc type and @b field_posAcc() fuction
    ///         for @ref MgaIniPosLlhFields::PosAcc field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        lat,
        lon,
        alt,
        posAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaIniPosLlhCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


