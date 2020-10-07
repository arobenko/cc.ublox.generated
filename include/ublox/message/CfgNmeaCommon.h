// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgNmea message and its fields.

#pragma once

#include "ublox/field/CfgNmeaFilterCommon.h"
#include "ublox/field/CfgNmeaFlagsCommon.h"
#include "ublox/field/CfgNmeaNumSVCommon.h"
#include "ublox/field/CfgNmeaVersionCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgNmea message.
/// @see ublox::message::CfgNmeaFields
struct CfgNmeaFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaFields::Filter field.
    struct FilterCommon : public ublox::field::CfgNmeaFilterCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaFields::Filter field.
        static const char* name()
        {
            return "filter";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaFields::NmeaVersion field.
    struct NmeaVersionCommon : public ublox::field::CfgNmeaVersionCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaFields::NmeaVersion field.
        static const char* name()
        {
            return "nmeaVersion";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaFields::NumSV field.
    struct NumSVCommon : public ublox::field::CfgNmeaNumSVCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaFields::Flags field.
    struct FlagsCommon : public ublox::field::CfgNmeaFlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgNmea message.
/// @see ublox::message::CfgNmea
struct CfgNmeaCommon
{
    /// @brief Name of the @ref ublox::message::CfgNmea message.
    static const char* name()
    {
        return "CFG-NMEA";
    }
    
};

} // namespace message

} // namespace ublox


