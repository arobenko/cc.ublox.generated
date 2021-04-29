// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgFxn message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgFxn message.
/// @see ublox::message::CfgFxnFields
struct CfgFxnFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgFxnFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgFxnFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgFxnFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "sleep",
                nullptr,
                "absAlign",
                "onOff"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::TReacq field.
    struct TReacqCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::TReacq field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::TReacq field.
        static const char* name()
        {
            return "tReacq";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::TAcq field.
    struct TAcqCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::TAcq field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::TAcq field.
        static const char* name()
        {
            return "tAcq";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::TReacqOff field.
    struct TReacqOffCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::TReacqOff field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::TReacqOff field.
        static const char* name()
        {
            return "tReacqOff";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::TAcqOff field.
    struct TAcqOffCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::TAcqOff field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::TAcqOff field.
        static const char* name()
        {
            return "tAcqOff";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::TOn field.
    struct TOnCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::TOn field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::TOn field.
        static const char* name()
        {
            return "tOn";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::TOff field.
    struct TOffCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::TOff field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::TOff field.
        static const char* name()
        {
            return "tOff";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::Res field.
    struct ResCommon : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::CfgFxnFields::Res field.
        static const char* name()
        {
            return "res";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgFxnFields::BaseTow field.
    struct BaseTowCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgFxnFields::BaseTow field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgFxnFields::BaseTow field.
        static const char* name()
        {
            return "baseTow";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgFxn message.
/// @see ublox::message::CfgFxn
struct CfgFxnCommon
{
    /// @brief Name of the @ref ublox::message::CfgFxn message.
    static const char* name()
    {
        return "CFG-FXN";
    }
    
};

} // namespace message

} // namespace ublox


