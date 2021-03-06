// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavPvt message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/DayCommon.h"
#include "ublox/field/DopCommon.h"
#include "ublox/field/GpsFixCommon.h"
#include "ublox/field/HAccCommon.h"
#include "ublox/field/HMSLCommon.h"
#include "ublox/field/HeadingAccCommon.h"
#include "ublox/field/HeadingCommon.h"
#include "ublox/field/HeightCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/LatCommon.h"
#include "ublox/field/LonCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/PsmStateCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/VAccCommon.h"
#include "ublox/field/VelCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavPvt message.
/// @see ublox::message::NavPvtFields
struct NavPvtFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Min field.
    using MinCommon = ublox::field::MinCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Sec field.
    using SecCommon = ublox::field::SecCommon;
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavPvtFields::Valid field.
    struct ValidCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavPvtFields::Valid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "validDate",
                "validTime",
                "fullyResolved",
                "validMag"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::TAcc field.
    struct TAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavPvtFields::TAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavPvtFields::TAcc field.
        static const char* name()
        {
            return "tAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Nano field.
    struct NanoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavPvtFields::Nano field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavPvtFields::Nano field.
        static const char* name()
        {
            return "nano";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::FixType field.
    struct FixTypeCommon : public ublox::field::GpsFixCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::FixType field.
        static const char* name()
        {
            return "fixType";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavPvtFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavPvtFields::FlagsMembers::LowBits field.
        struct LowBitsCommon
        {
            /// @brief Name of the @ref ublox::message::NavPvtFields::FlagsMembers::LowBits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::NavPvtFields::FlagsMembers::LowBits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "gnssFixOK",
                    "diffSoln"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavPvtFields::FlagsMembers::PsmState field.
        using PsmStateCommon = ublox::field::PsmStateCommon;
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavPvtFields::FlagsMembers::MidBits field.
        struct MidBitsCommon
        {
            /// @brief Name of the @ref ublox::message::NavPvtFields::FlagsMembers::MidBits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::NavPvtFields::FlagsMembers::MidBits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "headVehValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavPvtFields::FlagsMembers::CarrSoln field.
        struct CarrSolnCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavPvtFields::FlagsMembers::CarrSoln field.
            enum class ValueType : std::uint8_t
            {
                NoCarrier = 0, ///< value <b>No carrier</b>.
                Float = 1, ///< value <b>Float solution</b>.
                Fixed = 2, ///< value <b>Fixed solution</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavPvtFields::FlagsMembers::CarrSoln field.
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
        ///     @ref ublox::message::NavPvtFields::FlagsMembers::CarrSoln field.
        using CarrSolnVal = CarrSolnCommon::ValueType;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavPvtFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavPvtFields::Flags2 field.
    struct Flags2Common
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::Flags2 field.
        static const char* name()
        {
            return "flags2";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavPvtFields::Flags2 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                "confirmedAvai",
                "confirmedDate",
                "confirmedTime"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavPvtFields::NumSV field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavPvtFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Lon field.
    using LonCommon = ublox::field::LonCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Lat field.
    using LatCommon = ublox::field::LatCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Height field.
    using HeightCommon = ublox::field::HeightCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::HMSL field.
    using HMSLCommon = ublox::field::HMSLCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::HAcc field.
    using HAccCommon = ublox::field::HAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::VAcc field.
    using VAccCommon = ublox::field::VAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::VelN field.
    struct VelNCommon : public ublox::field::VelCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::VelN field.
        static const char* name()
        {
            return "velN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::VelE field.
    struct VelECommon : public ublox::field::VelCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::VelE field.
        static const char* name()
        {
            return "velE";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::VelD field.
    struct VelDCommon : public ublox::field::VelCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::VelD field.
        static const char* name()
        {
            return "velD";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::GSpeed field.
    struct GSpeedCommon : public ublox::field::VelCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::GSpeed field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Heading field.
    using HeadingCommon = ublox::field::HeadingCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::SAcc field.
    struct SAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavPvtFields::SAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavPvtFields::SAcc field.
        static const char* name()
        {
            return "sAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::HeadingAcc field.
    using HeadingAccCommon = ublox::field::HeadingAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::PDop field.
    struct PDopCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::PDop field.
        static const char* name()
        {
            return "pDop";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavPvtFields::Flags3 field.
    struct Flags3Common
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::Flags3 field.
        static const char* name()
        {
            return "flags3";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavPvtFields::Flags3 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "invalidLlh"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPvtFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavPvtFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavPvt message.
/// @see ublox::message::NavPvt
struct NavPvtCommon
{
    /// @brief Name of the @ref ublox::message::NavPvt message.
    static const char* name()
    {
        return "NAV-PVT";
    }
    
};

} // namespace message

} // namespace ublox


