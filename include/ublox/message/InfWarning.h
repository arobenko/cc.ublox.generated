// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"INF-WARNING"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/InfWarningCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref InfWarning.
/// @tparam TOpt Extra options
/// @see @ref InfWarning
/// @headerfile "ublox/message/InfWarning.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct InfWarningFields
{
    /// @brief Definition of <b>"str"</b> field.
    struct Str : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::InfWarningFields::Str
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::InfWarningFieldsCommon::StrCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Str
    >;
};

/// @brief Definition of <b>"INF-WARNING"</b> message class.
/// @details
///     See @ref InfWarningFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/InfWarning.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class InfWarning : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::InfWarning,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_InfWarning>,
        comms::option::def::FieldsImpl<typename InfWarningFields<TOpt>::All>,
        comms::option::def::MsgType<InfWarning<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::InfWarning,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_InfWarning>,
            comms::option::def::FieldsImpl<typename InfWarningFields<TOpt>::All>,
            comms::option::def::MsgType<InfWarning<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_str type and @b field_str() access fuction
    ///         for @ref InfWarningFields::Str field.
    COMMS_MSG_FIELDS_NAMES(
        str
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::InfWarningCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


