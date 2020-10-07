// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::EsfRaw message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::EsfRaw message.
/// @see ublox::message::EsfRawFields
struct EsfRawFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::EsfRawFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::EsfRawFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::EsfRawFields::Data list.
    struct DataMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::EsfRawFields::DataMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::EsfRawFields::DataMembers::ElementMembers::DataField field.
            struct DataFieldCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::EsfRawFields::DataMembers::ElementMembers::DataField field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::EsfRawFields::DataMembers::ElementMembers::DataField field.
                static const char* name()
                {
                    return "dataField";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::EsfRawFields::DataMembers::ElementMembers::DataType field.
            struct DataTypeCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::EsfRawFields::DataMembers::ElementMembers::DataType field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::EsfRawFields::DataMembers::ElementMembers::DataType field.
                static const char* name()
                {
                    return "dataType";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::EsfRawFields::DataMembers::ElementMembers::STtag field.
            struct STtagCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::EsfRawFields::DataMembers::ElementMembers::STtag field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::EsfRawFields::DataMembers::ElementMembers::STtag field.
                static const char* name()
                {
                    return "sTtag";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::EsfRawFields::DataMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::EsfRawFields::DataMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::EsfRawFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::EsfRawFields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::EsfRaw message.
/// @see ublox::message::EsfRaw
struct EsfRawCommon
{
    /// @brief Name of the @ref ublox::message::EsfRaw message.
    static const char* name()
    {
        return "ESF-RAW";
    }
    
};

} // namespace message

} // namespace ublox


