// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"NAV-TIMELS"</b> message and its fields.

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
#include "ublox/field/Itow.h"
#include "ublox/field/Res3.h"
#include "ublox/message/NavTimelsCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavTimels.
/// @tparam TOpt Extra options
/// @see @ref NavTimels
/// @headerfile "ublox/message/NavTimels.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimelsFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
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
            return ublox::message::NavTimelsFieldsCommon::VersionCommon::name();
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
            return ublox::message::NavTimelsFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"srcOfCurrLs"</b> field.
    /// @see @ref ublox::message::NavTimelsFieldsCommon::SrcOfCurrLsVal
    class SrcOfCurrLs : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::NavTimelsFieldsCommon::SrcOfCurrLsVal,
            comms::option::def::ValidNumValueRange<0, 7>,
            comms::option::def::ValidNumValue<255>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavTimelsFieldsCommon::SrcOfCurrLsVal,
                comms::option::def::ValidNumValueRange<0, 7>,
                comms::option::def::ValidNumValue<255>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::SrcOfCurrLsCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::NavTimelsFieldsCommon::SrcOfCurrLsCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"currLs"</b> field.
    struct CurrLs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::CurrLsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"srcOfLsChange"</b> field.
    /// @see @ref ublox::message::NavTimelsFieldsCommon::SrcOfLsChangeVal
    class SrcOfLsChange : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::NavTimelsFieldsCommon::SrcOfLsChangeVal,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValueRange<2, 6>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavTimelsFieldsCommon::SrcOfLsChangeVal,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::ValidNumValueRange<2, 6>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::SrcOfLsChangeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::NavTimelsFieldsCommon::SrcOfLsChangeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"lsChange"</b> field.
    struct LsChange : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::LsChangeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"timeToLsEvent"</b> field.
    struct TimeToLsEvent : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::TimeToLsEventCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dateOfLsGpsWn"</b> field.
    struct DateOfLsGpsWn : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::DateOfLsGpsWnCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dateOfLsGpsDn"</b> field.
    struct DateOfLsGpsDn : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::DateOfLsGpsDnCommon::name();
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
            return ublox::message::NavTimelsFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_validCurrLs, @b getBitValue_validCurrLs() and @b setBitValue_validCurrLs().
        ///      @li @b BitIdx_validTimeToLsEvent, @b getBitValue_validTimeToLsEvent() and @b setBitValue_validTimeToLsEvent().
        COMMS_BITMASK_BITS_SEQ(
            validCurrLs,
            validTimeToLsEvent
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimelsFieldsCommon::ValidCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavTimelsFieldsCommon::ValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        Reserved1,
        SrcOfCurrLs,
        CurrLs,
        SrcOfLsChange,
        LsChange,
        TimeToLsEvent,
        DateOfLsGpsWn,
        DateOfLsGpsDn,
        Reserved2,
        Valid
    >;
};

/// @brief Definition of <b>"NAV-TIMELS"</b> message class.
/// @details
///     See @ref NavTimelsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimels.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimels : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimels,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimels>,
        comms::option::def::FieldsImpl<typename NavTimelsFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimels<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimels,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimels>,
            comms::option::def::FieldsImpl<typename NavTimelsFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimels<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavTimelsFields::Itow field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref NavTimelsFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavTimelsFields::Reserved1 field.
    ///     @li @b Field_srcOfCurrLs type and @b field_srcOfCurrLs() access fuction
    ///         for @ref NavTimelsFields::SrcOfCurrLs field.
    ///     @li @b Field_currLs type and @b field_currLs() access fuction
    ///         for @ref NavTimelsFields::CurrLs field.
    ///     @li @b Field_srcOfLsChange type and @b field_srcOfLsChange() access fuction
    ///         for @ref NavTimelsFields::SrcOfLsChange field.
    ///     @li @b Field_lsChange type and @b field_lsChange() access fuction
    ///         for @ref NavTimelsFields::LsChange field.
    ///     @li @b Field_timeToLsEvent type and @b field_timeToLsEvent() access fuction
    ///         for @ref NavTimelsFields::TimeToLsEvent field.
    ///     @li @b Field_dateOfLsGpsWn type and @b field_dateOfLsGpsWn() access fuction
    ///         for @ref NavTimelsFields::DateOfLsGpsWn field.
    ///     @li @b Field_dateOfLsGpsDn type and @b field_dateOfLsGpsDn() access fuction
    ///         for @ref NavTimelsFields::DateOfLsGpsDn field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref NavTimelsFields::Reserved2 field.
    ///     @li @b Field_valid type and @b field_valid() access fuction
    ///         for @ref NavTimelsFields::Valid field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        version,
        reserved1,
        srcOfCurrLs,
        currLs,
        srcOfLsChange,
        lsChange,
        timeToLsEvent,
        dateOfLsGpsWn,
        dateOfLsGpsDn,
        reserved2,
        valid
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 24U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 24U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavTimelsCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


