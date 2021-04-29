// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgGnss message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgGnss message.
/// @see ublox::message::CfgGnssFields
struct CfgGnssFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGnssFields::MsgVer field.
    struct MsgVerCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGnssFields::MsgVer field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGnssFields::MsgVer field.
        static const char* name()
        {
            return "msgVer";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGnssFields::NumTrkChHw field.
    struct NumTrkChHwCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGnssFields::NumTrkChHw field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGnssFields::NumTrkChHw field.
        static const char* name()
        {
            return "numTrkChHw";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGnssFields::NumTrkChUse field.
    struct NumTrkChUseCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGnssFields::NumTrkChUse field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGnssFields::NumTrkChUse field.
        static const char* name()
        {
            return "numTrkChUse";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgGnssFields::NumConfigBlocks field.
    struct NumConfigBlocksCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgGnssFields::NumConfigBlocks field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgGnssFields::NumConfigBlocks field.
        static const char* name()
        {
            return "numConfigBlocks";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgGnssFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgGnssFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::GnssId field.
            using GnssIdCommon = ublox::field::GnssIdCommon;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::ResTrkCh field.
            struct ResTrkChCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgGnssFields::ListMembers::ElementMembers::ResTrkCh field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::ResTrkCh field.
                static const char* name()
                {
                    return "resTrkCh";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::MaxTrkCh field.
            struct MaxTrkChCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::CfgGnssFields::ListMembers::ElementMembers::MaxTrkCh field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::MaxTrkCh field.
                static const char* name()
                {
                    return "maxTrkCh";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public ublox::field::Res1Common
            {
                /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::Flags field.
            struct FlagsMembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                struct BitsLowCommon
                {
                    /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "enable"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::SigCfgMask field.
                struct SigCfgMaskCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::SigCfgMask field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::SigCfgMask field.
                    static const char* name()
                    {
                        return "sigCfgMask";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                    static const char* name()
                    {
                        return "reserved";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::CfgGnssFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::CfgGnssFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgGnssFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::CfgGnssFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgGnss message.
/// @see ublox::message::CfgGnss
struct CfgGnssCommon
{
    /// @brief Name of the @ref ublox::message::CfgGnss message.
    static const char* name()
    {
        return "CFG-GNSS";
    }
    
};

} // namespace message

} // namespace ublox


