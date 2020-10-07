// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>""</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MonMsgppCountCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>""</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct MonMsgppCount : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::MonMsgppCountCommon::name();
    }
    
};

} // namespace field

} // namespace ublox


