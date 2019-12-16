/// @file
/// @brief Contains definition of <b>"RXM-EPH (Poll SV)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmEphPollSv.
/// @tparam TOpt Extra options
/// @see @ref RxmEphPollSv
/// @headerfile "ublox/message/RxmEphPollSv.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmEphPollSvFields
{
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Svid
    >;
};

/// @brief Definition of <b>"RXM-EPH (Poll SV)"</b> message class.
/// @details
///     See @ref RxmEphPollSvFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmEphPollSv.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmEphPollSv : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmEphPollSv,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmEph>,
        comms::option::def::FieldsImpl<typename RxmEphPollSvFields<TOpt>::All>,
        comms::option::def::MsgType<RxmEphPollSv<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmEphPollSv,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmEph>,
            comms::option::def::FieldsImpl<typename RxmEphPollSvFields<TOpt>::All>,
            comms::option::def::MsgType<RxmEphPollSv<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_svid type and @b field_svid() fuction
    ///         for @ref RxmEphPollSvFields::Svid field.
    COMMS_MSG_FIELDS_NAMES(
        svid
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-EPH (Poll SV)";
    }
    
    
};

} // namespace message

} // namespace ublox


