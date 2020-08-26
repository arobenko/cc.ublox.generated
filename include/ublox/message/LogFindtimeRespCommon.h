// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogFindtimeResp message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::LogFindtimeResp message.
/// @see ublox::message::LogFindtimeRespFields
struct LogFindtimeRespFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeRespFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogFindtimeRespFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogFindtimeRespFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeRespFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogFindtimeRespFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogFindtimeRespFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeRespFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::LogFindtimeRespFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeRespFields::EntryNumber field.
    struct EntryNumberCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogFindtimeRespFields::EntryNumber field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogFindtimeRespFields::EntryNumber field.
        static const char* name()
        {
            return "entryNumber";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogFindtimeResp message.
/// @see ublox::message::LogFindtimeResp
struct LogFindtimeRespCommon
{
    /// @brief Name of the @ref ublox::message::LogFindtimeResp message.
    static const char* name()
    {
        return "LOG-FINDTIME (Response)";
    }
    
};

} // namespace message

} // namespace ublox


