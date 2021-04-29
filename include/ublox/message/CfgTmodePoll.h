// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"CFG-TMODE (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/message/CfgTmodePollCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgTmodePoll.
/// @tparam TOpt Extra options
/// @see @ref CfgTmodePoll
/// @headerfile "ublox/message/CfgTmodePoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTmodePollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"CFG-TMODE (Poll)"</b> message class.
/// @details
///     See @ref CfgTmodePollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTmodePoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTmodePoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgTmodePoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode>,
        comms::option::def::FieldsImpl<typename CfgTmodePollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmodePoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgTmodePoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode>,
            comms::option::def::FieldsImpl<typename CfgTmodePollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmodePoll<TMsgBase, TOpt> >,
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
        return ublox::message::CfgTmodePollCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


