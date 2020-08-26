// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgPrtInProtoMask field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgPrtInProtoMask field.
struct CfgPrtInProtoMaskCommon
{
    /// @brief Name of the @ref ublox::field::CfgPrtInProtoMask field.
    static const char* name()
    {
        return "cfgPrtInProtoMask";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::CfgPrtInProtoMask field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "inUbx",
            "inNmea",
            "inRtcm",
            nullptr,
            nullptr,
            "inRtcm3"
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


