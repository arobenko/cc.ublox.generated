// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogFindtime message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/DayCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::LogFindtime message.
/// @see ublox::message::LogFindtimeFields
struct LogFindtimeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogFindtimeFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogFindtimeFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogFindtimeFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogFindtimeFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::LogFindtimeFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Minute field.
    struct MinuteCommon : public ublox::field::MinCommon
    {
        /// @brief Name of the @ref ublox::message::LogFindtimeFields::Minute field.
        static const char* name()
        {
            return "minute";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Second field.
    struct SecondCommon : public ublox::field::SecCommon
    {
        /// @brief Name of the @ref ublox::message::LogFindtimeFields::Second field.
        static const char* name()
        {
            return "second";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogFindtimeFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogFindtimeFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogFindtime message.
/// @see ublox::message::LogFindtime
struct LogFindtimeCommon
{
    /// @brief Name of the @ref ublox::message::LogFindtime message.
    static const char* name()
    {
        return "LOG-FINDTIME";
    }
    
};

} // namespace message

} // namespace ublox


