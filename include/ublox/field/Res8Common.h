// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Res8 field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Res8 field.
struct Res8Common
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Res8 field.
    using ValueType = std::uint64_t;

    /// @brief Name of the @ref ublox::field::Res8 field.
    static const char* name()
    {
        return "res8";
    }
    
};

} // namespace field

} // namespace ublox


