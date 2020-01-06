// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPm message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPm message.
/// @see ublox::message::CfgPmFields
struct CfgPmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::Res1 field.
    using Res1Common = ublox::field::Res1Common;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::Res2 field.
    struct Res2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPmFields::Res2 field.
        static const char* name()
        {
            return "res2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::Res3 field.
    struct Res3Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPmFields::Res3 field.
        static const char* name()
        {
            return "res3";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgPmFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPmFields::FlagsMembers::Res1 field.
        struct Res1Common
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPmFields::FlagsMembers::Res1 field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPmFields::FlagsMembers::Res1 field.
            static const char* name()
            {
                return "res1";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPmFields::FlagsMembers::Internal field.
        struct InternalCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPmFields::FlagsMembers::Internal field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPmFields::FlagsMembers::Internal field.
            static const char* name()
            {
                return "internal";
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgPmFields::FlagsMembers::BitsMid field.
        struct BitsMidCommon
        {
            /// @brief Name of the @ref ublox::message::CfgPmFields::FlagsMembers::BitsMid field.
            static const char* name()
            {
                return "bitsMid";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgPmFields::FlagsMembers::BitsMid field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "extintSelect",
                    "extintWake",
                    "extintBackup"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPmFields::FlagsMembers::LimitPeakCurr field.
        struct LimitPeakCurrCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgPmFields::FlagsMembers::LimitPeakCurr field.
            enum class ValueType : std::uint8_t
            {
                Disabled = 0, ///< value @b Disabled
                Enabled = 1, ///< value @b Enabled
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 1, ///< Last defined value.
                ValuesLimit = 2, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgPmFields::FlagsMembers::LimitPeakCurr field.
            static const char* name()
            {
                return "limitPeakCurr";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Disabled",
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
        ///     @ref ublox::message::CfgPmFields::FlagsMembers::LimitPeakCurr field.
        using LimitPeakCurrVal = LimitPeakCurrCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgPmFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Name of the @ref ublox::message::CfgPmFields::FlagsMembers::BitsHigh field.
            static const char* name()
            {
                return "bitsHigh";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgPmFields::FlagsMembers::BitsHigh field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "WaitTimeFix",
                    "updateRTC",
                    "updateEPH"
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
    ///     @ref ublox::message::CfgPmFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPmFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::UpdatePeriod field.
    struct UpdatePeriodCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmFields::UpdatePeriod field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmFields::UpdatePeriod field.
        static const char* name()
        {
            return "updatePeriod";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::SearchPeriod field.
    struct SearchPeriodCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmFields::SearchPeriod field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmFields::SearchPeriod field.
        static const char* name()
        {
            return "searchPeriod";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::GridOffset field.
    struct GridOffsetCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmFields::GridOffset field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmFields::GridOffset field.
        static const char* name()
        {
            return "gridOffset";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::OnTime field.
    struct OnTimeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmFields::OnTime field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmFields::OnTime field.
        static const char* name()
        {
            return "onTime";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPmFields::MinAcqTime field.
    struct MinAcqTimeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPmFields::MinAcqTime field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgPmFields::MinAcqTime field.
        static const char* name()
        {
            return "minAcqTime";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPm message.
/// @see ublox::message::CfgPm
struct CfgPmCommon
{
    /// @brief Name of the @ref ublox::message::CfgPm message.
    static const char* name()
    {
        return "CFG-PM";
    }
    
};

} // namespace message

} // namespace ublox

