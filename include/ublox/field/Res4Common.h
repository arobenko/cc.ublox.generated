// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Res4 field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Res4 field.
struct Res4Common
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Res4 field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::Res4 field.
    static const char* name()
    {
        return "res4";
    }
    
};

} // namespace field

} // namespace ublox


