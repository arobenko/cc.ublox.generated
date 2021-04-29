// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"CFG-PRT (UART)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
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
#include "ublox/message/CfgPrtUartCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPrtUart.
/// @tparam TOpt Extra options
/// @see @ref CfgPrtUart
/// @headerfile "ublox/message/CfgPrtUart.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtUartFields
{
    /// @brief Definition of <b>"portId"</b> field.
    struct PortId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtUartFieldsCommon::PortIdCommon::name();
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
            return ublox::message::CfgPrtUartFieldsCommon::Reserved1Common::name();
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
            return ublox::message::CfgPrtUartFieldsCommon::TxReadyCommon::name();
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
                comms::option::def::FixedBitLength<6U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ReservedLowCommon::name();
            }
            
        };
        
        /// @brief Definition of <b>"charLen"</b> field.
        /// @see @ref ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenVal
        class CharLen : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenVal,
                comms::option::def::DefaultNumValue<3>,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenVal,
                    comms::option::def::DefaultNumValue<3>,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"reservedMid"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct ReservedMid : public
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
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ReservedMidCommon::name();
            }
            
        };
        
        /// @brief Definition of <b>"parity"</b> field.
        /// @see @ref ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityVal
        class Parity : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityVal,
                comms::option::def::DefaultNumValue<4>,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 1>,
                comms::option::def::ValidNumValueRange<4, 5>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityVal,
                    comms::option::def::DefaultNumValue<4>,
                    comms::option::def::FixedBitLength<3U>,
                    comms::option::def::ValidNumValueRange<0, 1>,
                    comms::option::def::ValidNumValueRange<4, 5>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"nStopBits"</b> field.
        /// @see @ref ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsVal
        class NStopBits : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
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
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ReservedHighCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               ReservedLow,
               CharLen,
               ReservedMid,
               Parity,
               NStopBits,
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
        ///     @li @b Field_charLen type and @b field_charLen() access function -
        ///         for ModeMembers::CharLen member field.
        ///     @li @b Field_reservedMid type and @b field_reservedMid() access function -
        ///         for ModeMembers::ReservedMid member field.
        ///     @li @b Field_parity type and @b field_parity() access function -
        ///         for ModeMembers::Parity member field.
        ///     @li @b Field_nStopBits type and @b field_nStopBits() access function -
        ///         for ModeMembers::NStopBits member field.
        ///     @li @b Field_reservedHigh type and @b field_reservedHigh() access function -
        ///         for ModeMembers::ReservedHigh member field.
        COMMS_FIELD_MEMBERS_NAMES(
            reservedLow,
            charLen,
            reservedMid,
            parity,
            nStopBits,
            reservedHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtUartFieldsCommon::ModeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"baudRate"</b> field.
    struct BaudRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::DefaultNumValue<115200L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtUartFieldsCommon::BaudRateCommon::name();
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
            return ublox::message::CfgPrtUartFieldsCommon::InProtoMaskCommon::name();
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
            return ublox::message::CfgPrtUartFieldsCommon::OutProtoMaskCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"cfgPrtFlags"</b> field.
    using CfgPrtFlags =
        ublox::field::CfgPrtFlags<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgPrtUartFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PortId,
        Reserved1,
        TxReady,
        Mode,
        BaudRate,
        InProtoMask,
        OutProtoMask,
        CfgPrtFlags,
        Reserved2
    >;
};

/// @brief Definition of <b>"CFG-PRT (UART)"</b> message class.
/// @details
///     See @ref CfgPrtUartFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPrtUart.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPrtUart : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
        comms::option::def::FieldsImpl<typename CfgPrtUartFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPrtUart<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
            comms::option::def::FieldsImpl<typename CfgPrtUartFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPrtUart<TMsgBase, TOpt> >,
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
    ///         for @ref CfgPrtUartFields::PortId field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgPrtUartFields::Reserved1 field.
    ///     @li @b Field_txReady type and @b field_txReady() access fuction
    ///         for @ref CfgPrtUartFields::TxReady field.
    ///     @li @b Field_mode type and @b field_mode() access fuction
    ///         for @ref CfgPrtUartFields::Mode field.
    ///     @li @b Field_baudRate type and @b field_baudRate() access fuction
    ///         for @ref CfgPrtUartFields::BaudRate field.
    ///     @li @b Field_inProtoMask type and @b field_inProtoMask() access fuction
    ///         for @ref CfgPrtUartFields::InProtoMask field.
    ///     @li @b Field_outProtoMask type and @b field_outProtoMask() access fuction
    ///         for @ref CfgPrtUartFields::OutProtoMask field.
    ///     @li @b Field_cfgPrtFlags type and @b field_cfgPrtFlags() access fuction
    ///         for @ref CfgPrtUartFields::CfgPrtFlags field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref CfgPrtUartFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        portId,
        reserved1,
        txReady,
        mode,
        baudRate,
        inProtoMask,
        outProtoMask,
        cfgPrtFlags,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgPrtUartCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


