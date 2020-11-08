// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Height field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Height field.
struct HeightCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Height field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::Height field.
    static const char* name()
    {
        return "height";
    }
    
};

} // namespace field

} // namespace ublox


