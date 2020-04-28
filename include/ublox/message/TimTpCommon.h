// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimTp message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimTp message.
/// @see ublox::message::TimTpFields
struct TimTpFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTpFields::TowMS field.
    struct TowMSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTpFields::TowMS field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTpFields::TowMS field.
        static const char* name()
        {
            return "towMS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTpFields::TowSubMS field.
    struct TowSubMSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTpFields::TowSubMS field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimTpFields::TowSubMS field.
        static const char* name()
        {
            return "towSubMS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTpFields::QErr field.
    struct QErrCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTpFields::QErr field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimTpFields::QErr field.
        static const char* name()
        {
            return "qErr";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimTpFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimTpFields::Week field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimTpFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTpFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::TimTpFields::FlagsMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::TimTpFields::FlagsMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "timeBase",
                    "utc"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
        struct RaimCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
            enum class ValueType : std::uint8_t
            {
                NotAvailable = 0, ///< value @b NotAvailable
                NotActive = 1, ///< value @b NotActive
                Active = 2, ///< value @b Active
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
            static const char* name()
            {
                return "raim";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "NotAvailable",
                    "NotActive",
                    "Active"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
        using RaimVal = RaimCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Reserved field.
        struct ReservedCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::TimTpFields::FlagsMembers::Reserved field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::TimTpFields::FlagsMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::TimTpFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::TimTpFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTpFields::RefInfo field.
    struct RefInfoMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
        struct TimeRefGnssCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
            enum class ValueType : std::uint8_t
            {
                GPS = 0, ///< value @b GPS
                GLONASS = 1, ///< value @b GLONASS
                BeiDou = 2, ///< value @b BeiDou
                Unknown = 15, ///< value @b Unknown
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 15, ///< Last defined value.
                ValuesLimit = 16, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
            static const char* name()
            {
                return "timeRefGnss";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                using NameInfo = std::pair<ValueType, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(ValueType::GPS, "GPS"),
                    std::make_pair(ValueType::GLONASS, "GLONASS"),
                    std::make_pair(ValueType::BeiDou, "BeiDou"),
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
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
        using TimeRefGnssVal = TimeRefGnssCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
        struct UtcStandardCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
            enum class ValueType : std::uint8_t
            {
                NotAvailable = 0, ///< value @b NotAvailable
                CRL = 1, ///< value @b CRL
                NIST = 2, ///< value @b NIST
                USNO = 3, ///< value @b USNO
                BIMP = 4, ///< value @b BIMP
                EuLab = 5, ///< value @b EuLab
                SU = 6, ///< value @b SU
                Unknown = 15, ///< value @b Unknown
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 15, ///< Last defined value.
                ValuesLimit = 16, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
            static const char* name()
            {
                return "utcStandard";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                using NameInfo = std::pair<ValueType, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(ValueType::NotAvailable, "NotAvailable"),
                    std::make_pair(ValueType::CRL, "CRL"),
                    std::make_pair(ValueType::NIST, "NIST"),
                    std::make_pair(ValueType::USNO, "USNO"),
                    std::make_pair(ValueType::BIMP, "BIMP"),
                    std::make_pair(ValueType::EuLab, "EuLab"),
                    std::make_pair(ValueType::SU, "SU"),
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
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
        using UtcStandardVal = UtcStandardCommon::ValueType;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::TimTpFields::RefInfo field.
    struct RefInfoCommon
    {
        /// @brief Name of the @ref ublox::message::TimTpFields::RefInfo field.
        static const char* name()
        {
            return "refInfo";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimTp message.
/// @see ublox::message::TimTp
struct TimTpCommon
{
    /// @brief Name of the @ref ublox::message::TimTp message.
    static const char* name()
    {
        return "TIM-TP";
    }
    
};

} // namespace message

} // namespace ublox


