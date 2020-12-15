// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmMeasx message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"
#include "ublox/field/Res4Common.h"
#include "ublox/field/Res8Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmMeasx message.
/// @see ublox::message::RxmMeasxFields
struct RxmMeasxFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::GpsTOW field.
    struct GpsTOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::GpsTOW field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::GpsTOW field.
        static const char* name()
        {
            return "gpsTOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::GloTOW field.
    struct GloTOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::GloTOW field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::GloTOW field.
        static const char* name()
        {
            return "gloTOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::BdsTOW field.
    struct BdsTOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::BdsTOW field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::BdsTOW field.
        static const char* name()
        {
            return "bdsTOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::QzssTOW field.
    struct QzssTOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::QzssTOW field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::QzssTOW field.
        static const char* name()
        {
            return "qzssTOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::GpsTOWacc field.
    struct GpsTOWaccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::GpsTOWacc field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::GpsTOWacc field.
        static const char* name()
        {
            return "gpsTOWacc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::GloTOWacc field.
    struct GloTOWaccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::GloTOWacc field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::GloTOWacc field.
        static const char* name()
        {
            return "gloTOWacc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::BdsTOWacc field.
    struct BdsTOWaccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::BdsTOWacc field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::BdsTOWacc field.
        static const char* name()
        {
            return "bdsTOWacc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::QzssTOWacc field.
    struct QzssTOWaccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::QzssTOWacc field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::QzssTOWacc field.
        static const char* name()
        {
            return "qzssTOWacc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmMeasxFields::NumSV field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmMeasxFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
        struct TowSetCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
            enum class ValueType : std::uint8_t
            {
                No = 0, ///< value @b No.
                Yes = 1, ///< value @b Yes.
                Yes2 = 2, ///< value @b Yes2.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
            static const char* name()
            {
                return "towSet";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "No",
                    "Yes",
                    "Yes2"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
        using TowSetVal = TowSetCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::Reserved field.
        struct ReservedCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::RxmMeasxFields::FlagsMembers::Reserved field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::RxmMeasxFields::FlagsMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmMeasxFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmMeasxFields::Reserved4 field.
    struct Reserved4Common : public ublox::field::Res8Common
    {
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::Reserved4 field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmMeasxFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmMeasxFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::GnssId field.
            using GnssIdCommon = ublox::field::GnssIdCommon;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::CNo field.
            struct CNoCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::CNo field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::CNo field.
                static const char* name()
                {
                    return "cNo";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
            struct MpathIndicCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
                enum class ValueType : std::uint8_t
                {
                    NotMeasured = 0, ///< value <b>Not measured</b>.
                    Low = 1, ///< value @b Low.
                    Medium = 2, ///< value @b Medium.
                    High = 3, ///< value @b High.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 3, ///< Last defined value.
                    ValuesLimit = 4, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
                static const char* name()
                {
                    return "mpathIndic";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    static const char* Map[] = {
                        "Not measured",
                        "Low",
                        "Medium",
                        "High"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
            using MpathIndicVal = MpathIndicCommon::ValueType;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::DopplerMS field.
            struct DopplerMSCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::DopplerMS field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::DopplerMS field.
                static const char* name()
                {
                    return "dopplerMS";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::DopplerHz field.
            struct DopplerHzCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::DopplerHz field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::DopplerHz field.
                static const char* name()
                {
                    return "dopplerHz";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::WholeChips field.
            struct WholeChipsCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::WholeChips field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::WholeChips field.
                static const char* name()
                {
                    return "wholeChips";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::FracChips field.
            struct FracChipsCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::FracChips field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::FracChips field.
                static const char* name()
                {
                    return "fracChips";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::CodePhase field.
            struct CodePhaseCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::CodePhase field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::CodePhase field.
                static const char* name()
                {
                    return "codePhase";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::IntCodePhase field.
            struct IntCodePhaseCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::IntCodePhase field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::IntCodePhase field.
                static const char* name()
                {
                    return "intCodePhase";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::PseuRangeRMSErr field.
            struct PseuRangeRMSErrCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmMeasxFields::ListMembers::ElementMembers::PseuRangeRMSErr field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::PseuRangeRMSErr field.
                static const char* name()
                {
                    return "pseuRangeRMSErr";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::Reserved5 field.
            struct Reserved5Common : public ublox::field::Res2Common
            {
                /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::Reserved5 field.
                static const char* name()
                {
                    return "reserved5";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::RxmMeasxFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::RxmMeasxFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmMeasxFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::RxmMeasxFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmMeasx message.
/// @see ublox::message::RxmMeasx
struct RxmMeasxCommon
{
    /// @brief Name of the @ref ublox::message::RxmMeasx message.
    static const char* name()
    {
        return "RXM-MEASX";
    }
    
};

} // namespace message

} // namespace ublox


