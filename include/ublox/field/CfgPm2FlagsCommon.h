// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgPm2Flags field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref ublox::field::CfgPm2Flags field.
struct CfgPm2FlagsMembersCommon
{
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::BitsLow field.
    struct BitsLowCommon
    {
        /// @brief Name of the @ref ublox::field::CfgPm2FlagsMembers::BitsLow field.
        static const char* name()
        {
            return "";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::field::CfgPm2FlagsMembers::BitsLow field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                "extintSel",
                "extintWake",
                "extintBackup",
                "extintInactive"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
    struct LimitPeakCurrCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
        enum class ValueType : std::uint8_t
        {
            Desabled = 0, ///< value @b Desabled.
            Enabled = 1, ///< value @b Enabled.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
        static const char* name()
        {
            return "limitPeakCurr";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Desabled",
                "Enabled"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
    using LimitPeakCurrVal = LimitPeakCurrCommon::ValueType;
    
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::BitsMid field.
    struct BitsMidCommon
    {
        /// @brief Name of the @ref ublox::field::CfgPm2FlagsMembers::BitsMid field.
        static const char* name()
        {
            return "";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::field::CfgPm2FlagsMembers::BitsMid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "waitTimeFix",
                "updateRTC",
                "updateEPH",
                nullptr,
                nullptr,
                nullptr,
                "doNotEnterOff"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::Mode field.
    struct ModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::field::CfgPm2FlagsMembers::Mode field.
        enum class ValueType : std::uint8_t
        {
            OnOff = 0, ///< value <b>ON/OFF</b>.
            Cyclic = 1, ///< value @b Cyclic.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::field::CfgPm2FlagsMembers::Mode field.
        static const char* name()
        {
            return "mode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "ON/OFF",
                "Cyclic"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgPm2FlagsMembers::Mode field.
    using ModeVal = ModeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::Reserved field.
    struct ReservedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::field::CfgPm2FlagsMembers::Reserved field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::field::CfgPm2FlagsMembers::Reserved field.
        static const char* name()
        {
            return "reserved";
        }
        
    };
    
};

/// @brief Scope for all the common definitions of the
///     @ref ublox::field::CfgPm2Flags field.
struct CfgPm2FlagsCommon
{
    /// @brief Name of the @ref ublox::field::CfgPm2Flags field.
    static const char* name()
    {
        return "flags";
    }
    
};


} // namespace field

} // namespace ublox


