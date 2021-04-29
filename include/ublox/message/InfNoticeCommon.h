// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::InfNotice message and its fields.

#pragma once

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::InfNotice message.
/// @see ublox::message::InfNoticeFields
struct InfNoticeFieldsCommon
{
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::InfNoticeFields::Str field.
    struct StrCommon
    {
        /// @brief Name of the @ref ublox::message::InfNoticeFields::Str field.
        static const char* name()
        {
            return "str";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::InfNotice message.
/// @see ublox::message::InfNotice
struct InfNoticeCommon
{
    /// @brief Name of the @ref ublox::message::InfNotice message.
    static const char* name()
    {
        return "INF-NOTICE";
    }
    
};

} // namespace message

} // namespace ublox


