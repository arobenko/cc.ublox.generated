// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::InfError message and its fields.

#pragma once

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::InfError message.
/// @see ublox::message::InfErrorFields
struct InfErrorFieldsCommon
{
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::InfErrorFields::Str field.
    struct StrCommon
    {
        /// @brief Name of the @ref ublox::message::InfErrorFields::Str field.
        static const char* name()
        {
            return "str";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::InfError message.
/// @see ublox::message::InfError
struct InfErrorCommon
{
    /// @brief Name of the @ref ublox::message::InfError message.
    static const char* name()
    {
        return "INF-ERROR";
    }
    
};

} // namespace message

} // namespace ublox


