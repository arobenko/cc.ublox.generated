// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmImes message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmImes message.
/// @see ublox::message::RxmImesFields
struct RxmImesFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmImesFields::NumTx field.
    struct NumTxCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmImesFields::NumTx field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmImesFields::NumTx field.
        static const char* name()
        {
            return "numTx";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmImesFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmImesFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmImesFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmImesFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::RxmImesFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmImesFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmImesFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Reserved2 field.
            struct Reserved2Common : public ublox::field::Res1Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Reserved2 field.
                static const char* name()
                {
                    return "reserved2";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::TxId field.
            struct TxIdCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::TxId field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::TxId field.
                static const char* name()
                {
                    return "txId";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Reserved3 field.
            struct Reserved3Common : public ublox::field::Res3Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Reserved3 field.
                static const char* name()
                {
                    return "reserved3";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Cno field.
            struct CnoCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Cno field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Cno field.
                static const char* name()
                {
                    return "cno";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Reserved4 field.
            struct Reserved4Common : public ublox::field::Res2Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Reserved4 field.
                static const char* name()
                {
                    return "reserved4";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Doppler field.
            struct DopplerCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Doppler field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Doppler field.
                static const char* name()
                {
                    return "doppler";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1 field.
            struct Position1_1MembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Pos1Floor field.
                struct Pos1FloorCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Pos1Floor field.
                    using ValueType = std::int8_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Pos1Floor field.
                    static const char* name()
                    {
                        return "pos1Floor";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Pos1Lat field.
                struct Pos1LatCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Pos1Lat field.
                    using ValueType = std::int32_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Pos1Lat field.
                    static const char* name()
                    {
                        return "pos1Lat";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Reserved field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1Members::Reserved field.
                    static const char* name()
                    {
                        return "reserved";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1 field.
            struct Position1_1Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_1 field.
                static const char* name()
                {
                    return "position1_1";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2 field.
            struct Position1_2MembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Pos1Lon field.
                struct Pos1LonCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Pos1Lon field.
                    using ValueType = std::int32_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Pos1Lon field.
                    static const char* name()
                    {
                        return "pos1Lon";
                    }
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Flags field.
                struct FlagsCommon
                {
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Flags field.
                    static const char* name()
                    {
                        return "flags";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Flags field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "pos1Valid"
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
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2 field.
            struct Position1_2Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2 field.
                static const char* name()
                {
                    return "position1_2";
                }
                
            };
            
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1 field.
            struct Position2_1MembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Floor field.
                struct Pos2FloorCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Floor field.
                    using ValueType = std::int16_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Floor field.
                    static const char* name()
                    {
                        return "pos2Floor";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Alt field.
                struct Pos2AltCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Alt field.
                    using ValueType = std::int16_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Alt field.
                    static const char* name()
                    {
                        return "pos2Alt";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                struct Pos2AccCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                    enum class ValueType : std::uint8_t
                    {
                        Undef = 0, ///< value @b Undef.
                        LessThan7 = 1, ///< value <b><7m</b>.
                        LessThan15 = 2, ///< value <b><15m</b>.
                        GreaterThan15 = 3, ///< value <b>>15m</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 3, ///< Last defined value.
                        ValuesLimit = 4, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                    static const char* name()
                    {
                        return "pos2Acc";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Undef",
                            "<7m",
                            "<15m",
                            ">15m"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                using Pos2AccVal = Pos2AccCommon::ValueType;
                
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "pos2Valid"
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
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1 field.
            struct Position2_1Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1 field.
                static const char* name()
                {
                    return "position2_1";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Lat field.
            struct LatCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Lat field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Lat field.
                static const char* name()
                {
                    return "lat";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Lon field.
            struct LonCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::Lon field.
                using ValueType = std::int32_t;
            
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Lon field.
                static const char* name()
                {
                    return "lon";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrame field.
            struct ShortIdFrameMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::ShortId field.
                struct ShortIdCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::ShortId field.
                    using ValueType = std::uint16_t;
                
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::ShortId field.
                    static const char* name()
                    {
                        return "shortId";
                    }
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "shortValid",
                            "shortBoundary"
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
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrame field.
            struct ShortIdFrameCommon
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrame field.
                static const char* name()
                {
                    return "shortIdFrame";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumIdLSB field.
            struct MediumIdLSBCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumIdLSB field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumIdLSB field.
                static const char* name()
                {
                    return "mediumIdLSB";
                }
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumId_2 field.
            struct MediumId_2Common
            {
                /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumId_2 field.
                static const char* name()
                {
                    return "mediumId_2";
                }
                
                /// @brief Retrieve name of the bit of
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumId_2 field.
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "mediumIdMSB",
                        "mediumValid",
                        "mediumboundary"
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
        ///     @ref ublox::message::RxmImesFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::RxmImesFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmImesFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::RxmImesFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmImes message.
/// @see ublox::message::RxmImes
struct RxmImesCommon
{
    /// @brief Name of the @ref ublox::message::RxmImes message.
    static const char* name()
    {
        return "RXM-IMES";
    }
    
};

} // namespace message

} // namespace ublox


