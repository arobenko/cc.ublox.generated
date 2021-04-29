// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"ESF-INS (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/message/EsfInsPollCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref EsfInsPoll.
/// @tparam TOpt Extra options
/// @see @ref EsfInsPoll
/// @headerfile "ublox/message/EsfInsPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct EsfInsPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"ESF-INS (Poll)"</b> message class.
/// @details
///     See @ref EsfInsPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/EsfInsPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class EsfInsPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::EsfInsPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfIns>,
        comms::option::def::FieldsImpl<typename EsfInsPollFields<TOpt>::All>,
        comms::option::def::MsgType<EsfInsPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::EsfInsPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfIns>,
            comms::option::def::FieldsImpl<typename EsfInsPollFields<TOpt>::All>,
            comms::option::def::MsgType<EsfInsPoll<TMsgBase, TOpt> >,
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
        return ublox::message::EsfInsPollCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


