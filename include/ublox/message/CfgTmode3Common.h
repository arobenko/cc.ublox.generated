// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgTmode3 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res8Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgTmode3 message.
/// @see ublox::message::CfgTmode3Fields
struct CfgTmode3FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode3Fields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode3Fields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
        struct ModeCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
            enum class ValueType : std::uint8_t
            {
                Disabled = 0, ///< value @b Disabled
                SurveyIn = 1, ///< value <b>Survey In</b>.
                FixedMode = 2, ///< value <b>Fixed Mode</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
            static const char* name()
            {
                return "mode";
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
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
        using ModeVal = ModeCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::CfgTmode3Fields::FlagsMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "lla"
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
    ///     @ref ublox::message::CfgTmode3Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode3Fields::Ecef field.
    struct EcefMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrap field.
        struct EcefWrapMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefX field.
            struct EcefXCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefX field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefX field.
                static const char* name()
                {
                    return "ecefX";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefY field.
            struct EcefYCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefY field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefY field.
                static const char* name()
                {
                    return "ecefY";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefZ field.
            struct EcefZCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefZ field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefZ field.
                static const char* name()
                {
                    return "ecefZ";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefXHP field.
            struct EcefXHPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefXHP field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefXHP field.
                static const char* name()
                {
                    return "ecefXHP";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefYHP field.
            struct EcefYHPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefYHP field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefYHP field.
                static const char* name()
                {
                    return "ecefYHP";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefZHP field.
            struct EcefZHPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefZHP field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrapMembers::EcefZHP field.
                static const char* name()
                {
                    return "ecefZHP";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrap field.
        struct EcefWrapCommon
        {
            /// @brief Name of the @ref ublox::message::CfgTmode3Fields::EcefMembers::EcefWrap field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode3Fields::Ecef field.
    struct EcefCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Ecef field.
        static const char* name()
        {
            return "ecef";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode3Fields::Lla field.
    struct LlaMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrap field.
        struct LlaWrapMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Lat field.
            struct LatCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Lat field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Lat field.
                static const char* name()
                {
                    return "lat";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Lon field.
            struct LonCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Lon field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Lon field.
                static const char* name()
                {
                    return "lon";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Alt field.
            struct AltCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Alt field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::Alt field.
                static const char* name()
                {
                    return "alt";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::LatHP field.
            struct LatHPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::LatHP field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::LatHP field.
                static const char* name()
                {
                    return "latHP";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::LonHP field.
            struct LonHPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::LonHP field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::LonHP field.
                static const char* name()
                {
                    return "lonHP";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::AltHP field.
            struct AltHPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::AltHP field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrapMembers::AltHP field.
                static const char* name()
                {
                    return "altHP";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrap field.
        struct LlaWrapCommon
        {
            /// @brief Name of the @ref ublox::message::CfgTmode3Fields::LlaMembers::LlaWrap field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTmode3Fields::Lla field.
    struct LlaCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Lla field.
        static const char* name()
        {
            return "lla";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::FixedPosAcc field.
    struct FixedPosAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode3Fields::FixedPosAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::FixedPosAcc field.
        static const char* name()
        {
            return "fixedPosAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::SvinMinDur field.
    struct SvinMinDurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode3Fields::SvinMinDur field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::SvinMinDur field.
        static const char* name()
        {
            return "svinMinDur";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::SvinVarLimit field.
    struct SvinVarLimitCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmode3Fields::SvinVarLimit field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::SvinVarLimit field.
        static const char* name()
        {
            return "svinVarLimit";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmode3Fields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res8Common
    {
        /// @brief Name of the @ref ublox::message::CfgTmode3Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgTmode3 message.
/// @see ublox::message::CfgTmode3
struct CfgTmode3Common
{
    /// @brief Name of the @ref ublox::message::CfgTmode3 message.
    static const char* name()
    {
        return "CFG-TMODE3";
    }
    
};

} // namespace message

} // namespace ublox


