// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"CFG-TP"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/CfgTpCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgTp.
/// @tparam TOpt Extra options
/// @see @ref CfgTp
/// @headerfile "ublox/message/CfgTp.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTpFields
{
    /// @brief Definition of <b>"interval"</b> field.
    struct Interval : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMicroseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::IntervalCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"length"</b> field.
    struct Length : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMicroseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::LengthCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"status"</b> field.
    /// @see @ref ublox::message::CfgTpFieldsCommon::StatusVal
    class Status : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgTpFieldsCommon::StatusVal,
            comms::option::def::ValidNumValueRange<-1, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgTpFieldsCommon::StatusVal,
                comms::option::def::ValidNumValueRange<-1, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::StatusCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgTpFieldsCommon::StatusCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"timeRef"</b> field.
    /// @see @ref ublox::message::CfgTpFieldsCommon::TimeRefVal
    class TimeRef : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgTpFieldsCommon::TimeRefVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgTpFieldsCommon::TimeRefVal,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::TimeRefCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgTpFieldsCommon::TimeRefCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_syncMode, @b getBitValue_syncMode() and @b setBitValue_syncMode().
        COMMS_BITMASK_BITS_SEQ(
            syncMode
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::FlagsCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgTpFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"res"</b> field.
    struct Res : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::ResCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"antennaCableDelay"</b> field.
    struct AntennaCableDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::AntennaCableDelayCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"rfGroupDelay"</b> field.
    struct RfGroupDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::RfGroupDelayCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"userDelay"</b> field.
    struct UserDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTpFieldsCommon::UserDelayCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Interval,
        Length,
        Status,
        TimeRef,
        Flags,
        Res,
        AntennaCableDelay,
        RfGroupDelay,
        UserDelay
    >;
};

/// @brief Definition of <b>"CFG-TP"</b> message class.
/// @details
///     See @ref CfgTpFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTp.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTp : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp>,
        comms::option::def::FieldsImpl<typename CfgTpFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp>,
            comms::option::def::FieldsImpl<typename CfgTpFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_interval type and @b field_interval() access fuction
    ///         for @ref CfgTpFields::Interval field.
    ///     @li @b Field_length type and @b field_length() access fuction
    ///         for @ref CfgTpFields::Length field.
    ///     @li @b Field_status type and @b field_status() access fuction
    ///         for @ref CfgTpFields::Status field.
    ///     @li @b Field_timeRef type and @b field_timeRef() access fuction
    ///         for @ref CfgTpFields::TimeRef field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref CfgTpFields::Flags field.
    ///     @li @b Field_res type and @b field_res() access fuction
    ///         for @ref CfgTpFields::Res field.
    ///     @li @b Field_antennaCableDelay type and @b field_antennaCableDelay() access fuction
    ///         for @ref CfgTpFields::AntennaCableDelay field.
    ///     @li @b Field_rfGroupDelay type and @b field_rfGroupDelay() access fuction
    ///         for @ref CfgTpFields::RfGroupDelay field.
    ///     @li @b Field_userDelay type and @b field_userDelay() access fuction
    ///         for @ref CfgTpFields::UserDelay field.
    COMMS_MSG_FIELDS_NAMES(
        interval,
        length,
        status,
        timeRef,
        flags,
        res,
        antennaCableDelay,
        rfGroupDelay,
        userDelay
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgTpCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


