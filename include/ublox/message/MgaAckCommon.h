// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaAck message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaAck message.
/// @see ublox::message::MgaAckFields
struct MgaAckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAckFields::Type field.
    struct TypeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaAckFields::Type field.
        enum class ValueType : std::uint8_t
        {
            NotUsed = 0, ///< value @b NotUsed
            Accepted = 1, ///< value @b Accepted
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::MgaAckFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "NotUsed",
                "Accepted"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MgaAckFields::Type field.
    using TypeVal = TypeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAckFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaAckFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaAckFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAckFields::InfoCode field.
    struct InfoCodeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaAckFields::InfoCode field.
        enum class ValueType : std::uint8_t
        {
            Accepted = 0, ///< value @b Accepted
            TimeNotKnown = 1, ///< value @b TimeNotKnown
            BadVersion = 2, ///< value @b BadVersion
            BadSize = 3, ///< value @b BadSize
            StorageError = 4, ///< value @b StorageError
            NotReady = 5, ///< value @b NotReady
            UnknownType = 6, ///< value @b UnknownType
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 6, ///< Last defined value.
            ValuesLimit = 7, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::MgaAckFields::InfoCode field.
        static const char* name()
        {
            return "infoCode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Accepted",
                "TimeNotKnown",
                "BadVersion",
                "BadSize",
                "StorageError",
                "NotReady",
                "UnknownType"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MgaAckFields::InfoCode field.
    using InfoCodeVal = InfoCodeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAckFields::MsgId field.
    struct MsgIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaAckFields::MsgId field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaAckFields::MsgId field.
        static const char* name()
        {
            return "msgId";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaAckFields::MsgPayloadStart field.
    struct MsgPayloadStartCommon
    {
        /// @brief Name of the @ref ublox::message::MgaAckFields::MsgPayloadStart field.
        static const char* name()
        {
            return "msgPayloadStart";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaAck message.
/// @see ublox::message::MgaAck
struct MgaAckCommon
{
    /// @brief Name of the @ref ublox::message::MgaAck message.
    static const char* name()
    {
        return "MGA-ACK";
    }
    
};

} // namespace message

} // namespace ublox


