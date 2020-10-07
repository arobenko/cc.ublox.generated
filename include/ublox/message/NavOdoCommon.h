// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavOdo message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavOdo message.
/// @see ublox::message::NavOdoFields
struct NavOdoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOdoFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavOdoFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavOdoFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOdoFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::NavOdoFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOdoFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOdoFields::Distance field.
    struct DistanceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavOdoFields::Distance field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavOdoFields::Distance field.
        static const char* name()
        {
            return "distance";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOdoFields::TotalDistance field.
    struct TotalDistanceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavOdoFields::TotalDistance field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavOdoFields::TotalDistance field.
        static const char* name()
        {
            return "totalDistance";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavOdoFields::DistanceStd field.
    struct DistanceStdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavOdoFields::DistanceStd field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavOdoFields::DistanceStd field.
        static const char* name()
        {
            return "distanceStd";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavOdo message.
/// @see ublox::message::NavOdo
struct NavOdoCommon
{
    /// @brief Name of the @ref ublox::message::NavOdo message.
    static const char* name()
    {
        return "NAV-ODO";
    }
    
};

} // namespace message

} // namespace ublox


