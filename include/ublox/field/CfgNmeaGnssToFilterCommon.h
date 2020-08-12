// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNmeaGnssToFilter field.

#pragma once

#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgNmeaGnssToFilter field.
struct CfgNmeaGnssToFilterCommon
{
    /// @brief Name of the @ref ublox::field::CfgNmeaGnssToFilter field.
    static const char* name()
    {
        return "cfgNmeaGnssToFilter";
    }
    
    /// @brief Retrieve name of the bit of
    ///     @ref ublox::field::CfgNmeaGnssToFilter field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "gps",
            "sbas",
            nullptr,
            nullptr,
            "qzss",
            "glonass",
            "beidou"
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


