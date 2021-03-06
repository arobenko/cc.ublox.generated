// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmEph message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmEph message.
/// @see ublox::message::RxmEphFields
struct RxmEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmEphFields::Svid field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmEphFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmEphFields::How field.
    struct HowCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmEphFields::How field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmEphFields::How field.
        static const char* name()
        {
            return "how";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmEphFields::Sfd field.
    struct SfdMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmEphFields::SfdMembers::Lists field.
        struct ListsMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1d list.
            struct Sf1dMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1dMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1dMembers::Element field.
                    using ValueType = std::uint32_t;
                
                    /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1dMembers::Element field.
                    static const char* name()
                    {
                        return "element";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1d field.
            struct Sf1dCommon
            {
                /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1d field.
                static const char* name()
                {
                    return "sf1d";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2d list.
            struct Sf2dMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2dMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2dMembers::Element field.
                    using ValueType = std::uint32_t;
                
                    /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2dMembers::Element field.
                    static const char* name()
                    {
                        return "element";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2d field.
            struct Sf2dCommon
            {
                /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2d field.
                static const char* name()
                {
                    return "sf2d";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3d list.
            struct Sf3dMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3dMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3dMembers::Element field.
                    using ValueType = std::uint32_t;
                
                    /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3dMembers::Element field.
                    static const char* name()
                    {
                        return "element";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3d field.
            struct Sf3dCommon
            {
                /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3d field.
                static const char* name()
                {
                    return "sf3d";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::RxmEphFields::SfdMembers::Lists field.
        struct ListsCommon
        {
            /// @brief Name of the @ref ublox::message::RxmEphFields::SfdMembers::Lists field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmEphFields::Sfd field.
    struct SfdCommon
    {
        /// @brief Name of the @ref ublox::message::RxmEphFields::Sfd field.
        static const char* name()
        {
            return "";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmEph message.
/// @see ublox::message::RxmEph
struct RxmEphCommon
{
    /// @brief Name of the @ref ublox::message::RxmEph message.
    static const char* name()
    {
        return "RXM-EPH";
    }
    
};

} // namespace message

} // namespace ublox


