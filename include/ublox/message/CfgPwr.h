// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"CFG-PWR"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/message/CfgPwrCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPwr.
/// @tparam TOpt Extra options
/// @see @ref CfgPwr
/// @headerfile "ublox/message/CfgPwr.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPwrFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPwrFieldsCommon::VersionCommon::name();
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
            return ublox::message::CfgPwrFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"state"</b> field.
    /// @see @ref ublox::message::CfgPwrFieldsCommon::StateVal
    class State : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgPwrFieldsCommon::StateVal,
            comms::option::def::DefaultNumValue<1381322272L>,
            comms::option::def::ValidNumValue<1111706448L>,
            comms::option::def::ValidNumValue<1381322272L>,
            comms::option::def::ValidNumValue<1398034256L>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgPwrFieldsCommon::StateVal,
                comms::option::def::DefaultNumValue<1381322272L>,
                comms::option::def::ValidNumValue<1111706448L>,
                comms::option::def::ValidNumValue<1381322272L>,
                comms::option::def::ValidNumValue<1398034256L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPwrFieldsCommon::StateCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgPwrFieldsCommon::StateCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        State
    >;
};

/// @brief Definition of <b>"CFG-PWR"</b> message class.
/// @details
///     See @ref CfgPwrFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPwr.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPwr : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgPwr,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPwr>,
        comms::option::def::FieldsImpl<typename CfgPwrFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPwr<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgPwr,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPwr>,
            comms::option::def::FieldsImpl<typename CfgPwrFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPwr<TMsgBase, TOpt> >,
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
    ///         for @ref CfgPwrFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgPwrFields::Reserved1 field.
    ///     @li @b Field_state type and @b field_state() access fuction
    ///         for @ref CfgPwrFields::State field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        reserved1,
        state
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgPwrCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


