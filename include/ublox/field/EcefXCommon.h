// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::EcefX field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::EcefX field.
struct EcefXCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::EcefX field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::EcefX field.
    static const char* name()
    {
        return "ecefX";
    }
    
};

} // namespace field

} // namespace ublox


