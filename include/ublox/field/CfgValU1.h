// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"Val"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/CfgValU1Common.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"Val"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgValU1 : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgValU1Common::name();
    }
    
};

} // namespace field

} // namespace ublox


