// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgTmode2 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgTmode2 message.
/// @see ublox::message::CfgTmode2Fields
struct CfgTmode2FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode2Fields::TimeMode field.
    struct TimeModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTmode2Fields::TimeMode field.
        enum class ValueType : std::uint32_t
        {
            Disabled = 0, ///< value @b Disabled
            SurveyIn = 1, ///< value <b>Survey In</b>.
            FixedMode = 2, ///< value <b>Fixed Mode</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::TimeMode field.
        static const char* name()
        {
            return "timeMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Disabled",
                "Survey In",
                "Fixed Mode"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTmode2Fields::TimeMode field.
    using TimeModeVal = TimeModeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode2Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTmode2Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgTmode2Fields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "lla",
                "altInv"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode2Fields::EcefX field.
    struct EcefXMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode2Fields::EcefXMembers::EcefX field.
        struct EcefXCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTmode2Fields::EcefXMembers::EcefX field.
            using ValueType = std::int32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTmode2Fields::EcefXMembers::EcefX field.
            static const char* name()
            {
                return "ecefX";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode2Fields::EcefX field.
    struct EcefXCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::EcefX field.
        static const char* name()
        {
            return "ecefX";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode2Fields::Lat field.
    struct LatMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode2Fields::LatMembers::Lat field.
        struct LatCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTmode2Fields::LatMembers::Lat field.
            using ValueType = std::int32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTmode2Fields::LatMembers::Lat field.
            static const char* name()
            {
                return "lat";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode2Fields::Lat field.
    struct LatCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::Lat field.
        static const char* name()
        {
            return "lat";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode2Fields::EcefY field.
    struct EcefYMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode2Fields::EcefYMembers::EcefY field.
        struct EcefYCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTmode2Fields::EcefYMembers::EcefY field.
            using ValueType = std::int32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTmode2Fields::EcefYMembers::EcefY field.
            static const char* name()
            {
                return "ecefY";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode2Fields::EcefY field.
    struct EcefYCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::EcefY field.
        static const char* name()
        {
            return "ecefY";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode2Fields::Lon field.
    struct LonMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode2Fields::LonMembers::Lon field.
        struct LonCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTmode2Fields::LonMembers::Lon field.
            using ValueType = std::int32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTmode2Fields::LonMembers::Lon field.
            static const char* name()
            {
                return "lon";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode2Fields::Lon field.
    struct LonCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::Lon field.
        static const char* name()
        {
            return "lon";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode2Fields::EcefZ field.
    struct EcefZMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode2Fields::EcefZMembers::EcefZ field.
        struct EcefZCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTmode2Fields::EcefZMembers::EcefZ field.
            using ValueType = std::int32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTmode2Fields::EcefZMembers::EcefZ field.
            static const char* name()
            {
                return "ecefZ";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode2Fields::EcefZ field.
    struct EcefZCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::EcefZ field.
        static const char* name()
        {
            return "ecefZ";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode2Fields::Alt field.
    struct AltMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode2Fields::AltMembers::Alt field.
        struct AltCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTmode2Fields::AltMembers::Alt field.
            using ValueType = std::int32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTmode2Fields::AltMembers::Alt field.
            static const char* name()
            {
                return "alt";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode2Fields::Alt field.
    struct AltCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::Alt field.
        static const char* name()
        {
            return "alt";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode2Fields::FixedPosAcc field.
    struct FixedPosAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode2Fields::FixedPosAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::FixedPosAcc field.
        static const char* name()
        {
            return "fixedPosAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode2Fields::SvinMinDur field.
    struct SvinMinDurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode2Fields::SvinMinDur field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::SvinMinDur field.
        static const char* name()
        {
            return "svinMinDur";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode2Fields::SvinVarLimit field.
    struct SvinVarLimitCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode2Fields::SvinVarLimit field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode2Fields::SvinVarLimit field.
        static const char* name()
        {
            return "svinVarLimit";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgTmode2 message.
/// @see ublox::message::CfgTmode2
struct CfgTmode2Common
{
    /// @brief Name of the @ref ublox::message::CfgTmode2 message.
    static const char* name()
    {
        return "CFG-TMODE2";
    }
    
};

} // namespace message

} // namespace ublox

