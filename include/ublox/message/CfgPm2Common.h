// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPm2 message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/CfgPm2FlagsCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPm2 message.
/// @see ublox::message::CfgPm2Fields
struct CfgPm2FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::MaxStartupStateDur field.
    struct MaxStartupStateDurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::MaxStartupStateDur field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::MaxStartupStateDur field.
        static const char* name()
        {
            return "maxStartupStateDur";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for members of
    ///     @ref ublox::message::CfgPm2Fields::Flags field.
    using FlagsMembersCommon = ublox::field::CfgPm2FlagsMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::Flags field.
    using FlagsCommon = ublox::field::CfgPm2FlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::UpdatePeriod field.
    struct UpdatePeriodCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::UpdatePeriod field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::UpdatePeriod field.
        static const char* name()
        {
            return "updatePeriod";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::SearchPeriod field.
    struct SearchPeriodCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::SearchPeriod field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::SearchPeriod field.
        static const char* name()
        {
            return "searchPeriod";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::GridOffset field.
    struct GridOffsetCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::GridOffset field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::GridOffset field.
        static const char* name()
        {
            return "gridOffset";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::OnTime field.
    struct OnTimeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::OnTime field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::OnTime field.
        static const char* name()
        {
            return "onTime";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPm2Fields::MinAcqTime field.
    struct MinAcqTimeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPm2Fields::MinAcqTime field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::MinAcqTime field.
        static const char* name()
        {
            return "minAcqTime";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgPm2Fields::Reserved3 list.
    struct Reserved3MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPm2Fields::Reserved3Members::Reserved3 field.
        struct Reserved3Common : public ublox::field::Res4Common
        {
            /// @brief Name of the @ref ublox::message::CfgPm2Fields::Reserved3Members::Reserved3 field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgPm2Fields::Reserved3 field.
    struct Reserved3Common
    {
        /// @brief Name of the @ref ublox::message::CfgPm2Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPm2 message.
/// @see ublox::message::CfgPm2
struct CfgPm2Common
{
    /// @brief Name of the @ref ublox::message::CfgPm2 message.
    static const char* name()
    {
        return "CFG-PM2";
    }
    
};

} // namespace message

} // namespace ublox


