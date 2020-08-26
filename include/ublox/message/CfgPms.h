// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"CFG-PMS"</b> message and its fields.

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
#include "ublox/field/Res2.h"
#include "ublox/message/CfgPmsCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPms.
/// @tparam TOpt Extra options
/// @see @ref CfgPms
/// @headerfile "ublox/message/CfgPms.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPmsFields
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
            return ublox::message::CfgPmsFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"powerSetupValue"</b> field.
    /// @see @ref ublox::message::CfgPmsFieldsCommon::PowerSetupValueVal
    class PowerSetupValue : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgPmsFieldsCommon::PowerSetupValueVal,
            comms::option::def::ValidNumValueRange<0, 5>,
            comms::option::def::ValidNumValue<255>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgPmsFieldsCommon::PowerSetupValueVal,
                comms::option::def::ValidNumValueRange<0, 5>,
                comms::option::def::ValidNumValue<255>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPmsFieldsCommon::PowerSetupValueCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgPmsFieldsCommon::PowerSetupValueCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"period"</b> field.
    struct Period : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPmsFieldsCommon::PeriodCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"onTime"</b> field.
    struct OnTime : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPmsFieldsCommon::OnTimeCommon::name();
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
            return ublox::message::CfgPmsFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        PowerSetupValue,
        Period,
        OnTime,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-PMS"</b> message class.
/// @details
///     See @ref CfgPmsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPms.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPms : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPms>,
        comms::option::def::FieldsImpl<typename CfgPmsFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPms<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPms>,
            comms::option::def::FieldsImpl<typename CfgPmsFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPms<TMsgBase, TOpt> >,
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
    ///         for @ref CfgPmsFields::Version field.
    ///     @li @b Field_powerSetupValue type and @b field_powerSetupValue() access fuction
    ///         for @ref CfgPmsFields::PowerSetupValue field.
    ///     @li @b Field_period type and @b field_period() access fuction
    ///         for @ref CfgPmsFields::Period field.
    ///     @li @b Field_onTime type and @b field_onTime() access fuction
    ///         for @ref CfgPmsFields::OnTime field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgPmsFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        powerSetupValue,
        period,
        onTime,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgPmsCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


