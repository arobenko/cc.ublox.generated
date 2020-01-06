// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgPrtFlags field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgPrtFlags field.
struct CfgPrtFlagsCommon
{
    /// @brief Name of the @ref ublox::field::CfgPrtFlags field.
    static const char* name()
    {
        return "cfgPrtFlags";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::CfgPrtFlags field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            nullptr,
            "extendedTxTimeout"
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

