// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimTos message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/DayCommon.h"
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimTos message.
/// @see ublox::message::TimTosFields
struct TimTosFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::GnssId field.
    using GnssIdCommon = ublox::field::GnssIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::TimTosFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTosFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Name of the @ref ublox::message::TimTosFields::FlagsMembers::BitsLow field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::TimTosFields::FlagsMembers::BitsLow field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "leapNow",
                    "leapSoon",
                    "leapPositive",
                    "timeInLimit",
                    "intOscInLimit",
                    "extOscInLimit",
                    "gnssTimeValid",
                    "UTCTimeValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
        struct DiscSrcCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
            enum class ValueType : std::uint8_t
            {
                Internal = 0, ///< value @b Internal.
                GNSS = 1, ///< value @b GNSS.
                EXTINT0 = 2, ///< value @b EXTINT0.
                EXTINT1 = 3, ///< value @b EXTINT1.
                HostInternal = 4, ///< value @b HostInternal.
                HostExternal = 5, ///< value @b HostExternal.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 5, ///< Last defined value.
                ValuesLimit = 6, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
            static const char* name()
            {
                return "DiscSrc";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Internal",
                    "GNSS",
                    "EXTINT0",
                    "EXTINT1",
                    "HostInternal",
                    "HostExternal"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
        using DiscSrcVal = DiscSrcCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Name of the @ref ublox::message::TimTosFields::FlagsMembers::BitsHigh field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::TimTosFields::FlagsMembers::BitsHigh field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "raim",
                    "cohPulse",
                    "lockedPulse"
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
    ///     @ref ublox::message::TimTosFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::TimTosFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Min field.
    using MinCommon = ublox::field::MinCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Sec field.
    using SecCommon = ublox::field::SecCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::UtcStandard field.
    struct UtcStandardCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTosFields::UtcStandard field.
        enum class ValueType : std::uint8_t
        {
            Unknown = 0, ///< value @b Unknown.
            USNO = 3, ///< value @b USNO.
            SU = 6, ///< value @b SU.
            NTSC = 7, ///< value @b NTSC.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 7, ///< Last defined value.
            ValuesLimit = 8, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::TimTosFields::UtcStandard field.
        static const char* name()
        {
            return "utcStandard";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Unknown",
                nullptr,
                nullptr,
                "USNO",
                nullptr,
                nullptr,
                "SU",
                "NTSC"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimTosFields::UtcStandard field.
    using UtcStandardVal = UtcStandardCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::UtcOffset field.
    struct UtcOffsetCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::UtcOffset field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::UtcOffset field.
        static const char* name()
        {
            return "utcOffset";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::UtcUncertainty field.
    struct UtcUncertaintyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::UtcUncertainty field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::UtcUncertainty field.
        static const char* name()
        {
            return "utcUncertainty";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::Week field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::TOW field.
    struct TOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::TOW field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::TOW field.
        static const char* name()
        {
            return "TOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::GnssOffset field.
    struct GnssOffsetCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::GnssOffset field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::GnssOffset field.
        static const char* name()
        {
            return "gnssOffset";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::GnssUncertainy field.
    struct GnssUncertainyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::GnssUncertainy field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::GnssUncertainy field.
        static const char* name()
        {
            return "gnssUncertainy";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::IntOscOffset field.
    struct IntOscOffsetCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::IntOscOffset field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::IntOscOffset field.
        static const char* name()
        {
            return "intOscOffset";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::IntOscUncertainty field.
    struct IntOscUncertaintyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::IntOscUncertainty field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::IntOscUncertainty field.
        static const char* name()
        {
            return "intOscUncertainty";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::ExtOscOffset field.
    struct ExtOscOffsetCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::ExtOscOffset field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::ExtOscOffset field.
        static const char* name()
        {
            return "extOscOffset";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTosFields::ExtOscUncertainty field.
    struct ExtOscUncertaintyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTosFields::ExtOscUncertainty field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTosFields::ExtOscUncertainty field.
        static const char* name()
        {
            return "extOscUncertainty";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimTos message.
/// @see ublox::message::TimTos
struct TimTosCommon
{
    /// @brief Name of the @ref ublox::message::TimTos message.
    static const char* name()
    {
        return "TIM-TOS";
    }
    
};

} // namespace message

} // namespace ublox


