// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"CFG-PRT (SPI)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgPrtFlags.h"
#include "ublox/field/CfgPrtInProtoMask.h"
#include "ublox/field/CfgPrtOutProtoMask.h"
#include "ublox/field/CfgPrtTxReady.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/CfgPrtSpiCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPrtSpi.
/// @tparam TOpt Extra options
/// @see @ref CfgPrtSpi
/// @headerfile "ublox/message/CfgPrtSpi.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtSpiFields
{
    /// @brief Definition of <b>"portId"</b> field.
    struct PortId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<4>,
            comms::option::def::ValidNumValue<4>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::PortIdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"txReady"</b> field.
    struct TxReady : public
        ublox::field::CfgPrtTxReady<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::TxReadyCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Mode bitfield.
    struct ModeMembers
    {
        /// @brief Definition of <b>"reservedLow"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct ReservedLow : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<1U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::ReservedLowCommon::name();
            }
            
        };
        
        /// @brief Definition of <b>"spiMode"</b> field.
        /// @see @ref ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::SpiModeVal
        class SpiMode : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::SpiModeVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::SpiModeVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::SpiModeCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::SpiModeCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<5U>,
                comms::option::def::BitmaskReservedBits<0x17U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<5U>,
                    comms::option::def::BitmaskReservedBits<0x17U, 0x0U>
                >;
        public:
            /// @brief Provide names for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values:
            ///      @li @b BitIdx_flowControl.
            COMMS_BITMASK_BITS(
                flowControl=3
            );
            
            /// @brief Generates independent access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///      @li @b getBitValue_flowControl() and @b setBitValue_flowControl().
            COMMS_BITMASK_BITS_ACCESS(
                flowControl
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::BitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"ffCnt"</b> field.
        struct FfCnt : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<6U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::FfCntCommon::name();
            }
            
        };
        
        /// @brief Definition of <b>"reservedHigh"</b> field.
        /// @details
        ///     Reserved field with 3 bytes length
        struct ReservedHigh : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::FixedBitLength<18U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtSpiFieldsCommon::ModeMembersCommon::ReservedHighCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               ReservedLow,
               SpiMode,
               Bits,
               FfCnt,
               ReservedHigh
            >;
    };
    
    /// @brief Definition of <b>"mode"</b> field.
    class Mode : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ModeMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ModeMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_reservedLow type and @b field_reservedLow() access function -
        ///         for ModeMembers::ReservedLow member field.
        ///     @li @b Field_spiMode type and @b field_spiMode() access function -
        ///         for ModeMembers::SpiMode member field.
        ///     @li @b Field_bits type and @b field_bits() access function -
        ///         for ModeMembers::Bits member field.
        ///     @li @b Field_ffCnt type and @b field_ffCnt() access function -
        ///         for ModeMembers::FfCnt member field.
        ///     @li @b Field_reservedHigh type and @b field_reservedHigh() access function -
        ///         for ModeMembers::ReservedHigh member field.
        COMMS_FIELD_MEMBERS_NAMES(
            reservedLow,
            spiMode,
            bits,
            ffCnt,
            reservedHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::ModeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"inProtoMask"</b> field.
    struct InProtoMask : public
        ublox::field::CfgPrtInProtoMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::InProtoMaskCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"outProtoMask"</b> field.
    struct OutProtoMask : public
        ublox::field::CfgPrtOutProtoMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::OutProtoMaskCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"cfgPrtFlags"</b> field.
    using CfgPrtFlags =
        ublox::field::CfgPrtFlags<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtSpiFieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PortId,
        Reserved1,
        TxReady,
        Mode,
        Reserved2,
        InProtoMask,
        OutProtoMask,
        CfgPrtFlags,
        Reserved3
    >;
};

/// @brief Definition of <b>"CFG-PRT (SPI)"</b> message class.
/// @details
///     See @ref CfgPrtSpiFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPrtSpi.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPrtSpi : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
        comms::option::def::FieldsImpl<typename CfgPrtSpiFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPrtSpi<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
            comms::option::def::FieldsImpl<typename CfgPrtSpiFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPrtSpi<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_portId type and @b field_portId() access fuction
    ///         for @ref CfgPrtSpiFields::PortId field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgPrtSpiFields::Reserved1 field.
    ///     @li @b Field_txReady type and @b field_txReady() access fuction
    ///         for @ref CfgPrtSpiFields::TxReady field.
    ///     @li @b Field_mode type and @b field_mode() access fuction
    ///         for @ref CfgPrtSpiFields::Mode field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref CfgPrtSpiFields::Reserved2 field.
    ///     @li @b Field_inProtoMask type and @b field_inProtoMask() access fuction
    ///         for @ref CfgPrtSpiFields::InProtoMask field.
    ///     @li @b Field_outProtoMask type and @b field_outProtoMask() access fuction
    ///         for @ref CfgPrtSpiFields::OutProtoMask field.
    ///     @li @b Field_cfgPrtFlags type and @b field_cfgPrtFlags() access fuction
    ///         for @ref CfgPrtSpiFields::CfgPrtFlags field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref CfgPrtSpiFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        portId,
        reserved1,
        txReady,
        mode,
        reserved2,
        inProtoMask,
        outProtoMask,
        cfgPrtFlags,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgPrtSpiCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


