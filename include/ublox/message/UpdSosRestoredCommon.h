// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::UpdSosRestored message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::UpdSosRestored message.
/// @see ublox::message::UpdSosRestoredFields
struct UpdSosRestoredFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosRestoredFields::Cmd field.
    struct CmdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::UpdSosRestoredFields::Cmd field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::UpdSosRestoredFields::Cmd field.
        static const char* name()
        {
            return "cmd";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosRestoredFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::UpdSosRestoredFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosRestoredFields::Response field.
    struct ResponseCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::UpdSosRestoredFields::Response field.
        enum class ValueType : std::uint8_t
        {
            Unknown = 0, ///< value @b Unknown.
            Failed = 1, ///< value @b Failed.
            Restored = 2, ///< value @b Restored.
            NotRestored = 3, ///< value @b NotRestored.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::UpdSosRestoredFields::Response field.
        static const char* name()
        {
            return "response";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Unknown",
                "Failed",
                "Restored",
                "NotRestored"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::UpdSosRestoredFields::Response field.
    using ResponseVal = ResponseCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosRestoredFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::UpdSosRestoredFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::UpdSosRestored message.
/// @see ublox::message::UpdSosRestored
struct UpdSosRestoredCommon
{
    /// @brief Name of the @ref ublox::message::UpdSosRestored message.
    static const char* name()
    {
        return "UPD-SOS (Restored)";
    }
    
};

} // namespace message

} // namespace ublox


