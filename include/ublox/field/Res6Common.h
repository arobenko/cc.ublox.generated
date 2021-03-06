// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Res6 field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Res6 field.
struct Res6Common
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Res6 field.
    using ValueType = std::uint64_t;

    /// @brief Name of the @ref ublox::field::Res6 field.
    static const char* name()
    {
        return "res6";
    }
    
};

} // namespace field

} // namespace ublox


