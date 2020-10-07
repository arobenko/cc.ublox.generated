// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogRetrievestring message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/DayCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::LogRetrievestring message.
/// @see ublox::message::LogRetrievestringFields
struct LogRetrievestringFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::EntryIndex field.
    struct EntryIndexCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrievestringFields::EntryIndex field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::EntryIndex field.
        static const char* name()
        {
            return "entryIndex";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrievestringFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Minute field.
    struct MinuteCommon : public ublox::field::MinCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::Minute field.
        static const char* name()
        {
            return "minute";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Second field.
    struct SecondCommon : public ublox::field::SecCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::Second field.
        static const char* name()
        {
            return "second";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrievestringFields::ByteCount field.
    struct ByteCountCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrievestringFields::ByteCount field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::ByteCount field.
        static const char* name()
        {
            return "byteCount";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::LogRetrievestringFields::Bytes field.
    struct BytesCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrievestringFields::Bytes field.
        static const char* name()
        {
            return "bytes";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogRetrievestring message.
/// @see ublox::message::LogRetrievestring
struct LogRetrievestringCommon
{
    /// @brief Name of the @ref ublox::message::LogRetrievestring message.
    static const char* name()
    {
        return "LOG-RETRIEVESTRING";
    }
    
};

} // namespace message

} // namespace ublox


