// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGloAlm message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGloAlm message.
/// @see ublox::message::MgaGloAlmFields
struct MgaGloAlmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::N field.
    struct NCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::N field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::N field.
        static const char* name()
        {
            return "N";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::M field.
    struct MCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::M field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::M field.
        static const char* name()
        {
            return "M";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::C field.
    struct CCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::C field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::C field.
        static const char* name()
        {
            return "C";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Tau field.
    struct TauCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Tau field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Tau field.
        static const char* name()
        {
            return "tau";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Epsilon field.
    struct EpsilonCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Epsilon field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Epsilon field.
        static const char* name()
        {
            return "epsilon";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Lambda field.
    struct LambdaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Lambda field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Lambda field.
        static const char* name()
        {
            return "lambda";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::DeltaI field.
    struct DeltaICommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::DeltaI field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::DeltaI field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::TLambda field.
    struct TLambdaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::TLambda field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::TLambda field.
        static const char* name()
        {
            return "tLambda";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::DeltaT field.
    struct DeltaTCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::DeltaT field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::DeltaT field.
        static const char* name()
        {
            return "deltaT";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::DeltaDT field.
    struct DeltaDTCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::DeltaDT field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::DeltaDT field.
        static const char* name()
        {
            return "deltaDT";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::H field.
    struct HCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::H field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::H field.
        static const char* name()
        {
            return "H";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloAlmFields::Omega field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Omega field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloAlmFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaGloAlmFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGloAlm message.
/// @see ublox::message::MgaGloAlm
struct MgaGloAlmCommon
{
    /// @brief Name of the @ref ublox::message::MgaGloAlm message.
    static const char* name()
    {
        return "MGA-GLO-ALM";
    }
    
};

} // namespace message

} // namespace ublox


