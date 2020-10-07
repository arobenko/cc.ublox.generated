// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"lat"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/LatCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"lat"</b> field.
/// @details
///     Latitude
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Lat : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::ScalingRatio<1, 10000000L>,
        comms::option::def::UnitsDegrees
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::LatCommon::name();
    }
    
};

} // namespace field

} // namespace ublox


