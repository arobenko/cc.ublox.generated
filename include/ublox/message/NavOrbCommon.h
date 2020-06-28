// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavOrb message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavOrb message.
/// @see ublox::message::NavOrbFields
struct NavOrbFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOrbFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOrbFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavOrbFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavOrbFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOrbFields::NumSv field.
    struct NumSvCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavOrbFields::NumSv field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavOrbFields::NumSv field.
        static const char* name()
        {
            return "numSv";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOrbFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::NavOrbFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavOrbFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavOrbFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::GnssId field.
            using GnssIdCommon = ublox::field::GnssIdCommon;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavOrbFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlag field.
            struct SvFlagMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                struct HealthCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                    enum class ValueType : std::uint8_t
                    {
                        Unknown = 0, ///< value @b Unknown
                        Healthy = 1, ///< value @b Healthy
                        NotHealthy = 2, ///< value <b>Not healty</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                    static const char* name()
                    {
                        return "health";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Unknown",
                            "Healthy",
                            "Not healty"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                using HealthVal = HealthCommon::ValueType;
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                struct VisibilityCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                    enum class ValueType : std::uint8_t
                    {
                        Unknown = 0, ///< value @b Unknown
                        BelowHorizon = 1, ///< value <b>Below horizon</b>.
                        AboveHorizon = 2, ///< value <b>Above horizon</b>.
                        AboveElevMask = 3, ///< value <b>Above elevation mask</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 3, ///< Last defined value.
                        ValuesLimit = 4, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                    static const char* name()
                    {
                        return "visibility";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Unknown",
                            "Below horizon",
                            "Above horizon",
                            "Above elevation mask"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                using VisibilityVal = VisibilityCommon::ValueType;
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Reserved field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Reserved field.
                    static const char* name()
                    {
                        return "reserved";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlag field.
            struct SvFlagCommon
            {
                /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlag field.
                static const char* name()
                {
                    return "svFlag";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Eph field.
            struct EphMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphUsability field.
                struct EphUsabilityCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphUsability field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphUsability field.
                    static const char* name()
                    {
                        return "ephUsability";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                struct EphSourceCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                    enum class ValueType : std::uint8_t
                    {
                        NotAvailable = 0, ///< value <b>Not available</b>.
                        GNSS = 1, ///< value <b>GNSS transmission</b>.
                        ExternalAiding = 2, ///< value <b>External aiding</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                    static const char* name()
                    {
                        return "ephSource";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Not available",
                            "GNSS transmission",
                            "External aiding"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                using EphSourceVal = EphSourceCommon::ValueType;
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Eph field.
            struct EphCommon
            {
                /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Eph field.
                static const char* name()
                {
                    return "eph";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Alm field.
            struct AlmMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmUsability field.
                struct AlmUsabilityCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmUsability field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmUsability field.
                    static const char* name()
                    {
                        return "almUsability";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                struct AlmSourceCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                    enum class ValueType : std::uint8_t
                    {
                        NotAvailable = 0, ///< value <b>Not available</b>.
                        GNSS = 1, ///< value <b>GNSS transmission</b>.
                        ExternalAiding = 2, ///< value <b>External aiding</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                    static const char* name()
                    {
                        return "almSource";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Not available",
                            "GNSS transmission",
                            "External aiding"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                using AlmSourceVal = AlmSourceCommon::ValueType;
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Alm field.
            struct AlmCommon
            {
                /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Alm field.
                static const char* name()
                {
                    return "alm";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrb field.
            struct OtherOrbMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::AnoAopUsability field.
                struct AnoAopUsabilityCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::AnoAopUsability field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::AnoAopUsability field.
                    static const char* name()
                    {
                        return "anoAopUsability";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                struct TypeCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                    enum class ValueType : std::uint8_t
                    {
                        NotAvailable = 0, ///< value <b>Not available</b>.
                        OfflineData = 1, ///< value <b>Offline data</b>.
                        AutonomousData = 2, ///< value <b>Autonomous data</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                    static const char* name()
                    {
                        return "type";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Not available",
                            "Offline data",
                            "Autonomous data"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                using TypeVal = TypeCommon::ValueType;
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrb field.
            struct OtherOrbCommon
            {
                /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrb field.
                static const char* name()
                {
                    return "otherOrb";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::NavOrbFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::NavOrbFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavOrbFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::NavOrbFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavOrb message.
/// @see ublox::message::NavOrb
struct NavOrbCommon
{
    /// @brief Name of the @ref ublox::message::NavOrb message.
    static const char* name()
    {
        return "NAV-ORB";
    }
    
};

} // namespace message

} // namespace ublox


