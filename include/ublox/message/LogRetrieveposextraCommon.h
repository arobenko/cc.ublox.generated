// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogRetrieveposextra message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/DayCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res3Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::LogRetrieveposextra message.
/// @see ublox::message::LogRetrieveposextraFields
struct LogRetrieveposextraFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::EntryIndex field.
    struct EntryIndexCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposextraFields::EntryIndex field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::EntryIndex field.
        static const char* name()
        {
            return "entryIndex";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposextraFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Minute field.
    struct MinuteCommon : public ublox::field::MinCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Minute field.
        static const char* name()
        {
            return "minute";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Second field.
    struct SecondCommon : public ublox::field::SecCommon
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Second field.
        static const char* name()
        {
            return "second";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveposextraFields::Distance field.
    struct DistanceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveposextraFields::Distance field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Distance field.
        static const char* name()
        {
            return "distance";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::LogRetrieveposextraFields::Reserved3 list.
    struct Reserved3MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::LogRetrieveposextraFields::Reserved3Members::Element field.
        struct ElementCommon : public ublox::field::Res1Common
        {
            /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Reserved3Members::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::LogRetrieveposextraFields::Reserved3 field.
    struct Reserved3Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveposextraFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogRetrieveposextra message.
/// @see ublox::message::LogRetrieveposextra
struct LogRetrieveposextraCommon
{
    /// @brief Name of the @ref ublox::message::LogRetrieveposextra message.
    static const char* name()
    {
        return "LOG-RETRIEVEPOSEXTRA";
    }
    
};

} // namespace message

} // namespace ublox


