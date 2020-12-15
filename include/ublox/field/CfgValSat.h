// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"Val"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/CfgValSatCommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"Val"</b> field.
/// @see @ref ublox::field::CfgValSatVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgValSat : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        ublox::field::CfgValSatVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 4>
    >
{
    using Base = 
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::field::CfgValSatVal,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 4>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgValSatCommon::name();
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        return ublox::field::CfgValSatCommon::valueName(val);
    }
    
    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }
    
};

} // namespace field

} // namespace ublox


