// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmAlmPollSv message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmAlmPollSv message.
/// @see ublox::message::RxmAlmPollSvFields
struct RxmAlmPollSvFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmAlmPollSvFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmAlmPollSvFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmAlmPollSvFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmAlmPollSv message.
/// @see ublox::message::RxmAlmPollSv
struct RxmAlmPollSvCommon
{
    /// @brief Name of the @ref ublox::message::RxmAlmPollSv message.
    static const char* name()
    {
        return "RXM-ALM (Poll SV)";
    }
    
};

} // namespace message

} // namespace ublox


