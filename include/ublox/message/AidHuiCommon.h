// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidHui message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidHui message.
/// @see ublox::message::AidHuiFields
struct AidHuiFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::Health field.
    struct HealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::Health field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::Health field.
        static const char* name()
        {
            return "health";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcA0 field.
    struct UtcA0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcA0 field.
        using ValueType = double;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcA0 field.
        static const char* name()
        {
            return "utcA0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcA1 field.
    struct UtcA1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcA1 field.
        using ValueType = double;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcA1 field.
        static const char* name()
        {
            return "utcA1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcTOW field.
    struct UtcTOWCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcTOW field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcTOW field.
        static const char* name()
        {
            return "utcTOW";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcWNT field.
    struct UtcWNTCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcWNT field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcWNT field.
        static const char* name()
        {
            return "utcWNT";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcLS field.
    struct UtcLSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcLS field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcLS field.
        static const char* name()
        {
            return "utcLS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcWNF field.
    struct UtcWNFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcWNF field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcWNF field.
        static const char* name()
        {
            return "utcWNF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcDN field.
    struct UtcDNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcDN field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcDN field.
        static const char* name()
        {
            return "utcDN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcLSF field.
    struct UtcLSFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcLSF field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcLSF field.
        static const char* name()
        {
            return "utcLSF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::UtcSpare field.
    struct UtcSpareCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::UtcSpare field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::UtcSpare field.
        static const char* name()
        {
            return "utcSpare";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobA0 field.
    struct KlobA0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobA0 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobA0 field.
        static const char* name()
        {
            return "klobA0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobA1 field.
    struct KlobA1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobA1 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobA1 field.
        static const char* name()
        {
            return "klobA1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobA2 field.
    struct KlobA2Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobA2 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobA2 field.
        static const char* name()
        {
            return "klobA2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobA3 field.
    struct KlobA3Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobA3 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobA3 field.
        static const char* name()
        {
            return "klobA3";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobB0 field.
    struct KlobB0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobB0 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobB0 field.
        static const char* name()
        {
            return "klobB0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobB1 field.
    struct KlobB1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobB1 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobB1 field.
        static const char* name()
        {
            return "klobB1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobB2 field.
    struct KlobB2Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobB2 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobB2 field.
        static const char* name()
        {
            return "klobB2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidHuiFields::KlobB3 field.
    struct KlobB3Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidHuiFields::KlobB3 field.
        using ValueType = float;
    
        /// @brief Name of the @ref ublox::message::AidHuiFields::KlobB3 field.
        static const char* name()
        {
            return "klobB3";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::AidHuiFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::AidHuiFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::AidHuiFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "healthValid",
                "utcValid",
                "klobValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidHui message.
/// @see ublox::message::AidHui
struct AidHuiCommon
{
    /// @brief Name of the @ref ublox::message::AidHui message.
    static const char* name()
    {
        return "AID-HUI";
    }
    
};

} // namespace message

} // namespace ublox


