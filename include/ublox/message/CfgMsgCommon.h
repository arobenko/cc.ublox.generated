// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgMsg message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/MsgIdCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgMsg message.
/// @see ublox::message::CfgMsgFields
struct CfgMsgFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgMsgFields::MsgId field.
    using MsgIdCommon = ublox::field::MsgIdCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgMsgFields::Rates list.
    struct RatesMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgMsgFields::RatesMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgMsgFields::RatesMembers::Element field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgMsgFields::RatesMembers::Element field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgMsgFields::Rates field.
    struct RatesCommon
    {
        /// @brief Name of the @ref ublox::message::CfgMsgFields::Rates field.
        static const char* name()
        {
            return "rates";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgMsg message.
/// @see ublox::message::CfgMsg
struct CfgMsgCommon
{
    /// @brief Name of the @ref ublox::message::CfgMsg message.
    static const char* name()
    {
        return "CFG-MSG";
    }
    
};

} // namespace message

} // namespace ublox


