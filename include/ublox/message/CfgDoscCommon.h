// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgDosc message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgDosc message.
/// @see ublox::message::CfgDoscFields
struct CfgDoscFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDoscFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgDoscFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgDoscFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDoscFields::NumOsc field.
    struct NumOscCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgDoscFields::NumOsc field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgDoscFields::NumOsc field.
        static const char* name()
        {
            return "numOsc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDoscFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgDoscFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgDoscFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgDoscFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
            struct OscIdCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
                enum class ValueType : std::uint8_t
                {
                    Internal = 0, ///< value @b Internal.
                    External = 1, ///< value @b External.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 1, ///< Last defined value.
                    ValuesLimit = 2, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
                static const char* name()
                {
                    return "oscId";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    static const char* Map[] = {
                        "Internal",
                        "External"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
            using OscIdVal = OscIdCommon::ValueType;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Reserved2 field.
            struct Reserved2Common : public ublox::field::Res1Common
            {
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Reserved2 field.
                static const char* name()
                {
                    return "reserved2";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Flags field.
            struct FlagsMembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "isCalibrated"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                struct ControlIfCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                    enum class ValueType : std::uint8_t
                    {
                        Custom = 0, ///< value @b Custom.
                        Microchip = 1, ///< value @b Microchip.
                        TI = 2, ///< value @b TI.
                        DAC_12bit = 13, ///< value @b DAC_12bit.
                        DAC_14bit = 14, ///< value @b DAC_14bit.
                        DAC_16bit = 15, ///< value @b DAC_16bit.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 15, ///< Last defined value.
                        ValuesLimit = 16, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                    static const char* name()
                    {
                        return "controlIf";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        using NameInfo = std::pair<ValueType, const char*>;
                        static const NameInfo Map[] = {
                            std::make_pair(ValueType::Custom, "Custom"),
                            std::make_pair(ValueType::Microchip, "Microchip"),
                            std::make_pair(ValueType::TI, "TI"),
                            std::make_pair(ValueType::DAC_12bit, "DAC_12bit"),
                            std::make_pair(ValueType::DAC_14bit, "DAC_14bit"),
                            std::make_pair(ValueType::DAC_16bit, "DAC_16bit")
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
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                using ControlIfVal = ControlIfCommon::ValueType;
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                    using ValueType = std::uint16_t;
                
                    /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                    static const char* name()
                    {
                        return "reserved";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Freq field.
            struct FreqCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::Freq field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Freq field.
                static const char* name()
                {
                    return "freq";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::PhaseOffset field.
            struct PhaseOffsetCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::PhaseOffset field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::PhaseOffset field.
                static const char* name()
                {
                    return "phaseOffset";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::WithTemp field.
            struct WithTempCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::WithTemp field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::WithTemp field.
                static const char* name()
                {
                    return "withTemp";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::WithAge field.
            struct WithAgeCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::WithAge field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::WithAge field.
                static const char* name()
                {
                    return "withAge";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::TimeToTemp field.
            struct TimeToTempCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::TimeToTemp field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::TimeToTemp field.
                static const char* name()
                {
                    return "timeToTemp";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Reserved3 field.
            struct Reserved3Common : public ublox::field::Res2Common
            {
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Reserved3 field.
                static const char* name()
                {
                    return "reserved3";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::GainVco field.
            struct GainVcoCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::GainVco field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::GainVco field.
                static const char* name()
                {
                    return "gainVco";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::GainUncertainty field.
            struct GainUncertaintyCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgDoscFields::ListMembers::ElementMembers::GainUncertainty field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::GainUncertainty field.
                static const char* name()
                {
                    return "gainUncertainty";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Reserved4 field.
            struct Reserved4Common : public ublox::field::Res3Common
            {
                /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Reserved4 field.
                static const char* name()
                {
                    return "reserved4";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::CfgDoscFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::CfgDoscFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgDoscFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDoscFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgDosc message.
/// @see ublox::message::CfgDosc
struct CfgDoscCommon
{
    /// @brief Name of the @ref ublox::message::CfgDosc message.
    static const char* name()
    {
        return "CFG-DOSC";
    }
    
};

} // namespace message

} // namespace ublox


