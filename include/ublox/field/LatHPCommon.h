// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::LatHP field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::LatHP field.
struct LatHPCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::LatHP field.
    using ValueType = std::int8_t;

    /// @brief Name of the @ref ublox::field::LatHP field.
    static const char* name()
    {
        return "latHP";
    }
    
};

} // namespace field

} // namespace ublox


