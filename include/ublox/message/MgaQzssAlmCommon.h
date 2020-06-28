// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaQzssAlm message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaQzssAlm message.
/// @see ublox::message::MgaQzssAlmFields
struct MgaQzssAlmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::SvHealth field.
    struct SvHealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::SvHealth field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::SvHealth field.
        static const char* name()
        {
            return "svHealth";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::E field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::E field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::AlmWNa field.
    struct AlmWNaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::AlmWNa field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::AlmWNa field.
        static const char* name()
        {
            return "almWNa";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Toa field.
    struct ToaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Toa field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Toa field.
        static const char* name()
        {
            return "toa";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::DeltaI field.
    struct DeltaICommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::DeltaI field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::DeltaI field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::OmegaDot field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::OmegaDot field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::SqrtA field.
    struct SqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::SqrtA field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::SqrtA field.
        static const char* name()
        {
            return "sqrtA";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Omega0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Omega0 field.
        static const char* name()
        {
            return "omega0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Omega field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Omega field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::M0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::M0 field.
        static const char* name()
        {
            return "m0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Af0 field.
    struct Af0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Af0 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Af0 field.
        static const char* name()
        {
            return "af0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Af1 field.
    struct Af1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssAlmFields::Af1 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Af1 field.
        static const char* name()
        {
            return "af1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssAlmFields::Reserve1 field.
    struct Reserve1Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaQzssAlmFields::Reserve1 field.
        static const char* name()
        {
            return "reserve1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaQzssAlm message.
/// @see ublox::message::MgaQzssAlm
struct MgaQzssAlmCommon
{
    /// @brief Name of the @ref ublox::message::MgaQzssAlm message.
    static const char* name()
    {
        return "MGA-QZSS-ALM";
    }
    
};

} // namespace message

} // namespace ublox


