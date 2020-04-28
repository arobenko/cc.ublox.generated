// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAlpsrv message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAlpsrv message.
/// @see ublox::message::AidAlpsrvFields
struct AidAlpsrvFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::IdSize field.
    struct IdSizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::IdSize field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::IdSize field.
        static const char* name()
        {
            return "idSize";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::Ofs field.
    struct OfsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::Ofs field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Ofs field.
        static const char* name()
        {
            return "ofs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::Size field.
    struct SizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::Size field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Size field.
        static const char* name()
        {
            return "size";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::FileId field.
    struct FileIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::FileId field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::FileId field.
        static const char* name()
        {
            return "fileId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::DataSize field.
    struct DataSizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::DataSize field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::DataSize field.
        static const char* name()
        {
            return "dataSize";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::Id1 field.
    struct Id1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::Id1 field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Id1 field.
        static const char* name()
        {
            return "id1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::Id2 field.
    struct Id2Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::Id2 field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Id2 field.
        static const char* name()
        {
            return "id2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlpsrvFields::Id3 field.
    struct Id3Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlpsrvFields::Id3 field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Id3 field.
        static const char* name()
        {
            return "id3";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::AidAlpsrvFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::AidAlpsrvFields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAlpsrv message.
/// @see ublox::message::AidAlpsrv
struct AidAlpsrvCommon
{
    /// @brief Name of the @ref ublox::message::AidAlpsrv message.
    static const char* name()
    {
        return "AID-ALPSRV";
    }
    
};

} // namespace message

} // namespace ublox


