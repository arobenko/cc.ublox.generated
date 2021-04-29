// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::HAcc field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::HAcc field.
struct HAccCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::HAcc field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::HAcc field.
    static const char* name()
    {
        return "hAcc";
    }
    
};

} // namespace field

} // namespace ublox


