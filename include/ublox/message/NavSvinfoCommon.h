// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavSvinfo message and its fields.

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
///     @ref ublox::message::NavSvinfo message.
/// @see ublox::message::NavSvinfoFields
struct NavSvinfoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinfoFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinfoFields::NumCh field.
    struct NumChCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinfoFields::NumCh field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinfoFields::NumCh field.
        static const char* name()
        {
            return "numCh";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavSvinfoFields::GlobalFlags field.
    struct GlobalFlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
        struct ChipGenCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
            enum class ValueType : std::uint8_t
            {
                Antaris = 0, ///< value @b Antaris
                Ublox5 = 1, ///< value <b>u-blox 5</b>.
                Ublox6 = 2, ///< value <b>u-blox 6</b>.
                Ublox7 = 3, ///< value <b>u-blox 7</b>.
                Ublox8 = 4, ///< value <b>u-blox 8</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 4, ///< Last defined value.
                ValuesLimit = 5, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
            static const char* name()
            {
                return "chipGen";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Antaris",
                    "u-blox 5",
                    "u-blox 6",
                    "u-blox 7",
                    "u-blox 8"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
        using ChipGenVal = ChipGenCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::Reserved field.
        struct ReservedCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::NavSvinfoFields::GlobalFlagsMembers::Reserved field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavSvinfoFields::GlobalFlags field.
    struct GlobalFlagsCommon
    {
        /// @brief Name of the @ref ublox::message::NavSvinfoFields::GlobalFlags field.
        static const char* name()
        {
            return "globalFlags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinfoFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::NavSvinfoFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavSvinfoFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavSvinfoFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Chn field.
            struct ChnCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Chn field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Chn field.
                static const char* name()
                {
                    return "chn";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
                
                /// @brief Retrieve name of the bit of
                ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Flags field.
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "svUsed",
                        "diffCorr",
                        "orbitAvail",
                        "orbitEph",
                        "unhealthy",
                        "orbitAlm",
                        "orbitAop",
                        "smoothed"
                    };
                
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    if (MapSize <= idx) {
                        return nullptr;
                    }
                
                    return Map[idx];
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
            struct QualityCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
                enum class ValueType : std::uint8_t
                {
                    NoSignal = 0, ///< value <b>no signal</b>.
                    Searching = 1, ///< value <b>searching signal</b>.
                    Acquired = 2, ///< value <b>signal acquired</b>.
                    DetectedUnusable = 3, ///< value <b>signal detected but unusable</b>.
                    CodeLocked = 4, ///< value <b>code locked</b>.
                    CodeCarrierLocked = 5, ///< value <b>code and carrier locked</b>.
                    CodeCarrierLocked2 = 6, ///< value <b>code and carrier locked</b>.
                    CodeCarrierLocked3 = 7, ///< value <b>code and carrier locked</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 7, ///< Last defined value.
                    ValuesLimit = 8, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
                static const char* name()
                {
                    return "quality";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    static const char* Map[] = {
                        "no signal",
                        "searching signal",
                        "signal acquired",
                        "signal detected but unusable",
                        "code locked",
                        "code and carrier locked",
                        "code and carrier locked",
                        "code and carrier locked"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
            using QualityVal = QualityCommon::ValueType;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Cno field.
            struct CnoCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Cno field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Cno field.
                static const char* name()
                {
                    return "cno";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Elev field.
            struct ElevCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Elev field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Elev field.
                static const char* name()
                {
                    return "elev";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Azim field.
            struct AzimCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Azim field.
                using ValueType = std::int16_t;
            
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Azim field.
                static const char* name()
                {
                    return "azim";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::PrRes field.
            struct PrResCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSvinfoFields::ListMembers::ElementMembers::PrRes field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::PrRes field.
                static const char* name()
                {
                    return "prRes";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::NavSvinfoFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::NavSvinfoFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavSvinfoFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::NavSvinfoFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavSvinfo message.
/// @see ublox::message::NavSvinfo
struct NavSvinfoCommon
{
    /// @brief Name of the @ref ublox::message::NavSvinfo message.
    static const char* name()
    {
        return "NAV-SVINFO";
    }
    
};

} // namespace message

} // namespace ublox


