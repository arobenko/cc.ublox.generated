// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"cfgNmeaVersion"</b> field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/CfgNmeaVersionCommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"cfgNmeaVersion"</b> field.
/// @see @ref ublox::field::CfgNmeaVersionVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNmeaVersion : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        ublox::field::CfgNmeaVersionVal,
        TExtraOpts...,
        comms::option::def::ValidNumValue<33>,
        comms::option::def::ValidNumValue<35>,
        comms::option::def::ValidNumValueRange<64, 65>
    >
{
    using Base = 
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::field::CfgNmeaVersionVal,
            TExtraOpts...,
            comms::option::def::ValidNumValue<33>,
            comms::option::def::ValidNumValue<35>,
            comms::option::def::ValidNumValueRange<64, 65>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgNmeaVersionCommon::name();
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        return ublox::field::CfgNmeaVersionCommon::valueName(val);
    }
    
    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }
    
};

} // namespace field

} // namespace ublox


