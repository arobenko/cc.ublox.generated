// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"MGA-FLASH-ACK"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/MgaFlashAckCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaFlashAck.
/// @tparam TOpt Extra options
/// @see @ref MgaFlashAck
/// @headerfile "ublox/message/MgaFlashAck.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaFlashAckFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashAckFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaFlashAckFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"ack"</b> field.
    /// @see @ref ublox::message::MgaFlashAckFieldsCommon::AckVal
    class Ack : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::MgaFlashAckFieldsCommon::AckVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::MgaFlashAckFieldsCommon::AckVal,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashAckFieldsCommon::AckCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::MgaFlashAckFieldsCommon::AckCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashAckFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"sequence"</b> field.
    struct Sequence : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashAckFieldsCommon::SequenceCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Ack,
        Reserved1,
        Sequence
    >;
};

/// @brief Definition of <b>"MGA-FLASH-ACK"</b> message class.
/// @details
///     See @ref MgaFlashAckFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaFlashAck.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaFlashAck : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaFlashAck,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
        comms::option::def::FieldsImpl<typename MgaFlashAckFields<TOpt>::All>,
        comms::option::def::MsgType<MgaFlashAck<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaFlashAck,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
            comms::option::def::FieldsImpl<typename MgaFlashAckFields<TOpt>::All>,
            comms::option::def::MsgType<MgaFlashAck<TMsgBase, TOpt> >,
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
    ///         for @ref MgaFlashAckFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaFlashAckFields::Version field.
    ///     @li @b Field_ack type and @b field_ack() access fuction
    ///         for @ref MgaFlashAckFields::Ack field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaFlashAckFields::Reserved1 field.
    ///     @li @b Field_sequence type and @b field_sequence() access fuction
    ///         for @ref MgaFlashAckFields::Sequence field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        ack,
        reserved1,
        sequence
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaFlashAckCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


