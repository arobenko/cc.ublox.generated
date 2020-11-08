// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgHnr message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgHnr message.
/// @see ublox::message::CfgHnrFields
struct CfgHnrFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgHnrFields::HighNavRate field.
    struct HighNavRateCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgHnrFields::HighNavRate field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgHnrFields::HighNavRate field.
        static const char* name()
        {
            return "highNavRate";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgHnrFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::CfgHnrFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgHnr message.
/// @see ublox::message::CfgHnr
struct CfgHnrCommon
{
    /// @brief Name of the @ref ublox::message::CfgHnr message.
    static const char* name()
    {
        return "CFG-HNR";
    }
    
};

} // namespace message

} // namespace ublox


