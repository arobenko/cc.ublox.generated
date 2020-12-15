// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Res3 field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Res3 field.
struct Res3Common
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Res3 field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::Res3 field.
    static const char* name()
    {
        return "res3";
    }
    
};

} // namespace field

} // namespace ublox


