// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimSvin message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimSvin message.
/// @see ublox::message::TimSvinFields
struct TimSvinFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::Dur field.
    struct DurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::Dur field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::Dur field.
        static const char* name()
        {
            return "dur";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::MeanX field.
    struct MeanXCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::MeanX field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::MeanX field.
        static const char* name()
        {
            return "meanX";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::MeanY field.
    struct MeanYCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::MeanY field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::MeanY field.
        static const char* name()
        {
            return "meanY";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::MeanZ field.
    struct MeanZCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::MeanZ field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::MeanZ field.
        static const char* name()
        {
            return "meanZ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::MeanV field.
    struct MeanVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::MeanV field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::MeanV field.
        static const char* name()
        {
            return "meanV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::Obs field.
    struct ObsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::Obs field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::Obs field.
        static const char* name()
        {
            return "obs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::Valid field.
    struct ValidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::Valid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::Active field.
    struct ActiveCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimSvinFields::Active field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimSvinFields::Active field.
        static const char* name()
        {
            return "active";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimSvinFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::TimSvinFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimSvin message.
/// @see ublox::message::TimSvin
struct TimSvinCommon
{
    /// @brief Name of the @ref ublox::message::TimSvin message.
    static const char* name()
    {
        return "TIM-SVIN";
    }
    
};

} // namespace message

} // namespace ublox


