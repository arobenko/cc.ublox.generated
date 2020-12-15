// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgValL field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgValL field.
struct CfgValLCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::CfgValL field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref ublox::field::CfgValL field.
    static const char* name()
    {
        return "Val";
    }
    
};

} // namespace field

} // namespace ublox


