// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Min field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Min field.
struct MinCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Min field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref ublox::field::Min field.
    static const char* name()
    {
        return "min";
    }
    
};

} // namespace field

} // namespace ublox


