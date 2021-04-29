// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNmeaFilter field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgNmeaFilter field.
struct CfgNmeaFilterCommon
{
    /// @brief Name of the @ref ublox::field::CfgNmeaFilter field.
    static const char* name()
    {
        return "cfgNmeaFilter";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::CfgNmeaFilter field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "posFilt",
            "mskPosFilt",
            "timeFilt",
            "dateFilt",
            "gpsOnlyFilter",
            "trackFilt"
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


