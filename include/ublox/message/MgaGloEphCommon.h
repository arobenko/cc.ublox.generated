// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGloEph message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGloEph message.
/// @see ublox::message::MgaGloEphFields
struct MgaGloEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::FT field.
    struct FTCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::FT field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::FT field.
        static const char* name()
        {
            return "FT";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::B field.
    struct BCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::B field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::B field.
        static const char* name()
        {
            return "B";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::M field.
    struct MCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::M field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::M field.
        static const char* name()
        {
            return "M";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::H field.
    struct HCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::H field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::H field.
        static const char* name()
        {
            return "H";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::X field.
    struct XCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::X field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::X field.
        static const char* name()
        {
            return "x";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Y field.
    struct YCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Y field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Y field.
        static const char* name()
        {
            return "y";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Z field.
    struct ZCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Z field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Z field.
        static const char* name()
        {
            return "z";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Dx field.
    struct DxCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Dx field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Dx field.
        static const char* name()
        {
            return "dx";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Dy field.
    struct DyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Dy field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Dy field.
        static const char* name()
        {
            return "dy";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Dz field.
    struct DzCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Dz field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Dz field.
        static const char* name()
        {
            return "dz";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Ddx field.
    struct DdxCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Ddx field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Ddx field.
        static const char* name()
        {
            return "ddx";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Ddy field.
    struct DdyCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Ddy field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Ddy field.
        static const char* name()
        {
            return "ddy";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Ddz field.
    struct DdzCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Ddz field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Ddz field.
        static const char* name()
        {
            return "ddz";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Tb field.
    struct TbCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Tb field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Tb field.
        static const char* name()
        {
            return "tb";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Gamma field.
    struct GammaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Gamma field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Gamma field.
        static const char* name()
        {
            return "gamma";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::E field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::E field.
        static const char* name()
        {
            return "E";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::DeltaTau field.
    struct DeltaTauCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::DeltaTau field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::DeltaTau field.
        static const char* name()
        {
            return "deltaTau";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Tau field.
    struct TauCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloEphFields::Tau field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Tau field.
        static const char* name()
        {
            return "tau";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloEphFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaGloEphFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGloEph message.
/// @see ublox::message::MgaGloEph
struct MgaGloEphCommon
{
    /// @brief Name of the @ref ublox::message::MgaGloEph message.
    static const char* name()
    {
        return "MGA-GLO-EPH";
    }
    
};

} // namespace message

} // namespace ublox


