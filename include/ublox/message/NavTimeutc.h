// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"NAV-TIMEUTC"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/message/NavTimeutcCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavTimeutc.
/// @tparam TOpt Extra options
/// @see @ref NavTimeutc
/// @headerfile "ublox/message/NavTimeutc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimeutcFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"tAcc"</b> field.
    struct TAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimeutcFieldsCommon::TAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"nano"</b> field.
    struct Nano : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds,
            comms::option::def::ValidNumValueRange<-1000000000L, 100000000L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimeutcFieldsCommon::NanoCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"year"</b> field.
    using Year =
        ublox::field::Year<
            TOpt
        >;
    
    /// @brief Definition of <b>"month"</b> field.
    using Month =
        ublox::field::Month<
            TOpt
        >;
    
    /// @brief Definition of <b>"day"</b> field.
    using Day =
        ublox::field::Day<
            TOpt
        >;
    
    /// @brief Definition of <b>"hour"</b> field.
    using Hour =
        ublox::field::Hour<
            TOpt
        >;
    
    /// @brief Definition of <b>"min"</b> field.
    using Min =
        ublox::field::Min<
            TOpt
        >;
    
    /// @brief Definition of <b>"sec"</b> field.
    using Sec =
        ublox::field::Sec<
            TOpt
        >;
    
    /// @brief Scope for all the member fields of
    ///     @ref Valid bitfield.
    struct ValidMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::BitmaskReservedBits<0x8U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::BitmaskReservedBits<0x8U, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_validTOW, @b getBitValue_validTOW() and @b setBitValue_validTOW().
            ///      @li @b BitIdx_validWKN, @b getBitValue_validWKN() and @b setBitValue_validWKN().
            ///      @li @b BitIdx_validUTC, @b getBitValue_validUTC() and @b setBitValue_validUTC().
            COMMS_BITMASK_BITS_SEQ(
                validTOW,
                validWKN,
                validUTC
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::BitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"utcStandard"</b> field.
        /// @see @ref ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardVal
        class UtcStandard : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 7>,
                comms::option::def::ValidNumValue<15>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardVal,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 7>,
                    comms::option::def::ValidNumValue<15>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Bits,
               UtcStandard
            >;
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ValidMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ValidMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_bits type and @b field_bits() access function -
        ///         for ValidMembers::Bits member field.
        ///     @li @b Field_utcStandard type and @b field_utcStandard() access function -
        ///         for ValidMembers::UtcStandard member field.
        COMMS_FIELD_MEMBERS_NAMES(
            bits,
            utcStandard
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavTimeutcFieldsCommon::ValidCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        TAcc,
        Nano,
        Year,
        Month,
        Day,
        Hour,
        Min,
        Sec,
        Valid
    >;
};

/// @brief Definition of <b>"NAV-TIMEUTC"</b> message class.
/// @details
///     See @ref NavTimeutcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimeutc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimeutc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimeutc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimeutc>,
        comms::option::def::FieldsImpl<typename NavTimeutcFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimeutc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimeutc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimeutc>,
            comms::option::def::FieldsImpl<typename NavTimeutcFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimeutc<TMsgBase, TOpt> >,
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
    ///         for @ref NavTimeutcFields::Itow field.
    ///     @li @b Field_tAcc type and @b field_tAcc() access fuction
    ///         for @ref NavTimeutcFields::TAcc field.
    ///     @li @b Field_nano type and @b field_nano() access fuction
    ///         for @ref NavTimeutcFields::Nano field.
    ///     @li @b Field_year type and @b field_year() access fuction
    ///         for @ref NavTimeutcFields::Year field.
    ///     @li @b Field_month type and @b field_month() access fuction
    ///         for @ref NavTimeutcFields::Month field.
    ///     @li @b Field_day type and @b field_day() access fuction
    ///         for @ref NavTimeutcFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() access fuction
    ///         for @ref NavTimeutcFields::Hour field.
    ///     @li @b Field_min type and @b field_min() access fuction
    ///         for @ref NavTimeutcFields::Min field.
    ///     @li @b Field_sec type and @b field_sec() access fuction
    ///         for @ref NavTimeutcFields::Sec field.
    ///     @li @b Field_valid type and @b field_valid() access fuction
    ///         for @ref NavTimeutcFields::Valid field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        tAcc,
        nano,
        year,
        month,
        day,
        hour,
        min,
        sec,
        valid
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavTimeutcCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


