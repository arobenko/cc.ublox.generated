// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogRetrievepos message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/DayCommon.h"
#include "ublox/field/GpsFixCommon.h"
#include "ublox/field/HAccCommon.h"
#include "ublox/field/HMSLCommon.h"
#include "ublox/field/HeadingCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/LatCommon.h"
#include "ublox/field/LonCommon.h"
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
///     @ref ublox::message::LogRetrievepos message.
/// @see ublox::message::LogRetrieveposFields
struct LogRetrieveposFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::EntryIndex field.
    struct EntryIndexCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposFields::EntryIndex field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::EntryIndex field.
        static const char* name()
        {
            return "entryIndex";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Lon field.
    using LonCommon = ublox::field::LonCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Lat field.
    using LatCommon = ublox::field::LatCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::HMSL field.
    using HMSLCommon = ublox::field::HMSLCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::HAcc field.
    using HAccCommon = ublox::field::HAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::GSpeed field.
    struct GSpeedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposFields::GSpeed field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::GSpeed field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Heading field.
    using HeadingCommon = ublox::field::HeadingCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::FixType field.
    struct FixTypeCommon : public ublox::field::GpsFixCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::FixType field.
        static const char* name()
        {
            return "fixType";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Minute field.
    struct MinuteCommon : public ublox::field::MinCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::Minute field.
        static const char* name()
        {
            return "minute";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Second field.
    struct SecondCommon : public ublox::field::SecCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::Second field.
        static const char* name()
        {
            return "second";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposFields::NumSV field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogRetrievepos message.
/// @see ublox::message::LogRetrievepos
struct LogRetrieveposCommon
{
    /// @brief Name of the @ref ublox::message::LogRetrievepos message.
    static const char* name()
    {
        return "LOG-RETRIEVEPOS";
    }
    
};

} // namespace message

} // namespace ublox


