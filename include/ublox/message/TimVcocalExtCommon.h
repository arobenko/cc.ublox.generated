// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimVcocalExt message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimVcocalExt message.
/// @see ublox::message::TimVcocalExtFields
struct TimVcocalExtFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalExtFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalExtFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::OscId field.
    struct OscIdCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimVcocalExtFields::OscId field.
        enum class ValueType : std::uint8_t
        {
            Internal = 0, ///< value @b Internal.
            External = 1, ///< value @b External.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::OscId field.
        static const char* name()
        {
            return "oscId";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Internal",
                "External"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalExtFields::OscId field.
    using OscIdVal = OscIdCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::SrcId field.
    struct SrcIdCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimVcocalExtFields::SrcId field.
        enum class ValueType : std::uint8_t
        {
            Internal = 0, ///< value @b Internal.
            GNSS = 1, ///< value @b GNSS.
            EXTINT0 = 2, ///< value @b EXTINT0.
            EXTINT1 = 3, ///< value @b EXTINT1.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::SrcId field.
        static const char* name()
        {
            return "srcId";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Internal",
                "GNSS",
                "EXTINT0",
                "EXTINT1"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalExtFields::SrcId field.
    using SrcIdVal = SrcIdCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::Raw0 field.
    struct Raw0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalExtFields::Raw0 field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::Raw0 field.
        static const char* name()
        {
            return "raw0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::Raw1 field.
    struct Raw1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalExtFields::Raw1 field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::Raw1 field.
        static const char* name()
        {
            return "raw1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalExtFields::MaxStepSize field.
    struct MaxStepSizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalExtFields::MaxStepSize field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalExtFields::MaxStepSize field.
        static const char* name()
        {
            return "maxStepSize";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimVcocalExt message.
/// @see ublox::message::TimVcocalExt
struct TimVcocalExtCommon
{
    /// @brief Name of the @ref ublox::message::TimVcocalExt message.
    static const char* name()
    {
        return "TIM-VCOCAL (Extended)";
    }
    
};

} // namespace message

} // namespace ublox


