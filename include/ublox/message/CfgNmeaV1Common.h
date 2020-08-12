// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgNmeaV1 message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/CfgMainTalkerIdCommon.h"
#include "ublox/field/CfgNmeaFilterCommon.h"
#include "ublox/field/CfgNmeaFlagsCommon.h"
#include "ublox/field/CfgNmeaGnssToFilterCommon.h"
#include "ublox/field/CfgNmeaGsvTalkerIdCommon.h"
#include "ublox/field/CfgNmeaNumSVCommon.h"
#include "ublox/field/CfgNmeaSvNumberingCommon.h"
#include "ublox/field/CfgNmeaVersionCommon.h"
#include "ublox/field/Res6Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgNmeaV1 message.
/// @see ublox::message::CfgNmeaV1Fields
struct CfgNmeaV1FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::Filter field.
    struct FilterCommon : public ublox::field::CfgNmeaFilterCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::Filter field.
        static const char* name()
        {
            return "filter";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::NmeaVersion field.
    struct NmeaVersionCommon : public ublox::field::CfgNmeaVersionCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::NmeaVersion field.
        static const char* name()
        {
            return "nmeaVersion";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::NumSV field.
    struct NumSVCommon : public ublox::field::CfgNmeaNumSVCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::Flags field.
    struct FlagsCommon : public ublox::field::CfgNmeaFlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::GnssToFilter field.
    struct GnssToFilterCommon : public ublox::field::CfgNmeaGnssToFilterCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::GnssToFilter field.
        static const char* name()
        {
            return "gnssToFilter";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::SvNumbering field.
    struct SvNumberingCommon : public ublox::field::CfgNmeaSvNumberingCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::SvNumbering field.
        static const char* name()
        {
            return "svNumbering";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::MainTalkerId field.
    struct MainTalkerIdCommon : public ublox::field::CfgMainTalkerIdCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::MainTalkerId field.
        static const char* name()
        {
            return "mainTalkerId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::GsvTalkerId field.
    struct GsvTalkerIdCommon : public ublox::field::CfgNmeaGsvTalkerIdCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::GsvTalkerId field.
        static const char* name()
        {
            return "gsvTalkerId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNmeaV1Fields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgNmeaV1Fields::BdsTalkerId field.
    struct BdsTalkerIdCommon
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::BdsTalkerId field.
        static const char* name()
        {
            return "bdsTalkerId";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNmeaV1Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res6Common
    {
        /// @brief Name of the @ref ublox::message::CfgNmeaV1Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgNmeaV1 message.
/// @see ublox::message::CfgNmeaV1
struct CfgNmeaV1Common
{
    /// @brief Name of the @ref ublox::message::CfgNmeaV1 message.
    static const char* name()
    {
        return "CFG-NMEA (V1)";
    }
    
};

} // namespace message

} // namespace ublox


