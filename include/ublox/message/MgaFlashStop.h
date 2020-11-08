// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"MGA-FLASH-STOP"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/MgaFlashStopCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaFlashStop.
/// @tparam TOpt Extra options
/// @see @ref MgaFlashStop
/// @headerfile "ublox/message/MgaFlashStop.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaFlashStopFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashStopFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaFlashStopFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version
    >;
};

/// @brief Definition of <b>"MGA-FLASH-STOP"</b> message class.
/// @details
///     See @ref MgaFlashStopFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaFlashStop.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaFlashStop : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaFlashStop,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
        comms::option::def::FieldsImpl<typename MgaFlashStopFields<TOpt>::All>,
        comms::option::def::MsgType<MgaFlashStop<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaFlashStop,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
            comms::option::def::FieldsImpl<typename MgaFlashStopFields<TOpt>::All>,
            comms::option::def::MsgType<MgaFlashStop<TMsgBase, TOpt> >,
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
    ///         for @ref MgaFlashStopFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaFlashStopFields::Version field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaFlashStopCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


