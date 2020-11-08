// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgCfgMask field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgCfgMask field.
struct CfgCfgMaskCommon
{
    /// @brief Name of the @ref ublox::field::CfgCfgMask field.
    static const char* name()
    {
        return "cfgCfgMask";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::CfgCfgMask field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "ioPort",
            "msgConf",
            "infMsg",
            "navConf",
            "rxmConf",
            nullptr,
            nullptr,
            nullptr,
            "senConf",
            "rinvConf",
            "antConf",
            "logConf",
            "ftsConf"
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


