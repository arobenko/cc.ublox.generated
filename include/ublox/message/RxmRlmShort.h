// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"RXM-RLM (Short)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/RxmRlmShortCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmRlmShort.
/// @tparam TOpt Extra options
/// @see @ref RxmRlmShort
/// @headerfile "ublox/message/RxmRlmShort.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRlmShortFields
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
            return ublox::message::RxmRlmShortFieldsCommon::VersionCommon::name();
        }
        
    };
    
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
            return ublox::message::RxmRlmShortFieldsCommon::TypeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmShortFieldsCommon::SvidCommon::name();
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
            return ublox::message::RxmRlmShortFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"beacon"</b> field.
    struct Beacon : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::RxmRlmShortFields::Beacon,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmShortFieldsCommon::BeaconCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"message"</b> field.
    struct Message : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmShortFieldsCommon::MessageCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"params"</b> field.
    struct Params : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::RxmRlmShortFields::Params,
            comms::option::def::SequenceFixedSize<2U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmShortFieldsCommon::ParamsCommon::name();
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
            return ublox::message::RxmRlmShortFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Type,
        Svid,
        Reserved1,
        Beacon,
        Message,
        Params,
        Reserved2
    >;
};

/// @brief Definition of <b>"RXM-RLM (Short)"</b> message class.
/// @details
///     See @ref RxmRlmShortFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRlmShort.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRlmShort : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRlmShort,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRlm>,
        comms::option::def::FieldsImpl<typename RxmRlmShortFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRlmShort<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRlmShort,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRlm>,
            comms::option::def::FieldsImpl<typename RxmRlmShortFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRlmShort<TMsgBase, TOpt> >,
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
    ///         for @ref RxmRlmShortFields::Version field.
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref RxmRlmShortFields::Type field.
    ///     @li @b Field_svid type and @b field_svid() access fuction
    ///         for @ref RxmRlmShortFields::Svid field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref RxmRlmShortFields::Reserved1 field.
    ///     @li @b Field_beacon type and @b field_beacon() access fuction
    ///         for @ref RxmRlmShortFields::Beacon field.
    ///     @li @b Field_message type and @b field_message() access fuction
    ///         for @ref RxmRlmShortFields::Message field.
    ///     @li @b Field_params type and @b field_params() access fuction
    ///         for @ref RxmRlmShortFields::Params field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref RxmRlmShortFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        type,
        svid,
        reserved1,
        beacon,
        message,
        params,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::RxmRlmShortCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


