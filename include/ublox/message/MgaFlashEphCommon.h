// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaFlashEph message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaFlashEph message.
/// @see ublox::message::MgaFlashEphFields
struct MgaFlashEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashEphFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashEphFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashEphFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashEphFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashEphFields::Sequence field.
    struct SequenceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashEphFields::Sequence field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashEphFields::Sequence field.
        static const char* name()
        {
            return "sequence";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaFlashEphFields::Size field.
    struct SizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaFlashEphFields::Size field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaFlashEphFields::Size field.
        static const char* name()
        {
            return "size";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaFlashEphFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::MgaFlashEphFields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaFlashEph message.
/// @see ublox::message::MgaFlashEph
struct MgaFlashEphCommon
{
    /// @brief Name of the @ref ublox::message::MgaFlashEph message.
    static const char* name()
    {
        return "MGA-FLASH-DATA";
    }
    
};

} // namespace message

} // namespace ublox


