// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"cfgPrtFlags"</b> field.

#pragma once

#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "ublox/field/CfgPrtFlagsCommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"cfgPrtFlags"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPrtFlags : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<2U>,
        comms::option::def::BitmaskReservedBits<0xFFFDU, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFFDU, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_extendedTxTimeout.
    COMMS_BITMASK_BITS(
        extendedTxTimeout=1
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_extendedTxTimeout() and @b setBitValue_extendedTxTimeout().
    COMMS_BITMASK_BITS_ACCESS(
        extendedTxTimeout
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgPrtFlagsCommon::name();
    }
    
    /// @brief Retrieve name of the bit.
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgPrtFlagsCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


