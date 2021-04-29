// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"res5"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res5Common.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"res5"</b> field.
/// @details
///     Reserved field with 5 bytes length
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Res5 : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint64_t,
        TExtraOpts...,
        comms::option::def::FixedLength<5U>,
        comms::option::def::ValidNumValue<0>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::Res5Common::name();
    }
    
};

} // namespace field

} // namespace ublox


