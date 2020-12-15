// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNavx5Mask2 field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgNavx5Mask2 field.
struct CfgNavx5Mask2Common
{
    /// @brief Name of the @ref ublox::field::CfgNavx5Mask2 field.
    static const char* name()
    {
        return "mask2";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::CfgNavx5Mask2 field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            "adr",
            "sigAttenComp"
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


