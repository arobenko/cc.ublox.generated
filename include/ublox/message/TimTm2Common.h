// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimTm2 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimTm2 message.
/// @see ublox::message::TimTm2Fields
struct TimTm2FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::Ch field.
    struct ChCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::Ch field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::Ch field.
        static const char* name()
        {
            return "ch";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTm2Fields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Name of the @ref ublox::message::TimTm2Fields::FlagsMembers::BitsLow field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::TimTm2Fields::FlagsMembers::BitsLow field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "mode",
                    "run",
                    "newFallingEdge"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
        struct TimeBaseCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
            enum class ValueType : std::uint8_t
            {
                Receiver = 0, ///< value @b Receiver.
                GNSS = 1, ///< value @b GNSS.
                UTC = 2, ///< value @b UTC.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
            static const char* name()
            {
                return "timeBase";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Receiver",
                    "GNSS",
                    "UTC"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
        using TimeBaseVal = TimeBaseCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Name of the @ref ublox::message::TimTm2Fields::FlagsMembers::BitsHigh field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::TimTm2Fields::FlagsMembers::BitsHigh field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "utc",
                    "time",
                    "newRisingEdge"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::TimTm2Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::TimTm2Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::Count field.
    struct CountCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::Count field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::Count field.
        static const char* name()
        {
            return "count";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::WnR field.
    struct WnRCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::WnR field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::WnR field.
        static const char* name()
        {
            return "wnR";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::WnF field.
    struct WnFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::WnF field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::WnF field.
        static const char* name()
        {
            return "wnF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::TowMsR field.
    struct TowMsRCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::TowMsR field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::TowMsR field.
        static const char* name()
        {
            return "towMsR";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::TowSubMsR field.
    struct TowSubMsRCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::TowSubMsR field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::TowSubMsR field.
        static const char* name()
        {
            return "towSubMsR";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::TowMsF field.
    struct TowMsFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::TowMsF field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::TowMsF field.
        static const char* name()
        {
            return "towMsF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::TowSubMsF field.
    struct TowSubMsFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::TowSubMsF field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::TowSubMsF field.
        static const char* name()
        {
            return "towSubMsF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTm2Fields::AccEst field.
    struct AccEstCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTm2Fields::AccEst field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTm2Fields::AccEst field.
        static const char* name()
        {
            return "accEst";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimTm2 message.
/// @see ublox::message::TimTm2
struct TimTm2Common
{
    /// @brief Name of the @ref ublox::message::TimTm2 message.
    static const char* name()
    {
        return "TIM-TM2";
    }
    
};

} // namespace message

} // namespace ublox


