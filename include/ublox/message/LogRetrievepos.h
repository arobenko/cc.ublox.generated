/// @file
/// @brief Contains definition of <b>"LOG-RETRIEVEPOS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/HAcc.h"
#include "ublox/field/HMSL.h"
#include "ublox/field/Heading.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref LogRetrievepos.
/// @tparam TOpt Extra options
/// @see @ref LogRetrievepos
/// @headerfile "ublox/message/LogRetrievepos.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogRetrieveposFields
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
    
    /// @brief Definition of <b>"lon"</b> field.
    using Lon =
        ublox::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"lat"</b> field.
    using Lat =
        ublox::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"hMSL"</b> field.
    using HMSL =
        ublox::field::HMSL<
            TOpt
        >;
    
    /// @brief Definition of <b>"hAcc"</b> field.
    using HAcc =
        ublox::field::HAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"gSpeed"</b> field.
    struct GSpeed : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMillimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Definition of <b>"heading"</b> field.
    using Heading =
        ublox::field::Heading<
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
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"fixType"</b> field.
    struct FixType : public
        ublox::field::GpsFix<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixType";
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
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numSV";
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
            return "reserved2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        EntryIndex,
        Lon,
        Lat,
        HMSL,
        HAcc,
        GSpeed,
        Heading,
        Version,
        FixType,
        Year,
        Month,
        Day,
        Hour,
        Minute,
        Second,
        Reserved1,
        NumSV,
        Reserved2
    >;
};

/// @brief Definition of <b>"LOG-RETRIEVEPOS"</b> message class.
/// @details
///     See @ref LogRetrieveposFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogRetrievepos.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogRetrievepos : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogRetrievepos,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrievepos>,
        comms::option::def::FieldsImpl<typename LogRetrieveposFields<TOpt>::All>,
        comms::option::def::MsgType<LogRetrievepos<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogRetrievepos,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrievepos>,
            comms::option::def::FieldsImpl<typename LogRetrieveposFields<TOpt>::All>,
            comms::option::def::MsgType<LogRetrievepos<TMsgBase, TOpt> >,
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
    ///         for @ref LogRetrieveposFields::EntryIndex field.
    ///     @li @b Field_lon type and @b field_lon() fuction
    ///         for @ref LogRetrieveposFields::Lon field.
    ///     @li @b Field_lat type and @b field_lat() fuction
    ///         for @ref LogRetrieveposFields::Lat field.
    ///     @li @b Field_hMSL type and @b field_hMSL() fuction
    ///         for @ref LogRetrieveposFields::HMSL field.
    ///     @li @b Field_hAcc type and @b field_hAcc() fuction
    ///         for @ref LogRetrieveposFields::HAcc field.
    ///     @li @b Field_gSpeed type and @b field_gSpeed() fuction
    ///         for @ref LogRetrieveposFields::GSpeed field.
    ///     @li @b Field_heading type and @b field_heading() fuction
    ///         for @ref LogRetrieveposFields::Heading field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref LogRetrieveposFields::Version field.
    ///     @li @b Field_fixType type and @b field_fixType() fuction
    ///         for @ref LogRetrieveposFields::FixType field.
    ///     @li @b Field_year type and @b field_year() fuction
    ///         for @ref LogRetrieveposFields::Year field.
    ///     @li @b Field_month type and @b field_month() fuction
    ///         for @ref LogRetrieveposFields::Month field.
    ///     @li @b Field_day type and @b field_day() fuction
    ///         for @ref LogRetrieveposFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() fuction
    ///         for @ref LogRetrieveposFields::Hour field.
    ///     @li @b Field_minute type and @b field_minute() fuction
    ///         for @ref LogRetrieveposFields::Minute field.
    ///     @li @b Field_second type and @b field_second() fuction
    ///         for @ref LogRetrieveposFields::Second field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref LogRetrieveposFields::Reserved1 field.
    ///     @li @b Field_numSV type and @b field_numSV() fuction
    ///         for @ref LogRetrieveposFields::NumSV field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref LogRetrieveposFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        entryIndex,
        lon,
        lat,
        hMSL,
        hAcc,
        gSpeed,
        heading,
        version,
        fixType,
        year,
        month,
        day,
        hour,
        minute,
        second,
        reserved1,
        numSV,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "LOG-RETRIEVEPOS";
    }
    
    
};

} // namespace message

} // namespace ublox


