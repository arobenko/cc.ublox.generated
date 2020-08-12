// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::EcefHP field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::EcefHP field.
struct EcefHPCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::EcefHP field.
    using ValueType = std::int8_t;

    /// @brief Name of the @ref ublox::field::EcefHP field.
    static const char* name()
    {
        return "ecefHP";
    }
    
};

} // namespace field

} // namespace ublox


