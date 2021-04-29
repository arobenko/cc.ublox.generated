// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"CFG-NVS"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgNvsMask.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/CfgNvsCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNvs.
/// @tparam TOpt Extra options
/// @see @ref CfgNvs
/// @headerfile "ublox/message/CfgNvs.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNvsFields
{
    /// @brief Definition of <b>"clearMask"</b> field.
    struct ClearMask : public
        ublox::field::CfgNvsMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNvsFieldsCommon::ClearMaskCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"saveMask"</b> field.
    struct SaveMask : public
        ublox::field::CfgNvsMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNvsFieldsCommon::SaveMaskCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"loadMask"</b> field.
    struct LoadMask : public
        ublox::field::CfgNvsMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNvsFieldsCommon::LoadMaskCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deviceMask"</b> field.
    class DeviceMask : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xE8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xE8U, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_devBBR.
        ///      @li @b BitIdx_devFlash.
        ///      @li @b BitIdx_devEEPROM.
        ///      @li @b BitIdx_devSpiFlash.
        COMMS_BITMASK_BITS(
            devBBR=0,
            devFlash=1,
            devEEPROM=2,
            devSpiFlash=4
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_devBBR() and @b setBitValue_devBBR().
        ///      @li @b getBitValue_devFlash() and @b setBitValue_devFlash().
        ///      @li @b getBitValue_devEEPROM() and @b setBitValue_devEEPROM().
        ///      @li @b getBitValue_devSpiFlash() and @b setBitValue_devSpiFlash().
        COMMS_BITMASK_BITS_ACCESS(
            devBBR,
            devFlash,
            devEEPROM,
            devSpiFlash
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNvsFieldsCommon::DeviceMaskCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgNvsFieldsCommon::DeviceMaskCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ClearMask,
        SaveMask,
        LoadMask,
        DeviceMask
    >;
};

/// @brief Definition of <b>"CFG-NVS"</b> message class.
/// @details
///     See @ref CfgNvsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNvs.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNvs : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgNvs,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNvs>,
        comms::option::def::FieldsImpl<typename CfgNvsFields<TOpt>::All>,
        comms::option::def::MsgType<CfgNvs<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgNvs,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNvs>,
            comms::option::def::FieldsImpl<typename CfgNvsFields<TOpt>::All>,
            comms::option::def::MsgType<CfgNvs<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_clearMask type and @b field_clearMask() access fuction
    ///         for @ref CfgNvsFields::ClearMask field.
    ///     @li @b Field_saveMask type and @b field_saveMask() access fuction
    ///         for @ref CfgNvsFields::SaveMask field.
    ///     @li @b Field_loadMask type and @b field_loadMask() access fuction
    ///         for @ref CfgNvsFields::LoadMask field.
    ///     @li @b Field_deviceMask type and @b field_deviceMask() access fuction
    ///         for @ref CfgNvsFields::DeviceMask field.
    COMMS_MSG_FIELDS_NAMES(
        clearMask,
        saveMask,
        loadMask,
        deviceMask
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 13U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 13U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgNvsCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


