// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonSmgr message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonSmgr message.
/// @see ublox::message::MonSmgrFields
struct MonSmgrFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSmgrFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonSmgrFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonSmgrFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSmgrFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::MonSmgrFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSmgrFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonSmgrFields::IntOsc field.
    struct IntOscMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
        struct IntOscStateCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
            enum class ValueType : std::uint8_t
            {
                Autonomous = 0, ///< value @b Autonomous.
                Ongoing = 1, ///< value @b Ongoing.
                Steered = 2, ///< value @b Steered.
                Idle = 4, ///< value @b Idle.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 4, ///< Last defined value.
                ValuesLimit = 5, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
            static const char* name()
            {
                return "intOscState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Autonomous",
                    "Ongoing",
                    "Steered",
                    nullptr,
                    "Idle"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
        using IntOscStateVal = IntOscStateCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::MonSmgrFields::IntOscMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::MonSmgrFields::IntOscMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "intOscCalib",
                    "intOscDisc"
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
    ///     @ref ublox::message::MonSmgrFields::IntOsc field.
    struct IntOscCommon
    {
        /// @brief Name of the @ref ublox::message::MonSmgrFields::IntOsc field.
        static const char* name()
        {
            return "intOsc";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonSmgrFields::ExtOsc field.
    struct ExtOscMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
        struct ExtOscStateCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
            enum class ValueType : std::uint8_t
            {
                Autonomous = 0, ///< value @b Autonomous.
                Ongoing = 1, ///< value @b Ongoing.
                Steered = 2, ///< value @b Steered.
                Idle = 4, ///< value @b Idle.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 4, ///< Last defined value.
                ValuesLimit = 5, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
            static const char* name()
            {
                return "extOscState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Autonomous",
                    "Ongoing",
                    "Steered",
                    nullptr,
                    "Idle"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
        using ExtOscStateVal = ExtOscStateCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::MonSmgrFields::ExtOscMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "extOscCalib",
                    "extOscDisc"
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
    ///     @ref ublox::message::MonSmgrFields::ExtOsc field.
    struct ExtOscCommon
    {
        /// @brief Name of the @ref ublox::message::MonSmgrFields::ExtOsc field.
        static const char* name()
        {
            return "extOsc";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSmgrFields::DiscSrc field.
    struct DiscSrcCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::DiscSrc field.
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
        
        /// @brief Name of the @ref ublox::message::MonSmgrFields::DiscSrc field.
        static const char* name()
        {
            return "discSrc";
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
    ///     @ref ublox::message::MonSmgrFields::DiscSrc field.
    using DiscSrcVal = DiscSrcCommon::ValueType;
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::Gnss field.
    struct GnssCommon
    {
        /// @brief Name of the @ref ublox::message::MonSmgrFields::Gnss field.
        static const char* name()
        {
            return "gnss";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonSmgrFields::Gnss field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "gnssAvail"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::ExtInt0 field.
    struct ExtInt0Common
    {
        /// @brief Name of the @ref ublox::message::MonSmgrFields::ExtInt0 field.
        static const char* name()
        {
            return "extInt0";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonSmgrFields::ExtInt0 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "extInt0Avail",
                "extInt0Type",
                "extInt0FeedBack"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::ExtInt1 field.
    struct ExtInt1Common
    {
        /// @brief Name of the @ref ublox::message::MonSmgrFields::ExtInt1 field.
        static const char* name()
        {
            return "extInt1";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonSmgrFields::ExtInt1 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "extInt1Avail",
                "extInt1Type",
                "extInt1FeedBack"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonSmgr message.
/// @see ublox::message::MonSmgr
struct MonSmgrCommon
{
    /// @brief Name of the @ref ublox::message::MonSmgr message.
    static const char* name()
    {
        return "MON-SMGR";
    }
    
};

} // namespace message

} // namespace ublox


