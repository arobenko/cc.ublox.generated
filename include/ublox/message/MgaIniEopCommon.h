// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaIniEop message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaIniEop message.
/// @see ublox::message::MgaIniEopFields
struct MgaIniEopFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::D2kRef field.
    struct D2kRefCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::D2kRef field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::D2kRef field.
        static const char* name()
        {
            return "d2kRef";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::D2kMax field.
    struct D2kMaxCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::D2kMax field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::D2kMax field.
        static const char* name()
        {
            return "d2kMax";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::XpP0 field.
    struct XpP0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::XpP0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::XpP0 field.
        static const char* name()
        {
            return "xpP0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::XpP1 field.
    struct XpP1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::XpP1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::XpP1 field.
        static const char* name()
        {
            return "xpP1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::YpP0 field.
    struct YpP0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::YpP0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::YpP0 field.
        static const char* name()
        {
            return "ypP0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::YpP1 field.
    struct YpP1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::YpP1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::YpP1 field.
        static const char* name()
        {
            return "ypP1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::DUT1 field.
    struct DUT1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::DUT1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::DUT1 field.
        static const char* name()
        {
            return "dUT1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniEopFields::DdUT1 field.
    struct DdUT1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniEopFields::DdUT1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::DdUT1 field.
        static const char* name()
        {
            return "ddUT1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MgaIniEopFields::Reserved2 list.
    struct Reserved2MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MgaIniEopFields::Reserved2Members::Element field.
        struct ElementCommon : public ublox::field::Res4Common
        {
            /// @brief Name of the @ref ublox::message::MgaIniEopFields::Reserved2Members::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaIniEopFields::Reserved2 field.
    struct Reserved2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniEopFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaIniEop message.
/// @see ublox::message::MgaIniEop
struct MgaIniEopCommon
{
    /// @brief Name of the @ref ublox::message::MgaIniEop message.
    static const char* name()
    {
        return "MGA-BDS-EOP";
    }
    
};

} // namespace message

} // namespace ublox


