// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgTmode message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgTmode message.
/// @see ublox::message::CfgTmodeFields
struct CfgTmodeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::TimeMode field.
    struct TimeModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTmodeFields::TimeMode field.
        enum class ValueType : std::uint32_t
        {
            Disabled = 0, ///< value @b Disabled.
            SurveyIn = 1, ///< value <b>Survey In</b>.
            FixedMode = 2, ///< value <b>Fixed Mode</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::TimeMode field.
        static const char* name()
        {
            return "timeMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Disabled",
                "Survey In",
                "Fixed Mode"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTmodeFields::TimeMode field.
    using TimeModeVal = TimeModeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::FixedPosX field.
    struct FixedPosXCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmodeFields::FixedPosX field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::FixedPosX field.
        static const char* name()
        {
            return "fixedPosX";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::FixedPosY field.
    struct FixedPosYCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmodeFields::FixedPosY field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::FixedPosY field.
        static const char* name()
        {
            return "fixedPosY";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::FixedPosZ field.
    struct FixedPosZCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmodeFields::FixedPosZ field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::FixedPosZ field.
        static const char* name()
        {
            return "fixedPosZ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::FixedPosVar field.
    struct FixedPosVarCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmodeFields::FixedPosVar field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::FixedPosVar field.
        static const char* name()
        {
            return "fixedPosVar";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::SvinMinDur field.
    struct SvinMinDurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmodeFields::SvinMinDur field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::SvinMinDur field.
        static const char* name()
        {
            return "svinMinDur";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTmodeFields::SvinVarLimit field.
    struct SvinVarLimitCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTmodeFields::SvinVarLimit field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTmodeFields::SvinVarLimit field.
        static const char* name()
        {
            return "svinVarLimit";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgTmode message.
/// @see ublox::message::CfgTmode
struct CfgTmodeCommon
{
    /// @brief Name of the @ref ublox::message::CfgTmode message.
    static const char* name()
    {
        return "CFG-TMODE";
    }
    
};

} // namespace message

} // namespace ublox


