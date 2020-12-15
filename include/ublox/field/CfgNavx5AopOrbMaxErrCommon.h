// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNavx5AopOrbMaxErr field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgNavx5AopOrbMaxErr field.
struct CfgNavx5AopOrbMaxErrCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::CfgNavx5AopOrbMaxErr field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref ublox::field::CfgNavx5AopOrbMaxErr field.
    static const char* name()
    {
        return "aopOrbMaxErr";
    }
    
    /// @brief Special value <b>"Reset"</b>.
    static constexpr ValueType valueReset()
    {
        return static_cast<ValueType>(0);
    }
    
    
    
};

} // namespace field

} // namespace ublox


