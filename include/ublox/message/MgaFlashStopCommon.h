// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaFlashStop message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaFlashStop message.
/// @see ublox::message::MgaFlashStopFields
struct MgaFlashStopFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashStopFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashStopFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashStopFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashStopFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashStopFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashStopFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaFlashStop message.
/// @see ublox::message::MgaFlashStop
struct MgaFlashStopCommon
{
    /// @brief Name of the @ref ublox::message::MgaFlashStop message.
    static const char* name()
    {
        return "MGA-FLASH-STOP";
    }
    
};

} // namespace message

} // namespace ublox


