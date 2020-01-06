// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Ftow field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Ftow field.
struct FtowCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Ftow field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::Ftow field.
    static const char* name()
    {
        return "fTOW";
    }
    
};

} // namespace field

} // namespace ublox

