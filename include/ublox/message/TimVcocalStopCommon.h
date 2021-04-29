// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimVcocalStop message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimVcocalStop message.
/// @see ublox::message::TimVcocalStopFields
struct TimVcocalStopFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalStopFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalStopFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalStopFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimVcocalStop message.
/// @see ublox::message::TimVcocalStop
struct TimVcocalStopCommon
{
    /// @brief Name of the @ref ublox::message::TimVcocalStop message.
    static const char* name()
    {
        return "TIM-VCOCAL (Stop)";
    }
    
};

} // namespace message

} // namespace ublox


