// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"MGA-BDS-TIME_UTC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
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
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/message/MgaIniTimeUtcCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniTimeUtc.
/// @tparam TOpt Extra options
/// @see @ref MgaIniTimeUtc
/// @headerfile "ublox/message/MgaIniTimeUtc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniTimeUtcFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<16>,
            comms::option::def::ValidNumValue<16>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaIniTimeUtcFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Ref bitfield.
    struct RefMembers
    {
        /// @brief Definition of <b>"source"</b> field.
        /// @see @ref ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::SourceVal
        class Source : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::SourceVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::SourceVal,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::SourceCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::SourceCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::BitmaskReservedBits<0xCU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::BitmaskReservedBits<0xCU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_fall, @b getBitValue_fall() and @b setBitValue_fall().
            ///      @li @b BitIdx_last, @b getBitValue_last() and @b setBitValue_last().
            COMMS_BITMASK_BITS_SEQ(
                fall,
                last
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::BitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::MgaIniTimeUtcFieldsCommon::RefMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Source,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"ref"</b> field.
    class Ref : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename RefMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename RefMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_source type and @b field_source() access function -
        ///         for RefMembers::Source member field.
        ///     @li @b Field_bits type and @b field_bits() access function -
        ///         for RefMembers::Bits member field.
        COMMS_FIELD_MEMBERS_NAMES(
            source,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::RefCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"leapSecs"</b> field.
    struct LeapSecs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::LeapSecsCommon::name();
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
    
    /// @brief Definition of <b>"minute"</b> field.
    struct Minute : public
        ublox::field::Min<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::MinuteCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"second"</b> field.
    struct Second : public
        ublox::field::Sec<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::SecondCommon::name();
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
            return ublox::message::MgaIniTimeUtcFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ns"</b> field.
    struct Ns : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::NsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tAccS"</b> field.
    struct TAccS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::TAccSCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"tAccNs"</b> field.
    struct TAccNs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeUtcFieldsCommon::TAccNsCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Ref,
        LeapSecs,
        Year,
        Month,
        Day,
        Hour,
        Minute,
        Second,
        Reserved1,
        Ns,
        TAccS,
        Reserved2,
        TAccNs
    >;
};

/// @brief Definition of <b>"MGA-BDS-TIME_UTC"</b> message class.
/// @details
///     See @ref MgaIniTimeUtcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniTimeUtc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniTimeUtc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniTimeUtc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniTimeUtcFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniTimeUtc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniTimeUtc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniTimeUtcFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniTimeUtc<TMsgBase, TOpt> >,
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
    ///         for @ref MgaIniTimeUtcFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaIniTimeUtcFields::Version field.
    ///     @li @b Field_ref type and @b field_ref() access fuction
    ///         for @ref MgaIniTimeUtcFields::Ref field.
    ///     @li @b Field_leapSecs type and @b field_leapSecs() access fuction
    ///         for @ref MgaIniTimeUtcFields::LeapSecs field.
    ///     @li @b Field_year type and @b field_year() access fuction
    ///         for @ref MgaIniTimeUtcFields::Year field.
    ///     @li @b Field_month type and @b field_month() access fuction
    ///         for @ref MgaIniTimeUtcFields::Month field.
    ///     @li @b Field_day type and @b field_day() access fuction
    ///         for @ref MgaIniTimeUtcFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() access fuction
    ///         for @ref MgaIniTimeUtcFields::Hour field.
    ///     @li @b Field_minute type and @b field_minute() access fuction
    ///         for @ref MgaIniTimeUtcFields::Minute field.
    ///     @li @b Field_second type and @b field_second() access fuction
    ///         for @ref MgaIniTimeUtcFields::Second field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaIniTimeUtcFields::Reserved1 field.
    ///     @li @b Field_ns type and @b field_ns() access fuction
    ///         for @ref MgaIniTimeUtcFields::Ns field.
    ///     @li @b Field_tAccS type and @b field_tAccS() access fuction
    ///         for @ref MgaIniTimeUtcFields::TAccS field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaIniTimeUtcFields::Reserved2 field.
    ///     @li @b Field_tAccNs type and @b field_tAccNs() access fuction
    ///         for @ref MgaIniTimeUtcFields::TAccNs field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        ref,
        leapSecs,
        year,
        month,
        day,
        hour,
        minute,
        second,
        reserved1,
        ns,
        tAccS,
        reserved2,
        tAccNs
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 24U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 24U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaIniTimeUtcCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


