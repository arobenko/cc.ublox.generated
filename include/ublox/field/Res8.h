// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"res8"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res8Common.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"res8"</b> field.
/// @details
///     Reserved field with 8 bytes length
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Res8 : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint64_t,
        TExtraOpts...,
        comms::option::def::ValidNumValue<0>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::Res8Common::name();
    }
    
};

} // namespace field

} // namespace ublox


