// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAlpStatus message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAlpStatus message.
/// @see ublox::message::AidAlpStatusFields
struct AidAlpStatusFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpStatusFields::Status field.
    struct StatusCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::AidAlpStatusFields::Status field.
        enum class ValueType : std::uint8_t
        {
            nak = 0, ///< value @b nak.
            ack = 1, ///< value @b ack.
            
            // --- Extra values generated for convenience ---
            firstValue = 0, ///< First defined value.
            lastValue = 1, ///< Last defined value.
            valuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::AidAlpStatusFields::Status field.
        static const char* name()
        {
            return "status";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "nak",
                "ack"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::AidAlpStatusFields::Status field.
    using StatusVal = StatusCommon::ValueType;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAlpStatus message.
/// @see ublox::message::AidAlpStatus
struct AidAlpStatusCommon
{
    /// @brief Name of the @ref ublox::message::AidAlpStatus message.
    static const char* name()
    {
        return "AID-ALP (Status)";
    }
    
};

} // namespace message

} // namespace ublox


