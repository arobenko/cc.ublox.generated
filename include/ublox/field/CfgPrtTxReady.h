// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"cfgPrtTxReady"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/CfgPrtTxReadyCommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref CfgPrtTxReady bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtTxReadyMembers
{
    /// @brief Definition of <b>""</b> field.
    class Bits : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedBitLength<2U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_en, @b getBitValue_en() and @b setBitValue_en().
        ///      @li @b BitIdx_pol, @b getBitValue_pol() and @b setBitValue_pol().
        COMMS_BITMASK_BITS_SEQ(
            en,
            pol
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::field::CfgPrtTxReadyMembersCommon::BitsCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::field::CfgPrtTxReadyMembersCommon::BitsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"pin"</b> field.
    struct Pin : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FixedBitLength<5U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::field::CfgPrtTxReadyMembersCommon::PinCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"thres"</b> field.
    struct Thres : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::FixedBitLength<9U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::field::CfgPrtTxReadyMembersCommon::ThresCommon::name();
        }
        
    };
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Bits,
           Pin,
           Thres
        >;
};

/// @brief Definition of <b>"cfgPrtTxReady"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPrtTxReady : public
    comms::field::Bitfield<
        ublox::field::FieldBase<>,
        typename CfgPrtTxReadyMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename CfgPrtTxReadyMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///     The generated types and access functions are:
    ///     @li @b Field_bits type and @b field_bits() access function -
    ///         for CfgPrtTxReadyMembers::Bits member field.
    ///     @li @b Field_pin type and @b field_pin() access function -
    ///         for CfgPrtTxReadyMembers::Pin member field.
    ///     @li @b Field_thres type and @b field_thres() access function -
    ///         for CfgPrtTxReadyMembers::Thres member field.
    COMMS_FIELD_MEMBERS_NAMES(
        bits,
        pin,
        thres
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgPrtTxReadyCommon::name();
    }
    
};

} // namespace field

} // namespace ublox


