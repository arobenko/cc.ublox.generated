// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::InfDebug message and its fields.

#pragma once

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::InfDebug message.
/// @see ublox::message::InfDebugFields
struct InfDebugFieldsCommon
{
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::InfDebugFields::Str field.
    struct StrCommon
    {
        /// @brief Name of the @ref ublox::message::InfDebugFields::Str field.
        static const char* name()
        {
            return "str";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::InfDebug message.
/// @see ublox::message::InfDebug
struct InfDebugCommon
{
    /// @brief Name of the @ref ublox::message::InfDebug message.
    static const char* name()
    {
        return "INF-DEBUG";
    }
    
};

} // namespace message

} // namespace ublox


