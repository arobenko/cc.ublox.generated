/// @file
/// @brief Contains definition of <b>"LOG-RETRIEVEPOSEXTRA"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref LogRetrieveposextra.
/// @tparam TOpt Extra options
/// @see @ref LogRetrieveposextra
/// @headerfile "ublox/message/LogRetrieveposextra.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogRetrieveposextraFields
{
    /// @brief Definition of <b>"entryIndex"</b> field.
    struct EntryIndex : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "entryIndex";
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
            return "version";
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
            return "reserved1";
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
            return "minute";
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
            return "second";
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
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"distance"</b> field.
    struct Distance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "distance";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Reserved3 list.
    struct Reserved3Members
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            ublox::field::Res1<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename Reserved3Members::Element,
            typename TOpt::message::LogRetrieveposextraFields::Reserved3,
            comms::option::def::SequenceFixedSize<12U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        EntryIndex,
        Version,
        Reserved1,
        Year,
        Month,
        Day,
        Hour,
        Minute,
        Second,
        Reserved2,
        Distance,
        Reserved3
    >;
};

/// @brief Definition of <b>"LOG-RETRIEVEPOSEXTRA"</b> message class.
/// @details
///     See @ref LogRetrieveposextraFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogRetrieveposextra.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogRetrieveposextra : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogRetrieveposextra,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrieveposextra>,
        comms::option::def::FieldsImpl<typename LogRetrieveposextraFields<TOpt>::All>,
        comms::option::def::MsgType<LogRetrieveposextra<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogRetrieveposextra,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrieveposextra>,
            comms::option::def::FieldsImpl<typename LogRetrieveposextraFields<TOpt>::All>,
            comms::option::def::MsgType<LogRetrieveposextra<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_entryIndex type and @b field_entryIndex() fuction
    ///         for @ref LogRetrieveposextraFields::EntryIndex field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref LogRetrieveposextraFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref LogRetrieveposextraFields::Reserved1 field.
    ///     @li @b Field_year type and @b field_year() fuction
    ///         for @ref LogRetrieveposextraFields::Year field.
    ///     @li @b Field_month type and @b field_month() fuction
    ///         for @ref LogRetrieveposextraFields::Month field.
    ///     @li @b Field_day type and @b field_day() fuction
    ///         for @ref LogRetrieveposextraFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() fuction
    ///         for @ref LogRetrieveposextraFields::Hour field.
    ///     @li @b Field_minute type and @b field_minute() fuction
    ///         for @ref LogRetrieveposextraFields::Minute field.
    ///     @li @b Field_second type and @b field_second() fuction
    ///         for @ref LogRetrieveposextraFields::Second field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref LogRetrieveposextraFields::Reserved2 field.
    ///     @li @b Field_distance type and @b field_distance() fuction
    ///         for @ref LogRetrieveposextraFields::Distance field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() fuction
    ///         for @ref LogRetrieveposextraFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        entryIndex,
        version,
        reserved1,
        year,
        month,
        day,
        hour,
        minute,
        second,
        reserved2,
        distance,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 32U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 32U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "LOG-RETRIEVEPOSEXTRA";
    }
    
    
};

} // namespace message

} // namespace ublox


