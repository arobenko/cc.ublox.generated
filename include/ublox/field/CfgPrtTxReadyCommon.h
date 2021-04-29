// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgPrtTxReady field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref ublox::field::CfgPrtTxReady field.
struct CfgPrtTxReadyMembersCommon
{
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPrtTxReadyMembers::Bits field.
    struct BitsCommon
    {
        /// @brief Name of the @ref ublox::field::CfgPrtTxReadyMembers::Bits field.
        static const char* name()
        {
            return "";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::field::CfgPrtTxReadyMembers::Bits field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "en",
                "pol"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::field::CfgPrtTxReadyMembers::Pin field.
    struct PinCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::field::CfgPrtTxReadyMembers::Pin field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::field::CfgPrtTxReadyMembers::Pin field.
        static const char* name()
        {
            return "pin";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::field::CfgPrtTxReadyMembers::Thres field.
    struct ThresCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::field::CfgPrtTxReadyMembers::Thres field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::field::CfgPrtTxReadyMembers::Thres field.
        static const char* name()
        {
            return "thres";
        }
        
    };
    
};

/// @brief Scope for all the common definitions of the
///     @ref ublox::field::CfgPrtTxReady field.
struct CfgPrtTxReadyCommon
{
    /// @brief Name of the @ref ublox::field::CfgPrtTxReady field.
    static const char* name()
    {
        return "cfgPrtTxReady";
    }
    
};


} // namespace field

} // namespace ublox


