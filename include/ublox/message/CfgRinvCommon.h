// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgRinv message and its fields.

#pragma once

#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgRinv message.
/// @see ublox::message::CfgRinvFields
struct CfgRinvFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgRinvFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgRinvFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgRinvFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "dump",
                "binary"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgRinvFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::CfgRinvFields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgRinv message.
/// @see ublox::message::CfgRinv
struct CfgRinvCommon
{
    /// @brief Name of the @ref ublox::message::CfgRinv message.
    static const char* name()
    {
        return "CFG-RINV";
    }
    
};

} // namespace message

} // namespace ublox


