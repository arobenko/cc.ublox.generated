// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavDgps message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavDgps message.
/// @see ublox::message::NavDgpsFields
struct NavDgpsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::Age field.
    struct AgeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavDgpsFields::Age field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavDgpsFields::Age field.
        static const char* name()
        {
            return "age";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::BaseId field.
    struct BaseIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavDgpsFields::BaseId field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::NavDgpsFields::BaseId field.
        static const char* name()
        {
            return "baseId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::BaseHealth field.
    struct BaseHealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavDgpsFields::BaseHealth field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::NavDgpsFields::BaseHealth field.
        static const char* name()
        {
            return "baseHealth";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::NumCh field.
    struct NumChCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavDgpsFields::NumCh field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavDgpsFields::NumCh field.
        static const char* name()
        {
            return "numCh";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::Status field.
    struct StatusCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavDgpsFields::Status field.
        enum class ValueType : std::uint8_t
        {
            None = 0, ///< value @b None
            PR_PRR = 1, ///< value <b>PR + PRR correction</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::NavDgpsFields::Status field.
        static const char* name()
        {
            return "status";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "None",
                "PR + PRR correction"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavDgpsFields::Status field.
    using StatusVal = StatusCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDgpsFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::NavDgpsFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavDgpsFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavDgpsFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavDgpsFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Flags field.
            struct FlagsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Channel field.
                struct ChannelCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Channel field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Channel field.
                    static const char* name()
                    {
                        return "channel";
                    }
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "dgpsUsed"
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
            ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::AgeC field.
            struct AgeCCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavDgpsFields::ListMembers::ElementMembers::AgeC field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::AgeC field.
                static const char* name()
                {
                    return "ageC";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prc field.
            struct PrcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prc field.
                using ValueType = float;
            
                /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prc field.
                static const char* name()
                {
                    return "prc";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prrc field.
            struct PrrcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prrc field.
                using ValueType = float;
            
                /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prrc field.
                static const char* name()
                {
                    return "prrc";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::NavDgpsFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::NavDgpsFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavDgpsFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::NavDgpsFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavDgps message.
/// @see ublox::message::NavDgps
struct NavDgpsCommon
{
    /// @brief Name of the @ref ublox::message::NavDgps message.
    static const char* name()
    {
        return "NAV-DGPS";
    }
    
};

} // namespace message

} // namespace ublox


