// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"LOG-RETRIEVE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/message/LogRetrieveCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref LogRetrieve.
/// @tparam TOpt Extra options
/// @see @ref LogRetrieve
/// @headerfile "ublox/message/LogRetrieve.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogRetrieveFields
{
    /// @brief Definition of <b>"startNumber"</b> field.
    struct StartNumber : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogRetrieveFieldsCommon::StartNumberCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"entryCount"</b> field.
    struct EntryCount : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogRetrieveFieldsCommon::EntryCountCommon::name();
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
            return ublox::message::LogRetrieveFieldsCommon::VersionCommon::name();
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
            return ublox::message::LogRetrieveFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        StartNumber,
        EntryCount,
        Version,
        Reserved1
    >;
};

/// @brief Definition of <b>"LOG-RETRIEVE"</b> message class.
/// @details
///     See @ref LogRetrieveFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogRetrieve.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogRetrieve : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogRetrieve,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrieve>,
        comms::option::def::FieldsImpl<typename LogRetrieveFields<TOpt>::All>,
        comms::option::def::MsgType<LogRetrieve<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogRetrieve,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogRetrieve>,
            comms::option::def::FieldsImpl<typename LogRetrieveFields<TOpt>::All>,
            comms::option::def::MsgType<LogRetrieve<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_startNumber type and @b field_startNumber() access fuction
    ///         for @ref LogRetrieveFields::StartNumber field.
    ///     @li @b Field_entryCount type and @b field_entryCount() access fuction
    ///         for @ref LogRetrieveFields::EntryCount field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref LogRetrieveFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref LogRetrieveFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        startNumber,
        entryCount,
        version,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::LogRetrieveCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


