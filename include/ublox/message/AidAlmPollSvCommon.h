// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAlmPollSv message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAlmPollSv message.
/// @see ublox::message::AidAlmPollSvFields
struct AidAlmPollSvFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlmPollSvFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlmPollSvFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAlmPollSvFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAlmPollSv message.
/// @see ublox::message::AidAlmPollSv
struct AidAlmPollSvCommon
{
    /// @brief Name of the @ref ublox::message::AidAlmPollSv message.
    static const char* name()
    {
        return "AID-ALM (Poll SV)";
    }
    
};

} // namespace message

} // namespace ublox


