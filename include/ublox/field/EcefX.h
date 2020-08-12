// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"ecefX"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/EcefXCommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"ecefX"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct EcefX : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::UnitsCentimeters
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::EcefXCommon::name();
    }
    
};

} // namespace field

} // namespace ublox


