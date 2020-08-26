// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::PAcc field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::PAcc field.
struct PAccCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::PAcc field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::PAcc field.
    static const char* name()
    {
        return "pAcc";
    }
    
};

} // namespace field

} // namespace ublox


