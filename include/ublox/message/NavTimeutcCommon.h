// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavTimeutc message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>
#include "ublox/field/DayCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavTimeutc message.
/// @see ublox::message::NavTimeutcFields
struct NavTimeutcFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::TAcc field.
    struct TAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimeutcFields::TAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavTimeutcFields::TAcc field.
        static const char* name()
        {
            return "tAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Nano field.
    struct NanoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavTimeutcFields::Nano field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavTimeutcFields::Nano field.
        static const char* name()
        {
            return "nano";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Min field.
    using MinCommon = ublox::field::MinCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavTimeutcFields::Sec field.
    using SecCommon = ublox::field::SecCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavTimeutcFields::Valid field.
    struct ValidMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::NavTimeutcFields::ValidMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::NavTimeutcFields::ValidMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "validTOW",
                    "validWKN",
                    "validUTC"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
        struct UtcStandardCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
            enum class ValueType : std::uint8_t
            {
                NotAvailable = 0, ///< value <b>Not Available</b>.
                CRL = 1, ///< value @b CRL
                NIST = 2, ///< value @b NIST
                USNO = 3, ///< value @b USNO
                BIPM = 4, ///< value @b BIPM
                EuLab = 5, ///< value @b EuLab
                SU = 6, ///< value @b SU
                NTSC = 7, ///< value @b NTSC
                Unknown = 15, ///< value @b Unknown
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 15, ///< Last defined value.
                ValuesLimit = 16, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
            static const char* name()
            {
                return "utcStandard";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                using NameInfo = std::pair<ValueType, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(ValueType::NotAvailable, "Not Available"),
                    std::make_pair(ValueType::CRL, "CRL"),
                    std::make_pair(ValueType::NIST, "NIST"),
                    std::make_pair(ValueType::USNO, "USNO"),
                    std::make_pair(ValueType::BIPM, "BIPM"),
                    std::make_pair(ValueType::EuLab, "EuLab"),
                    std::make_pair(ValueType::SU, "SU"),
                    std::make_pair(ValueType::NTSC, "NTSC"),
                    std::make_pair(ValueType::Unknown, "Unknown")
                };
                
                auto iter = std::lower_bound(
                    std::begin(Map), std::end(Map), val,
                    [](const NameInfo& info, ValueType v) -> bool
                    {
                        return info.first < v;
                    });
                
                if ((iter == std::end(Map)) || (iter->first != val)) {
                    return nullptr;
                }
                
                return iter->second;
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
        using UtcStandardVal = UtcStandardCommon::ValueType;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavTimeutcFields::Valid field.
    struct ValidCommon
    {
        /// @brief Name of the @ref ublox::message::NavTimeutcFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavTimeutc message.
/// @see ublox::message::NavTimeutc
struct NavTimeutcCommon
{
    /// @brief Name of the @ref ublox::message::NavTimeutc message.
    static const char* name()
    {
        return "NAV-TIMEUTC";
    }
    
};

} // namespace message

} // namespace ublox

