// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::EcefVZ field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::EcefVZ field.
struct EcefVZCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::EcefVZ field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::EcefVZ field.
    static const char* name()
    {
        return "ecefVZ";
    }
    
};

} // namespace field

} // namespace ublox


