// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::EcefVX field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::EcefVX field.
struct EcefVXCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::EcefVX field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::EcefVX field.
    static const char* name()
    {
        return "ecefVX";
    }
    
};

} // namespace field

} // namespace ublox


