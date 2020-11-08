// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgNvs message and its fields.

#pragma once

#include <type_traits>
#include "ublox/field/CfgNvsMaskCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgNvs message.
/// @see ublox::message::CfgNvsFields
struct CfgNvsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNvsFields::ClearMask field.
    struct ClearMaskCommon : public ublox::field::CfgNvsMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNvsFields::ClearMask field.
        static const char* name()
        {
            return "clearMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNvsFields::SaveMask field.
    struct SaveMaskCommon : public ublox::field::CfgNvsMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNvsFields::SaveMask field.
        static const char* name()
        {
            return "saveMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNvsFields::LoadMask field.
    struct LoadMaskCommon : public ublox::field::CfgNvsMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNvsFields::LoadMask field.
        static const char* name()
        {
            return "loadMask";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgNvsFields::DeviceMask field.
    struct DeviceMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNvsFields::DeviceMask field.
        static const char* name()
        {
            return "deviceMask";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgNvsFields::DeviceMask field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "devBBR",
                "devFlash",
                "devEEPROM",
                nullptr,
                "devSpiFlash"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgNvs message.
/// @see ublox::message::CfgNvs
struct CfgNvsCommon
{
    /// @brief Name of the @ref ublox::message::CfgNvs message.
    static const char* name()
    {
        return "CFG-NVS";
    }
    
};

} // namespace message

} // namespace ublox


