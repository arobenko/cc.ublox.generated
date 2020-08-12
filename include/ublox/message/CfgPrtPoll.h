// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"CFG-PRT (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/message/CfgPrtPollCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPrtPoll.
/// @tparam TOpt Extra options
/// @see @ref CfgPrtPoll
/// @headerfile "ublox/message/CfgPrtPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"CFG-PRT (Poll)"</b> message class.
/// @details
///     See @ref CfgPrtPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPrtPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPrtPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgPrtPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
        comms::option::def::FieldsImpl<typename CfgPrtPollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPrtPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgPrtPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
            comms::option::def::FieldsImpl<typename CfgPrtPollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPrtPoll<TMsgBase, TOpt> >,
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
        return ublox::message::CfgPrtPollCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


