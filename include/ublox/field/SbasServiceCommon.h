// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::SbasService field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::SbasService field.
struct SbasServiceCommon
{
    /// @brief Name of the @ref ublox::field::SbasService field.
    static const char* name()
    {
        return "sbasService";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::SbasService field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "Ranging",
            "Corrections",
            "Integrity",
            "Testmode"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

} // namespace field

} // namespace ublox


