// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavVelned message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/HeadingCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/SAccCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavVelned message.
/// @see ublox::message::NavVelnedFields
struct NavVelnedFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::VelN field.
    struct VelNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavVelnedFields::VelN field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavVelnedFields::VelN field.
        static const char* name()
        {
            return "velN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::VelE field.
    struct VelECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavVelnedFields::VelE field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavVelnedFields::VelE field.
        static const char* name()
        {
            return "velE";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::VelD field.
    struct VelDCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavVelnedFields::VelD field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavVelnedFields::VelD field.
        static const char* name()
        {
            return "velD";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::Speed field.
    struct SpeedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavVelnedFields::Speed field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavVelnedFields::Speed field.
        static const char* name()
        {
            return "speed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::GSpeed field.
    struct GSpeedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavVelnedFields::GSpeed field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavVelnedFields::GSpeed field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::Heading field.
    using HeadingCommon = ublox::field::HeadingCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::SAcc field.
    using SAccCommon = ublox::field::SAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelnedFields::CAcc field.
    struct CAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavVelnedFields::CAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavVelnedFields::CAcc field.
        static const char* name()
        {
            return "cAcc";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavVelned message.
/// @see ublox::message::NavVelned
struct NavVelnedCommon
{
    /// @brief Name of the @ref ublox::message::NavVelned message.
    static const char* name()
    {
        return "NAV-VELNED";
    }
    
};

} // namespace message

} // namespace ublox


