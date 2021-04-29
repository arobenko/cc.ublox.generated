// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"UPD-SOS (Restored)"</b> message and its fields.

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
#include "ublox/field/Res3.h"
#include "ublox/message/UpdSosRestoredCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref UpdSosRestored.
/// @tparam TOpt Extra options
/// @see @ref UpdSosRestored
/// @headerfile "ublox/message/UpdSosRestored.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct UpdSosRestoredFields
{
    /// @brief Definition of <b>"cmd"</b> field.
    struct Cmd : public
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
            return ublox::message::UpdSosRestoredFieldsCommon::CmdCommon::name();
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
            return ublox::message::UpdSosRestoredFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"response"</b> field.
    /// @see @ref ublox::message::UpdSosRestoredFieldsCommon::ResponseVal
    class Response : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::UpdSosRestoredFieldsCommon::ResponseVal,
            comms::option::def::ValidNumValueRange<0, 3>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::UpdSosRestoredFieldsCommon::ResponseVal,
                comms::option::def::ValidNumValueRange<0, 3>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::UpdSosRestoredFieldsCommon::ResponseCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::UpdSosRestoredFieldsCommon::ResponseCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::UpdSosRestoredFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Cmd,
        Reserved1,
        Response,
        Reserved2
    >;
};

/// @brief Definition of <b>"UPD-SOS (Restored)"</b> message class.
/// @details
///     See @ref UpdSosRestoredFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/UpdSosRestored.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class UpdSosRestored : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::UpdSosRestored,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_UpdSos>,
        comms::option::def::FieldsImpl<typename UpdSosRestoredFields<TOpt>::All>,
        comms::option::def::MsgType<UpdSosRestored<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::UpdSosRestored,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_UpdSos>,
            comms::option::def::FieldsImpl<typename UpdSosRestoredFields<TOpt>::All>,
            comms::option::def::MsgType<UpdSosRestored<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_cmd type and @b field_cmd() access fuction
    ///         for @ref UpdSosRestoredFields::Cmd field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref UpdSosRestoredFields::Reserved1 field.
    ///     @li @b Field_response type and @b field_response() access fuction
    ///         for @ref UpdSosRestoredFields::Response field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref UpdSosRestoredFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        cmd,
        reserved1,
        response,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::UpdSosRestoredCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


