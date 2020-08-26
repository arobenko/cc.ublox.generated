// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"CFG-TXSLOT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/CfgTxslotCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgTxslot.
/// @tparam TOpt Extra options
/// @see @ref CfgTxslot
/// @headerfile "ublox/message/CfgTxslot.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTxslotFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTxslotFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"enable"</b> field.
    class Enable : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xE0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xE0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_DDC, @b getBitValue_DDC() and @b setBitValue_DDC().
        ///      @li @b BitIdx_UART1, @b getBitValue_UART1() and @b setBitValue_UART1().
        ///      @li @b BitIdx_UART2, @b getBitValue_UART2() and @b setBitValue_UART2().
        ///      @li @b BitIdx_USB, @b getBitValue_USB() and @b setBitValue_USB().
        ///      @li @b BitIdx_SPI, @b getBitValue_SPI() and @b setBitValue_SPI().
        COMMS_BITMASK_BITS_SEQ(
            DDC,
            UART1,
            UART2,
            USB,
            SPI
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTxslotFieldsCommon::EnableCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgTxslotFieldsCommon::EnableCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"refTp"</b> field.
    /// @see @ref ublox::message::CfgTxslotFieldsCommon::RefTpVal
    class RefTp : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgTxslotFieldsCommon::RefTpVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgTxslotFieldsCommon::RefTpVal,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTxslotFieldsCommon::RefTpCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgTxslotFieldsCommon::RefTpCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
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
            return ublox::message::CfgTxslotFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref End list.
    struct EndMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgTxslotFieldsCommon::EndMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"end"</b> field.
    struct End : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename EndMembers::Element,
            typename TOpt::message::CfgTxslotFields::End,
            comms::option::def::SequenceFixedSize<3U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTxslotFieldsCommon::EndCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Enable,
        RefTp,
        Reserved1,
        End
    >;
};

/// @brief Definition of <b>"CFG-TXSLOT"</b> message class.
/// @details
///     See @ref CfgTxslotFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTxslot.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTxslot : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgTxslot,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTxslot>,
        comms::option::def::FieldsImpl<typename CfgTxslotFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTxslot<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgTxslot,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTxslot>,
            comms::option::def::FieldsImpl<typename CfgTxslotFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTxslot<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref CfgTxslotFields::Version field.
    ///     @li @b Field_enable type and @b field_enable() access fuction
    ///         for @ref CfgTxslotFields::Enable field.
    ///     @li @b Field_refTp type and @b field_refTp() access fuction
    ///         for @ref CfgTxslotFields::RefTp field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgTxslotFields::Reserved1 field.
    ///     @li @b Field_end type and @b field_end() access fuction
    ///         for @ref CfgTxslotFields::End field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        enable,
        refTp,
        reserved1,
        end
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgTxslotCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


