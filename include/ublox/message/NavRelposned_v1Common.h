// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavRelposned_v1 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavRelposned_v1 message.
/// @see ublox::message::NavRelposned_v1Fields
struct NavRelposned_v1FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RefStationId field.
    struct RefStationIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RefStationId field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RefStationId field.
        static const char* name()
        {
            return "refStationId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosN field.
    struct RelPosNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosN field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosN field.
        static const char* name()
        {
            return "relPosN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosE field.
    struct RelPosECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosE field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosE field.
        static const char* name()
        {
            return "relPosE";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosD field.
    struct RelPosDCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosD field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosD field.
        static const char* name()
        {
            return "relPosD";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosLength field.
    struct RelPosLengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosLength field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosLength field.
        static const char* name()
        {
            return "relPosLength";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosHeading field.
    struct RelPosHeadingCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosHeading field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosHeading field.
        static const char* name()
        {
            return "relPosHeading";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosHPN field.
    struct RelPosHPNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosHPN field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosHPN field.
        static const char* name()
        {
            return "relPosHPN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosHPE field.
    struct RelPosHPECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosHPE field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosHPE field.
        static const char* name()
        {
            return "relPosHPE";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosHPD field.
    struct RelPosHPDCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosHPD field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosHPD field.
        static const char* name()
        {
            return "relPosHPD";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::RelPosHPLength field.
    struct RelPosHPLengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::RelPosHPLength field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::RelPosHPLength field.
        static const char* name()
        {
            return "relPosHPLength";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::AccN field.
    struct AccNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::AccN field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::AccN field.
        static const char* name()
        {
            return "accN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::AccE field.
    struct AccECommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::AccE field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::AccE field.
        static const char* name()
        {
            return "accE";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::AccD field.
    struct AccDCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::AccD field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::AccD field.
        static const char* name()
        {
            return "accD";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::AccLength field.
    struct AccLengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::AccLength field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::AccLength field.
        static const char* name()
        {
            return "accLength";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::AccHeading field.
    struct AccHeadingCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavRelposned_v1Fields::AccHeading field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::AccHeading field.
        static const char* name()
        {
            return "accHeading";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavRelposned_v1Fields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavRelposned_v1Fields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::BitsLow field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::BitsLow field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "gnssFixOK",
                    "diffSoln",
                    "relPosValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::CarrSoln field.
        struct CarrSolnCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::CarrSoln field.
            enum class ValueType : std::uint8_t
            {
                NoCarrier = 0, ///< value <b>No carrier</b>.
                FloatSolution = 1, ///< value <b>Float solution</b>.
                FixedSolution = 2, ///< value <b>Fixed solution</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::CarrSoln field.
            static const char* name()
            {
                return "carrSoln";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "No carrier",
                    "Float solution",
                    "Fixed solution"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::CarrSoln field.
        using CarrSolnVal = CarrSolnCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::BitsHigh field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::NavRelposned_v1Fields::FlagsMembers::BitsHigh field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "isMoving",
                    "refPosMiss",
                    "refObsMiss",
                    "relPosHeadingValid"
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
    ///     @ref ublox::message::NavRelposned_v1Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::NavRelposned_v1Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavRelposned_v1 message.
/// @see ublox::message::NavRelposned_v1
struct NavRelposned_v1Common
{
    /// @brief Name of the @ref ublox::message::NavRelposned_v1 message.
    static const char* name()
    {
        return "NAV-RELPOSNED (V1)";
    }
    
};

} // namespace message

} // namespace ublox

