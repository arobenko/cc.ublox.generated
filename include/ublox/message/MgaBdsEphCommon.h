// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaBdsEph message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaBdsEph message.
/// @see ublox::message::MgaBdsEphFields
struct MgaBdsEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::SatH1 field.
    struct SatH1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::SatH1 field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::SatH1 field.
        static const char* name()
        {
            return "SatH1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::IODC field.
    struct IODCCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::IODC field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::IODC field.
        static const char* name()
        {
            return "IODC";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::A2 field.
    struct A2Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::A2 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::A2 field.
        static const char* name()
        {
            return "a2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::A1 field.
    struct A1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::A1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::A1 field.
        static const char* name()
        {
            return "a1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::A0 field.
    struct A0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::A0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::A0 field.
        static const char* name()
        {
            return "a0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Toc field.
    struct TocCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Toc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Toc field.
        static const char* name()
        {
            return "toc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::TGD1 field.
    struct TGD1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::TGD1 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::TGD1 field.
        static const char* name()
        {
            return "TGD1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::URAI field.
    struct URAICommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::URAI field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::URAI field.
        static const char* name()
        {
            return "URAI";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::IODE field.
    struct IODECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::IODE field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::IODE field.
        static const char* name()
        {
            return "IODE";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Toe field.
    struct ToeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Toe field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Toe field.
        static const char* name()
        {
            return "toe";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::SqrtA field.
    struct SqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::SqrtA field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::SqrtA field.
        static const char* name()
        {
            return "sqrtA";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::E field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::E field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Omega field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Omega field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Deltan field.
    struct DeltanCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Deltan field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Deltan field.
        static const char* name()
        {
            return "Deltan";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::IDOT field.
    struct IDOTCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::IDOT field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::IDOT field.
        static const char* name()
        {
            return "IDOT";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::M0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::M0 field.
        static const char* name()
        {
            return "M0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Omega0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Omega0 field.
        static const char* name()
        {
            return "Omega0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::OmegaDot field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::OmegaDot field.
        static const char* name()
        {
            return "OmegaDot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::I0 field.
    struct I0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::I0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::I0 field.
        static const char* name()
        {
            return "i0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Cuc field.
    struct CucCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Cuc field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Cuc field.
        static const char* name()
        {
            return "Cuc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Cus field.
    struct CusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Cus field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Cus field.
        static const char* name()
        {
            return "Cus";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Crc field.
    struct CrcCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Crc field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Crc field.
        static const char* name()
        {
            return "Crc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Crs field.
    struct CrsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Crs field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Crs field.
        static const char* name()
        {
            return "Crs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Cic field.
    struct CicCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Cic field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Cic field.
        static const char* name()
        {
            return "Cic";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Cis field.
    struct CisCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaBdsEphFields::Cis field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Cis field.
        static const char* name()
        {
            return "Cis";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaBdsEphFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaBdsEphFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaBdsEph message.
/// @see ublox::message::MgaBdsEph
struct MgaBdsEphCommon
{
    /// @brief Name of the @ref ublox::message::MgaBdsEph message.
    static const char* name()
    {
        return "MGA-BDS-EPH";
    }
    
};

} // namespace message

} // namespace ublox


