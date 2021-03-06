// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGalAlm message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGalAlm message.
/// @see ublox::message::MgaGalAlmFields
struct MgaGalAlmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Ioda field.
    struct IodaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Ioda field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Ioda field.
        static const char* name()
        {
            return "ioda";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::AlmWNa field.
    struct AlmWNaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::AlmWNa field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::AlmWNa field.
        static const char* name()
        {
            return "almWNa";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Toa field.
    struct ToaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Toa field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Toa field.
        static const char* name()
        {
            return "toa";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::DeltaSqrtA field.
    struct DeltaSqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::DeltaSqrtA field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::DeltaSqrtA field.
        static const char* name()
        {
            return "deltaSqrtA";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::E field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::E field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::DeltaI field.
    struct DeltaICommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::DeltaI field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::DeltaI field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Omega0 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Omega0 field.
        static const char* name()
        {
            return "omega0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::OmegaDot field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::OmegaDot field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Omega field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Omega field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::M0 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::M0 field.
        static const char* name()
        {
            return "m0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Af0 field.
    struct Af0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Af0 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Af0 field.
        static const char* name()
        {
            return "af0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Af1 field.
    struct Af1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::Af1 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Af1 field.
        static const char* name()
        {
            return "af1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::HealthE1B field.
    struct HealthE1BCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::HealthE1B field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::HealthE1B field.
        static const char* name()
        {
            return "healthE1B";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::HealthE5b field.
    struct HealthE5bCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalAlmFields::HealthE5b field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::HealthE5b field.
        static const char* name()
        {
            return "healthE5b";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalAlmFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaGalAlmFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGalAlm message.
/// @see ublox::message::MgaGalAlm
struct MgaGalAlmCommon
{
    /// @brief Name of the @ref ublox::message::MgaGalAlm message.
    static const char* name()
    {
        return "MGA-GAL-ALM";
    }
    
};

} // namespace message

} // namespace ublox


