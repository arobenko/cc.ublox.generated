// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAop message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAop message.
/// @see ublox::message::AidAopFields
struct AidAopFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAopFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAopFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAopFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::AidAopFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::AidAopFields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::AidAopFields::Optionals field.
    struct OptionalsMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrap field.
        struct OptionalsWrapMembersCommon
        {
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional0 field.
            struct Optional0Common
            {
                /// @brief Name of the @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional0 field.
                static const char* name()
                {
                    return "optional0";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional1 field.
            struct Optional1Common
            {
                /// @brief Name of the @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional1 field.
                static const char* name()
                {
                    return "optional1";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional2 field.
            struct Optional2Common
            {
                /// @brief Name of the @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional2 field.
                static const char* name()
                {
                    return "optional2";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrap field.
        struct OptionalsWrapCommon
        {
            /// @brief Name of the @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrap field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::AidAopFields::Optionals field.
    struct OptionalsCommon
    {
        /// @brief Name of the @ref ublox::message::AidAopFields::Optionals field.
        static const char* name()
        {
            return "optionals";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAop message.
/// @see ublox::message::AidAop
struct AidAopCommon
{
    /// @brief Name of the @ref ublox::message::AidAop message.
    static const char* name()
    {
        return "AID-AOP";
    }
    
};

} // namespace message

} // namespace ublox


