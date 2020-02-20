// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::HeadingAcc field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::HeadingAcc field.
struct HeadingAccCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::HeadingAcc field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::HeadingAcc field.
    static const char* name()
    {
        return "headingAcc";
    }
    
};

} // namespace field

} // namespace ublox


