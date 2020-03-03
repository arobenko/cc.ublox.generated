// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonTxbuf message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonTxbuf message.
/// @see ublox::message::MonTxbufFields
struct MonTxbufFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonTxbufFields::Pending list.
    struct PendingMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonTxbufFields::PendingMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::MonTxbufFields::PendingMembers::Element field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::message::MonTxbufFields::PendingMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonTxbufFields::Pending field.
    struct PendingCommon
    {
        /// @brief Name of the @ref ublox::message::MonTxbufFields::Pending field.
        static const char* name()
        {
            return "pending";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonTxbufFields::Usage list.
    struct UsageMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonTxbufFields::UsageMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::MonTxbufFields::UsageMembers::Element field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::MonTxbufFields::UsageMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonTxbufFields::Usage field.
    struct UsageCommon
    {
        /// @brief Name of the @ref ublox::message::MonTxbufFields::Usage field.
        static const char* name()
        {
            return "usage";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonTxbufFields::PeakUsage list.
    struct PeakUsageMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonTxbufFields::PeakUsageMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::MonTxbufFields::PeakUsageMembers::Element field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::MonTxbufFields::PeakUsageMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonTxbufFields::PeakUsage field.
    struct PeakUsageCommon
    {
        /// @brief Name of the @ref ublox::message::MonTxbufFields::PeakUsage field.
        static const char* name()
        {
            return "peakUsage";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonTxbufFields::TUsage field.
    struct TUsageCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonTxbufFields::TUsage field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonTxbufFields::TUsage field.
        static const char* name()
        {
            return "tUsage";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonTxbufFields::TPeakusage field.
    struct TPeakusageCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonTxbufFields::TPeakusage field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonTxbufFields::TPeakusage field.
        static const char* name()
        {
            return "tPeakusage";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonTxbufFields::Errors field.
    struct ErrorsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonTxbufFields::ErrorsMembers::Limit field.
        struct LimitCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::MonTxbufFields::ErrorsMembers::Limit field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::MonTxbufFields::ErrorsMembers::Limit field.
            static const char* name()
            {
                return "limit";
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonTxbufFields::ErrorsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::MonTxbufFields::ErrorsMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::MonTxbufFields::ErrorsMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "mem",
                    "alloc"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonTxbufFields::Errors field.
    struct ErrorsCommon
    {
        /// @brief Name of the @ref ublox::message::MonTxbufFields::Errors field.
        static const char* name()
        {
            return "errors";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonTxbufFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MonTxbufFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonTxbuf message.
/// @see ublox::message::MonTxbuf
struct MonTxbufCommon
{
    /// @brief Name of the @ref ublox::message::MonTxbuf message.
    static const char* name()
    {
        return "MON-TXBUF";
    }
    
};

} // namespace message

} // namespace ublox


