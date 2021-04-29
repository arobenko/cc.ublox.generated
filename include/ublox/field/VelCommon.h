// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Vel field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Vel field.
struct VelCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Vel field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::Vel field.
    static const char* name()
    {
        return "vel";
    }
    
};

} // namespace field

} // namespace ublox


