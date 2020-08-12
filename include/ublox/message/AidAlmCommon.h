// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAlm message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAlm message.
/// @see ublox::message::AidAlmFields
struct AidAlmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlmFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlmFields::Svid field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::AidAlmFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAlmFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAlmFields::Week field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::AidAlmFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::AidAlmFields::Dwrd field.
    struct DwrdMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::AidAlmFields::DwrdMembers::List list.
        struct ListMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::AidAlmFields::DwrdMembers::ListMembers::Element field.
            struct ElementCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::AidAlmFields::DwrdMembers::ListMembers::Element field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::AidAlmFields::DwrdMembers::ListMembers::Element field.
                static const char* name()
                {
                    return "element";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::AidAlmFields::DwrdMembers::List field.
        struct ListCommon
        {
            /// @brief Name of the @ref ublox::message::AidAlmFields::DwrdMembers::List field.
            static const char* name()
            {
                return "dwrd";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::AidAlmFields::Dwrd field.
    struct DwrdCommon
    {
        /// @brief Name of the @ref ublox::message::AidAlmFields::Dwrd field.
        static const char* name()
        {
            return "dwrd";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAlm message.
/// @see ublox::message::AidAlm
struct AidAlmCommon
{
    /// @brief Name of the @ref ublox::message::AidAlm message.
    static const char* name()
    {
        return "AID-ALM";
    }
    
};

} // namespace message

} // namespace ublox


