// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"MGA-GPS-HEALTH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaGpsHealthCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGpsHealth.
/// @tparam TOpt Extra options
/// @see @ref MgaGpsHealth
/// @headerfile "ublox/message/MgaGpsHealth.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGpsHealthFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<4>,
            comms::option::def::ValidNumValue<4>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsHealthFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaGpsHealthFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaGpsHealthFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"healthCode"</b> field.
    struct HealthCode : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaGpsHealthFields::HealthCode,
            comms::option::def::SequenceFixedSize<32U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsHealthFieldsCommon::HealthCodeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsHealthFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        HealthCode,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GPS-HEALTH"</b> message class.
/// @details
///     See @ref MgaGpsHealthFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGpsHealth.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGpsHealth : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGpsHealth,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
        comms::option::def::FieldsImpl<typename MgaGpsHealthFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGpsHealth<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGpsHealth,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
            comms::option::def::FieldsImpl<typename MgaGpsHealthFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGpsHealth<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref MgaGpsHealthFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaGpsHealthFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaGpsHealthFields::Reserved1 field.
    ///     @li @b Field_healthCode type and @b field_healthCode() access fuction
    ///         for @ref MgaGpsHealthFields::HealthCode field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaGpsHealthFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        healthCode,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaGpsHealthCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


