// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::VAcc field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::VAcc field.
struct VAccCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::VAcc field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::VAcc field.
    static const char* name()
    {
        return "vAcc";
    }
    
};

} // namespace field

} // namespace ublox


