// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavSbas message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"
#include "ublox/field/SbasServiceCommon.h"
#include "ublox/field/SbasSysCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavSbas message.
/// @see ublox::message::NavSbasFields
struct NavSbasFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Geo field.
    struct GeoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSbasFields::Geo field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSbasFields::Geo field.
        static const char* name()
        {
            return "geo";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Mode field.
    struct ModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavSbasFields::Mode field.
        enum class ValueType : std::uint8_t
        {
            Disabled = 0, ///< value @b Disabled
            Integrity = 1, ///< value <b>Enabled Integrity</b>.
            Testmode = 2, ///< value <b>Enabled Testmode</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::NavSbasFields::Mode field.
        static const char* name()
        {
            return "mode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Disabled",
                "Enabled Integrity",
                "Enabled Testmode"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavSbasFields::Mode field.
    using ModeVal = ModeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Sys field.
    struct SysCommon : public ublox::field::SbasSysCommon
    {
        /// @brief Name of the @ref ublox::message::NavSbasFields::Sys field.
        static const char* name()
        {
            return "sys";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Service field.
    struct ServiceCommon : public ublox::field::SbasServiceCommon
    {
        /// @brief Name of the @ref ublox::message::NavSbasFields::Service field.
        static const char* name()
        {
            return "service";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Cnt field.
    struct CntCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSbasFields::Cnt field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSbasFields::Cnt field.
        static const char* name()
        {
            return "cnt";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSbasFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::NavSbasFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavSbasFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavSbasFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSbasFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSbasFields::ListMembers::ElementMembers::Flags field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Udre field.
            struct UdreCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSbasFields::ListMembers::ElementMembers::Udre field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Udre field.
                static const char* name()
                {
                    return "udre";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::SvSys field.
            struct SvSysCommon : public ublox::field::SbasSysCommon
            {
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::SvSys field.
                static const char* name()
                {
                    return "svSys";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::SvService field.
            struct SvServiceCommon : public ublox::field::SbasServiceCommon
            {
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::SvService field.
                static const char* name()
                {
                    return "svService";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Reserved2 field.
            struct Reserved2Common : public ublox::field::Res1Common
            {
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Reserved2 field.
                static const char* name()
                {
                    return "reserved2";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Prc field.
            struct PrcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSbasFields::ListMembers::ElementMembers::Prc field.
                using ValueType = std::int16_t;
            
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Prc field.
                static const char* name()
                {
                    return "prc";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Reserved3 field.
            struct Reserved3Common : public ublox::field::Res2Common
            {
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Reserved3 field.
                static const char* name()
                {
                    return "reserved3";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Ic field.
            struct IcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSbasFields::ListMembers::ElementMembers::Ic field.
                using ValueType = std::int16_t;
            
                /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::ElementMembers::Ic field.
                static const char* name()
                {
                    return "ic";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::NavSbasFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::NavSbasFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavSbasFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::NavSbasFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavSbas message.
/// @see ublox::message::NavSbas
struct NavSbasCommon
{
    /// @brief Name of the @ref ublox::message::NavSbas message.
    static const char* name()
    {
        return "NAV-SBAS";
    }
    
};

} // namespace message

} // namespace ublox


