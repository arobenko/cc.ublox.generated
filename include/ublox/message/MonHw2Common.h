// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonHw2 message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "ublox/field/Res3Common.h"
#include "ublox/field/Res4Common.h"
#include "ublox/field/Res8Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonHw2 message.
/// @see ublox::message::MonHw2Fields
struct MonHw2FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::OfsI field.
    struct OfsICommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonHw2Fields::OfsI field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MonHw2Fields::OfsI field.
        static const char* name()
        {
            return "ofsI";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::MagI field.
    struct MagICommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonHw2Fields::MagI field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonHw2Fields::MagI field.
        static const char* name()
        {
            return "magI";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::OfsQ field.
    struct OfsQCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonHw2Fields::OfsQ field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MonHw2Fields::OfsQ field.
        static const char* name()
        {
            return "ofsQ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::MagQ field.
    struct MagQCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonHw2Fields::MagQ field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonHw2Fields::MagQ field.
        static const char* name()
        {
            return "magQ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::CfgSource field.
    struct CfgSourceCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonHw2Fields::CfgSource field.
        enum class ValueType : std::uint8_t
        {
            FlashImage = 102, ///< value @b FlashImage.
            OTP = 111, ///< value @b OTP.
            ConfigPins = 112, ///< value @b ConfigPins.
            ROM = 114, ///< value @b ROM.
            
            // --- Extra values generated for convenience ---
            FirstValue = 102, ///< First defined value.
            LastValue = 114, ///< Last defined value.
            ValuesLimit = 115, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::MonHw2Fields::CfgSource field.
        static const char* name()
        {
            return "cfgSource";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            using NameInfo = std::pair<ValueType, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(ValueType::FlashImage, "FlashImage"),
                std::make_pair(ValueType::OTP, "OTP"),
                std::make_pair(ValueType::ConfigPins, "ConfigPins"),
                std::make_pair(ValueType::ROM, "ROM")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHw2Fields::CfgSource field.
    using CfgSourceVal = CfgSourceCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::MonHw2Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::LowLevCfg field.
    struct LowLevCfgCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonHw2Fields::LowLevCfg field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MonHw2Fields::LowLevCfg field.
        static const char* name()
        {
            return "lowLevCfg";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res8Common
    {
        /// @brief Name of the @ref ublox::message::MonHw2Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::PostStatus field.
    struct PostStatusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonHw2Fields::PostStatus field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MonHw2Fields::PostStatus field.
        static const char* name()
        {
            return "postStatus";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonHw2Fields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MonHw2Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonHw2 message.
/// @see ublox::message::MonHw2
struct MonHw2Common
{
    /// @brief Name of the @ref ublox::message::MonHw2 message.
    static const char* name()
    {
        return "MON-HW2";
    }
    
};

} // namespace message

} // namespace ublox


