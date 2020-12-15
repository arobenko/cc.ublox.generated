// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmRaw message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmRaw message.
/// @see ublox::message::RxmRawFields
struct RxmRawFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRawFields::RcvTow field.
    struct RcvTowCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRawFields::RcvTow field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::RxmRawFields::RcvTow field.
        static const char* name()
        {
            return "rcvTow";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRawFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRawFields::Week field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::RxmRawFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRawFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRawFields::NumSV field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRawFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRawFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::RxmRawFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmRawFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmRawFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::CpMes field.
            struct CpMesCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::CpMes field.
                using ValueType = double;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::CpMes field.
                static const char* name()
                {
                    return "cpMes";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::PrMes field.
            struct PrMesCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::PrMes field.
                using ValueType = double;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::PrMes field.
                static const char* name()
                {
                    return "prMes";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::DoMes field.
            struct DoMesCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::DoMes field.
                using ValueType = float;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::DoMes field.
                static const char* name()
                {
                    return "doMes";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::Sv field.
            struct SvCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::Sv field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::Sv field.
                static const char* name()
                {
                    return "sv";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::MesQI field.
            struct MesQICommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::MesQI field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::MesQI field.
                static const char* name()
                {
                    return "mesQI";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::Cno field.
            struct CnoCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::Cno field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::Cno field.
                static const char* name()
                {
                    return "cno";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::Lli field.
            struct LliCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmRawFields::ListMembers::ElementMembers::Lli field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::ElementMembers::Lli field.
                static const char* name()
                {
                    return "lli";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::RxmRawFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::RxmRawFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmRawFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::RxmRawFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmRaw message.
/// @see ublox::message::RxmRaw
struct RxmRawCommon
{
    /// @brief Name of the @ref ublox::message::RxmRaw message.
    static const char* name()
    {
        return "RXM-RAW";
    }
    
};

} // namespace message

} // namespace ublox


