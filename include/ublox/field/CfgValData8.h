// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"Val"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "ublox/field/CfgValData8Common.h"
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
struct CfgValData8 : public
    comms::field::ArrayList<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::CfgValData8,
        comms::option::def::SequenceFixedSize<8U>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgValData8Common::name();
    }
    
};

} // namespace field

} // namespace ublox


