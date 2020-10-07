// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"LOG-RETRIEVESTRING"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/message/LogRetrievestringCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref LogRetrievestring.
/// @tparam TOpt Extra options
/// @see @ref LogRetrievestring
/// @headerfile "ublox/message/LogRetrievestring.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogRetrievestringFields
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
            return ublox::message::LogRetrievestringFieldsCommon::EntryIndexCommon::name();
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
            return ublox::message::LogRetrievestringFieldsCommon::VersionCommon::name();
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
            return ublox::message::LogRetrievestringFieldsCommon::Reserved1Common::name();
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
            return ublox::message::LogRetrievestringFieldsCommon::MinuteCommon::name();
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
            return ublox::message::LogRetrievestringFieldsCommon::SecondCommon::name();
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
            return ublox::message::LogRetrievestringFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"byteCount"</b> field.
    struct ByteCount : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogRetrievestringFieldsCommon::ByteCountCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"bytes"</b> field.
    struct Bytes : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::LogRetrievestringFields::Bytes,
            comms::option::def::SequenceLengthForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogRetrievestringFieldsCommon::BytesCommon::name();
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
        ByteCount,
        Bytes
    >;
};

/// @brief Definition of <b>"LOG-RETRIEVESTRING"</b> message class.
/// @details
///     See @ref LogRetrievestringFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogRetrievestring.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogRetrievestring : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogRetrievestring,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrievestring>,
        comms::option::def::FieldsImpl<typename LogRetrievestringFields<TOpt>::All>,
        comms::option::def::MsgType<LogRetrievestring<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogRetrievestring,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrievestring>,
            comms::option::def::FieldsImpl<typename LogRetrievestringFields<TOpt>::All>,
            comms::option::def::MsgType<LogRetrievestring<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_entryIndex type and @b field_entryIndex() access fuction
    ///         for @ref LogRetrievestringFields::EntryIndex field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref LogRetrievestringFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref LogRetrievestringFields::Reserved1 field.
    ///     @li @b Field_year type and @b field_year() access fuction
    ///         for @ref LogRetrievestringFields::Year field.
    ///     @li @b Field_month type and @b field_month() access fuction
    ///         for @ref LogRetrievestringFields::Month field.
    ///     @li @b Field_day type and @b field_day() access fuction
    ///         for @ref LogRetrievestringFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() access fuction
    ///         for @ref LogRetrievestringFields::Hour field.
    ///     @li @b Field_minute type and @b field_minute() access fuction
    ///         for @ref LogRetrievestringFields::Minute field.
    ///     @li @b Field_second type and @b field_second() access fuction
    ///         for @ref LogRetrievestringFields::Second field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref LogRetrievestringFields::Reserved2 field.
    ///     @li @b Field_byteCount type and @b field_byteCount() access fuction
    ///         for @ref LogRetrievestringFields::ByteCount field.
    ///     @li @b Field_bytes type and @b field_bytes() access fuction
    ///         for @ref LogRetrievestringFields::Bytes field.
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
        byteCount,
        bytes
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::LogRetrievestringCommon::name();
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_bytes>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_bytes().forceReadLength(
            static_cast<std::size_t>(field_byteCount().value()));
        
        es = Base::template doReadFrom<FieldIdx_bytes>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_bytes() || updated;
        return updated;
    }
    
    
private:
    bool refresh_bytes()
    {
        auto expectedLength = static_cast<std::size_t>(field_byteCount().value());
        auto realLength = field_bytes().value().size();
        if (expectedLength != realLength) {
            using LenValueType = typename std::decay<decltype(field_byteCount().value())>::type;
            field_byteCount().value() = static_cast<LenValueType>(realLength);
            return true;
        }
        
        return false;
    }
    
};

} // namespace message

} // namespace ublox


