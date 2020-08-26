// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"GeofenceState"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GeofenceStateCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"GeofenceState"</b> field.
/// @see @ref ublox::field::GeofenceStateVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class GeofenceState : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        ublox::field::GeofenceStateVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>
    >
{
    using Base = 
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::field::GeofenceStateVal,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 2>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::GeofenceStateCommon::name();
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        return ublox::field::GeofenceStateCommon::valueName(val);
    }
    
    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }
    
};

} // namespace field

} // namespace ublox


