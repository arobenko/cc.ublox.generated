// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmSfrbx message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmSfrbx message.
/// @see ublox::message::RxmSfrbxFields
struct RxmSfrbxFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::GnssId field.
    using GnssIdCommon = ublox::field::GnssIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSfrbxFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::FreqId field.
    struct FreqIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSfrbxFields::FreqId field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::FreqId field.
        static const char* name()
        {
            return "freqId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::NumWords field.
    struct NumWordsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSfrbxFields::NumWords field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::NumWords field.
        static const char* name()
        {
            return "numWords";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSfrbxFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbxFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmSfrbxFields::Dwrd list.
    struct DwrdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::RxmSfrbxFields::DwrdMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::RxmSfrbxFields::DwrdMembers::Element field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::RxmSfrbxFields::DwrdMembers::Element field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmSfrbxFields::Dwrd field.
    struct DwrdCommon
    {
        /// @brief Name of the @ref ublox::message::RxmSfrbxFields::Dwrd field.
        static const char* name()
        {
            return "dwrd";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmSfrbx message.
/// @see ublox::message::RxmSfrbx
struct RxmSfrbxCommon
{
    /// @brief Name of the @ref ublox::message::RxmSfrbx message.
    static const char* name()
    {
        return "RXM-SFRBX";
    }
    
};

} // namespace message

} // namespace ublox


