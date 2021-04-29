// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPrtSpi message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/CfgPrtFlagsCommon.h"
#include "ublox/field/CfgPrtInProtoMaskCommon.h"
#include "ublox/field/CfgPrtOutProtoMaskCommon.h"
#include "ublox/field/CfgPrtTxReadyCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPrtSpi message.
/// @see ublox::message::CfgPrtSpiFields
struct CfgPrtSpiFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::PortId field.
    struct PortIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPrtSpiFields::PortId field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::PortId field.
        static const char* name()
        {
            return "portId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for members of
    ///     @ref ublox::message::CfgPrtSpiFields::TxReady field.
    using TxReadyMembersCommon = ublox::field::CfgPrtTxReadyMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::TxReady field.
    struct TxReadyCommon : public ublox::field::CfgPrtTxReadyCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::TxReady field.
        static const char* name()
        {
            return "txReady";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgPrtSpiFields::Mode field.
    struct ModeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::ReservedLow field.
        struct ReservedLowCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtSpiFields::ModeMembers::ReservedLow field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::ModeMembers::ReservedLow field.
            static const char* name()
            {
                return "reservedLow";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::SpiMode field.
        struct SpiModeCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::SpiMode field.
            enum class ValueType : std::uint8_t
            {
                Mode0 = 0, ///< value <b>Mode 0: CPOL = 0, CPHA = 0</b>.
                Mode1 = 1, ///< value <b>Mode 1: CPOL = 0, CPHA = 1</b>.
                Mode2 = 2, ///< value <b>Mode 2: CPOL = 1, CPHA = 0</b>.
                Mode3 = 3, ///< value <b>Mode 3: CPOL = 1, CPHA = 1</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::ModeMembers::SpiMode field.
            static const char* name()
            {
                return "spiMode";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Mode 0: CPOL = 0, CPHA = 0",
                    "Mode 1: CPOL = 0, CPHA = 1",
                    "Mode 2: CPOL = 1, CPHA = 0",
                    "Mode 3: CPOL = 1, CPHA = 1"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::SpiMode field.
        using SpiModeVal = SpiModeCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::ModeMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    nullptr,
                    nullptr,
                    nullptr,
                    "flowControl"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::FfCnt field.
        struct FfCntCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtSpiFields::ModeMembers::FfCnt field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::ModeMembers::FfCnt field.
            static const char* name()
            {
                return "ffCnt";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtSpiFields::ModeMembers::ReservedHigh field.
        struct ReservedHighCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtSpiFields::ModeMembers::ReservedHigh field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::ModeMembers::ReservedHigh field.
            static const char* name()
            {
                return "reservedHigh";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgPrtSpiFields::Mode field.
    struct ModeCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::Mode field.
        static const char* name()
        {
            return "mode";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::InProtoMask field.
    struct InProtoMaskCommon : public ublox::field::CfgPrtInProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::InProtoMask field.
        static const char* name()
        {
            return "inProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::OutProtoMask field.
    struct OutProtoMaskCommon : public ublox::field::CfgPrtOutProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::OutProtoMask field.
        static const char* name()
        {
            return "outProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::CfgPrtFlags field.
    using CfgPrtFlagsCommon = ublox::field::CfgPrtFlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtSpiFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtSpiFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPrtSpi message.
/// @see ublox::message::CfgPrtSpi
struct CfgPrtSpiCommon
{
    /// @brief Name of the @ref ublox::message::CfgPrtSpi message.
    static const char* name()
    {
        return "CFG-PRT (SPI)";
    }
    
};

} // namespace message

} // namespace ublox


