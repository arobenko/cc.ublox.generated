// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Day field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Day field.
struct DayCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Day field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref ublox::field::Day field.
    static const char* name()
    {
        return "day";
    }
    
};

} // namespace field

} // namespace ublox


