// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavHpposecef message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/EcefHPCommon.h"
#include "ublox/field/EcefXCommon.h"
#include "ublox/field/EcefYCommon.h"
#include "ublox/field/EcefZCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavHpposecef message.
/// @see ublox::message::NavHpposecefFields
struct NavHpposecefFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavHpposecefFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::EcefX field.
    using EcefXCommon = ublox::field::EcefXCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::EcefY field.
    using EcefYCommon = ublox::field::EcefYCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::EcefZ field.
    using EcefZCommon = ublox::field::EcefZCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::EcefXHp field.
    struct EcefXHpCommon : public ublox::field::EcefHPCommon
    {
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::EcefXHp field.
        static const char* name()
        {
            return "ecefXHp";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::EcefYHp field.
    struct EcefYHpCommon : public ublox::field::EcefHPCommon
    {
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::EcefYHp field.
        static const char* name()
        {
            return "ecefYHp";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::EcefZHp field.
    struct EcefZHpCommon : public ublox::field::EcefHPCommon
    {
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::EcefZHp field.
        static const char* name()
        {
            return "ecefZHp";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavHpposecefFields::PAcc field.
    struct PAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavHpposecefFields::PAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavHpposecefFields::PAcc field.
        static const char* name()
        {
            return "pAcc";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavHpposecef message.
/// @see ublox::message::NavHpposecef
struct NavHpposecefCommon
{
    /// @brief Name of the @ref ublox::message::NavHpposecef message.
    static const char* name()
    {
        return "NAV-HPPOSECEF";
    }
    
};

} // namespace message

} // namespace ublox


