// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgDatFlat field.

#pragma once

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgDatFlat field.
struct CfgDatFlatCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::CfgDatFlat field.
    using ValueType = double;

    /// @brief Name of the @ref ublox::field::CfgDatFlat field.
    static const char* name()
    {
        return "cfgDatFlat";
    }
    
};

} // namespace field

} // namespace ublox


