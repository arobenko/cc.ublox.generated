// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimVcocal message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimVcocal message.
/// @see ublox::message::TimVcocalFields
struct TimVcocalFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalFields::OscId field.
    struct OscIdCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimVcocalFields::OscId field.
        enum class ValueType : std::uint8_t
        {
            Internal = 0, ///< value @b Internal
            External = 1, ///< value @b External
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::TimVcocalFields::OscId field.
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
    ///     @ref ublox::message::TimVcocalFields::OscId field.
    using OscIdVal = OscIdCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::TimVcocalFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalFields::GainUncertainty field.
    struct GainUncertaintyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalFields::GainUncertainty field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalFields::GainUncertainty field.
        static const char* name()
        {
            return "gainUncertainty";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVcocalFields::GainVco field.
    struct GainVcoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVcocalFields::GainVco field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimVcocalFields::GainVco field.
        static const char* name()
        {
            return "gainVco";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimVcocal message.
/// @see ublox::message::TimVcocal
struct TimVcocalCommon
{
    /// @brief Name of the @ref ublox::message::TimVcocal message.
    static const char* name()
    {
        return "TIM-VCOCAL";
    }
    
};

} // namespace message

} // namespace ublox


