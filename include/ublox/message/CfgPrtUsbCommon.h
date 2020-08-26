// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPrtUsb message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/CfgPrtFlagsCommon.h"
#include "ublox/field/CfgPrtInProtoMaskCommon.h"
#include "ublox/field/CfgPrtOutProtoMaskCommon.h"
#include "ublox/field/CfgPrtTxReadyCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res8Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPrtUsb message.
/// @see ublox::message::CfgPrtUsbFields
struct CfgPrtUsbFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::PortId field.
    struct PortIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPrtUsbFields::PortId field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::PortId field.
        static const char* name()
        {
            return "portId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for members of
    ///     @ref ublox::message::CfgPrtUsbFields::TxReady field.
    using TxReadyMembersCommon = ublox::field::CfgPrtTxReadyMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::TxReady field.
    struct TxReadyCommon : public ublox::field::CfgPrtTxReadyCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::TxReady field.
        static const char* name()
        {
            return "txReady";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res8Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::InProtoMask field.
    struct InProtoMaskCommon : public ublox::field::CfgPrtInProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::InProtoMask field.
        static const char* name()
        {
            return "inProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::OutProtoMask field.
    struct OutProtoMaskCommon : public ublox::field::CfgPrtOutProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::OutProtoMask field.
        static const char* name()
        {
            return "outProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::CfgPrtFlags field.
    using CfgPrtFlagsCommon = ublox::field::CfgPrtFlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUsbFields::Reserved4 field.
    struct Reserved4Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUsbFields::Reserved4 field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPrtUsb message.
/// @see ublox::message::CfgPrtUsb
struct CfgPrtUsbCommon
{
    /// @brief Name of the @ref ublox::message::CfgPrtUsb message.
    static const char* name()
    {
        return "CFG-PRT (USB)";
    }
    
};

} // namespace message

} // namespace ublox


