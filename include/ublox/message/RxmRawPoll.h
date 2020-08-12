// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"RXM-RAW (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/message/RxmRawPollCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmRawPoll.
/// @tparam TOpt Extra options
/// @see @ref RxmRawPoll
/// @headerfile "ublox/message/RxmRawPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRawPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"RXM-RAW (Poll)"</b> message class.
/// @details
///     See @ref RxmRawPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRawPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRawPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRawPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRaw>,
        comms::option::def::FieldsImpl<typename RxmRawPollFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRawPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRawPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRaw>,
            comms::option::def::FieldsImpl<typename RxmRawPollFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRawPoll<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::RxmRawPollCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


