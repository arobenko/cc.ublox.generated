// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::InfTest message and its fields.

#pragma once

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::InfTest message.
/// @see ublox::message::InfTestFields
struct InfTestFieldsCommon
{
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::InfTestFields::Str field.
    struct StrCommon
    {
        /// @brief Name of the @ref ublox::message::InfTestFields::Str field.
        static const char* name()
        {
            return "str";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::InfTest message.
/// @see ublox::message::InfTest
struct InfTestCommon
{
    /// @brief Name of the @ref ublox::message::InfTest message.
    static const char* name()
    {
        return "INF-TEST";
    }
    
};

} // namespace message

} // namespace ublox


