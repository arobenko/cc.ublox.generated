// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaFlashAck message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaFlashAck message.
/// @see ublox::message::MgaFlashAckFields
struct MgaFlashAckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashAckFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashAckFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashAckFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashAckFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashAckFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashAckFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashAckFields::Ack field.
    struct AckCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaFlashAckFields::Ack field.
        enum class ValueType : std::uint8_t
        {
            Ack = 0, ///< value @b Ack.
            NakRetransmit = 1, ///< value @b NakRetransmit.
            NakGiveUp = 2, ///< value @b NakGiveUp.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::MgaFlashAckFields::Ack field.
        static const char* name()
        {
            return "ack";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Ack",
                "NakRetransmit",
                "NakGiveUp"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MgaFlashAckFields::Ack field.
    using AckVal = AckCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashAckFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaFlashAckFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashAckFields::Sequence field.
    struct SequenceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashAckFields::Sequence field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashAckFields::Sequence field.
        static const char* name()
        {
            return "sequence";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaFlashAck message.
/// @see ublox::message::MgaFlashAck
struct MgaFlashAckCommon
{
    /// @brief Name of the @ref ublox::message::MgaFlashAck message.
    static const char* name()
    {
        return "MGA-FLASH-ACK";
    }
    
};

} // namespace message

} // namespace ublox


