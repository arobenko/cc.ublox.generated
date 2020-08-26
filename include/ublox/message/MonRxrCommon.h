// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonRxr message and its fields.

#pragma once

#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonRxr message.
/// @see ublox::message::MonRxrFields
struct MonRxrFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::MonRxrFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::MonRxrFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonRxrFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "awake"
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
///     @ref ublox::message::MonRxr message.
/// @see ublox::message::MonRxr
struct MonRxrCommon
{
    /// @brief Name of the @ref ublox::message::MonRxr message.
    static const char* name()
    {
        return "MON-RXR";
    }
    
};

} // namespace message

} // namespace ublox


