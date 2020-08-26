// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"headingAcc"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/HeadingAccCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"headingAcc"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct HeadingAcc : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint32_t,
        TExtraOpts...,
        comms::option::def::ScalingRatio<1, 100000L>,
        comms::option::def::UnitsDegrees
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::HeadingAccCommon::name();
    }
    
};

} // namespace field

} // namespace ublox


