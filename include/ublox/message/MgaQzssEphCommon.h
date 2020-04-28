// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaQzssEph message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaQzssEph message.
/// @see ublox::message::MgaQzssEphFields
struct MgaQzssEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::FitInterval field.
    struct FitIntervalCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::FitInterval field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::FitInterval field.
        static const char* name()
        {
            return "fitInterval";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::UraIndex field.
    struct UraIndexCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::UraIndex field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::UraIndex field.
        static const char* name()
        {
            return "uraIndex";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::SvHealth field.
    struct SvHealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::SvHealth field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::SvHealth field.
        static const char* name()
        {
            return "svHealth";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Tgd field.
    struct TgdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Tgd field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Tgd field.
        static const char* name()
        {
            return "tgd";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Iodc field.
    struct IodcCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Iodc field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Iodc field.
        static const char* name()
        {
            return "iodc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Toc field.
    struct TocCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Toc field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Toc field.
        static const char* name()
        {
            return "toc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Af2 field.
    struct Af2Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Af2 field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Af2 field.
        static const char* name()
        {
            return "af2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Af1 field.
    struct Af1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Af1 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Af1 field.
        static const char* name()
        {
            return "af1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Af0 field.
    struct Af0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Af0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Af0 field.
        static const char* name()
        {
            return "af0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Crs field.
    struct CrsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Crs field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Crs field.
        static const char* name()
        {
            return "crs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::DeltaN field.
    struct DeltaNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::DeltaN field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::DeltaN field.
        static const char* name()
        {
            return "deltaN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::M0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::M0 field.
        static const char* name()
        {
            return "m0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Cuc field.
    struct CucCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Cuc field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Cuc field.
        static const char* name()
        {
            return "cuc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Cus field.
    struct CusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Cus field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Cus field.
        static const char* name()
        {
            return "cus";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::E field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::E field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::SqrtA field.
    struct SqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::SqrtA field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::SqrtA field.
        static const char* name()
        {
            return "sqrtA";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Toe field.
    struct ToeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Toe field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Toe field.
        static const char* name()
        {
            return "toe";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Cic field.
    struct CicCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Cic field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Cic field.
        static const char* name()
        {
            return "cic";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Omega0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Omega0 field.
        static const char* name()
        {
            return "omega0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Cis field.
    struct CisCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Cis field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Cis field.
        static const char* name()
        {
            return "cis";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Crc field.
    struct CrcCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Crc field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Crc field.
        static const char* name()
        {
            return "crc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::I0 field.
    struct I0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::I0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::I0 field.
        static const char* name()
        {
            return "i0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Omega field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Omega field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::OmegaDot field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::OmegaDot field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Idot field.
    struct IdotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaQzssEphFields::Idot field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Idot field.
        static const char* name()
        {
            return "idot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaQzssEphFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaQzssEphFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaQzssEph message.
/// @see ublox::message::MgaQzssEph
struct MgaQzssEphCommon
{
    /// @brief Name of the @ref ublox::message::MgaQzssEph message.
    static const char* name()
    {
        return "MGA-QZSS-EPH";
    }
    
};

} // namespace message

} // namespace ublox


