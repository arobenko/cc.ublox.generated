// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"MON-HW3 (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/message/MonHw3PollCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonHw3Poll.
/// @tparam TOpt Extra options
/// @see @ref MonHw3Poll
/// @headerfile "ublox/message/MonHw3Poll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonHw3PollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"MON-HW3 (Poll)"</b> message class.
/// @details
///     See @ref MonHw3PollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonHw3Poll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonHw3Poll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonHw3Poll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw3>,
        comms::option::def::FieldsImpl<typename MonHw3PollFields<TOpt>::All>,
        comms::option::def::MsgType<MonHw3Poll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonHw3Poll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw3>,
            comms::option::def::FieldsImpl<typename MonHw3PollFields<TOpt>::All>,
            comms::option::def::MsgType<MonHw3Poll<TMsgBase, TOpt> >,
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
        return ublox::message::MonHw3PollCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


