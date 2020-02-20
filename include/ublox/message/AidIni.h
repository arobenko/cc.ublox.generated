// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"AID-INI"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/AidIniCommon.h"
#include "ublox/options/DefaultOptions.h"
#include "comms/cast.h"


namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidIni.
/// @tparam TOpt Extra options
/// @see @ref AidIni
/// @headerfile "ublox/message/AidIni.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidIniFields
{
    /// @brief Scope for all the member fields of @ref EcefX optional.
    struct EcefXMembers
    {
        /// @brief Definition of <b>"ecefX"</b> field.
        struct EcefX : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::EcefXMembersCommon::EcefXCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefX"</b> field.
    struct EcefX : public
        comms::field::Optional<
            typename EcefXMembers::EcefX,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::EcefXCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lat optional.
    struct LatMembers
    {
        /// @brief Definition of <b>"lat"</b> field.
        struct Lat : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 10000000L>,
                comms::option::def::UnitsDegrees
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::LatMembersCommon::LatCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lat"</b> field.
    struct Lat : public
        comms::field::Optional<
            typename LatMembers::Lat,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::LatCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefY optional.
    struct EcefYMembers
    {
        /// @brief Definition of <b>"ecefY"</b> field.
        struct EcefY : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::EcefYMembersCommon::EcefYCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefY"</b> field.
    struct EcefY : public
        comms::field::Optional<
            typename EcefYMembers::EcefY,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::EcefYCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lon optional.
    struct LonMembers
    {
        /// @brief Definition of <b>"lon"</b> field.
        struct Lon : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 10000000L>,
                comms::option::def::UnitsDegrees
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::LonMembersCommon::LonCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lon"</b> field.
    struct Lon : public
        comms::field::Optional<
            typename LonMembers::Lon,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::LonCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefZ optional.
    struct EcefZMembers
    {
        /// @brief Definition of <b>"ecefZ"</b> field.
        struct EcefZ : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::EcefZMembersCommon::EcefZCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    struct EcefZ : public
        comms::field::Optional<
            typename EcefZMembers::EcefZ,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::EcefZCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Alt optional.
    struct AltMembers
    {
        /// @brief Definition of <b>"alt"</b> field.
        struct Alt : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::AltMembersCommon::AltCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"alt"</b> field.
    struct Alt : public
        comms::field::Optional<
            typename AltMembers::Alt,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::AltCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"posAcc"</b> field.
    struct PosAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::PosAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tmCfg"</b> field.
    class TmCfg : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFADU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0xFFADU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_fEdge.
        ///      @li @b BitIdx_tm1.
        ///      @li @b BitIdx_f1.
        COMMS_BITMASK_BITS(
            fEdge=1,
            tm1=4,
            f1=6
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_fEdge() and @b setBitValue_fEdge().
        ///      @li @b getBitValue_tm1() and @b setBitValue_tm1().
        ///      @li @b getBitValue_f1() and @b setBitValue_f1().
        COMMS_BITMASK_BITS_ACCESS(
            fEdge,
            tm1,
            f1
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::TmCfgCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::AidIniFieldsCommon::TmCfgCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Wno optional.
    struct WnoMembers
    {
        /// @brief Definition of <b>"wno"</b> field.
        struct Wno : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::UnitsWeeks
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::WnoMembersCommon::WnoCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"wno"</b> field.
    struct Wno : public
        comms::field::Optional<
            typename WnoMembers::Wno,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::WnoCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Date optional.
    struct DateMembers
    {
        /// @brief Scope for all the member fields of @ref DateBundle bundle.
        struct DateBundleMembers
        {
            /// @brief Definition of <b>"year"</b> field.
            struct Year : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::NumValueSerOffset<-2000>,
                    comms::option::def::DefaultNumValue<2000>,
                    comms::option::def::ValidNumValueRange<2000, 2255>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidIniFieldsCommon::DateMembersCommon::DateBundleMembersCommon::YearCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"month"</b> field.
            struct Month : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidIniFieldsCommon::DateMembersCommon::DateBundleMembersCommon::MonthCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Year,
                   Month
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class DateBundle : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename DateBundleMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename DateBundleMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b Field_year @b field_year() -
            ///         for DateBundleMembers::Year member field.
            ///     @li @b Field_month @b field_month() -
            ///         for DateBundleMembers::Month member field.
            COMMS_FIELD_MEMBERS_NAMES(
                year,
                month
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::DateMembersCommon::DateBundleCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"date"</b> field.
    struct Date : public
        comms::field::Optional<
            typename DateMembers::DateBundle,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::DateCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Tow optional.
    struct TowMembers
    {
        /// @brief Definition of <b>"tow"</b> field.
        struct Tow : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMilliseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::TowMembersCommon::TowCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"tow"</b> field.
    struct Tow : public
        comms::field::Optional<
            typename TowMembers::Tow,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::TowCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Time optional.
    struct TimeMembers
    {
        /// @brief Scope for all the member fields of @ref TimeBundle bundle.
        struct TimeBundleMembers
        {
            /// @brief Definition of <b>"day"</b> field.
            struct Day : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsDays
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidIniFieldsCommon::TimeMembersCommon::TimeBundleMembersCommon::DayCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"hour"</b> field.
            struct Hour : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsHours
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidIniFieldsCommon::TimeMembersCommon::TimeBundleMembersCommon::HourCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"min"</b> field.
            struct Min : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsMinutes
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidIniFieldsCommon::TimeMembersCommon::TimeBundleMembersCommon::MinCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"sec"</b> field.
            struct Sec : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsSeconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidIniFieldsCommon::TimeMembersCommon::TimeBundleMembersCommon::SecCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Day,
                   Hour,
                   Min,
                   Sec
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class TimeBundle : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename TimeBundleMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename TimeBundleMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b Field_day @b field_day() -
            ///         for TimeBundleMembers::Day member field.
            ///     @li @b Field_hour @b field_hour() -
            ///         for TimeBundleMembers::Hour member field.
            ///     @li @b Field_min @b field_min() -
            ///         for TimeBundleMembers::Min member field.
            ///     @li @b Field_sec @b field_sec() -
            ///         for TimeBundleMembers::Sec member field.
            COMMS_FIELD_MEMBERS_NAMES(
                day,
                hour,
                min,
                sec
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::TimeMembersCommon::TimeBundleCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"time"</b> field.
    struct Time : public
        comms::field::Optional<
            typename TimeMembers::TimeBundle,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::TimeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"towNs"</b> field.
    struct TowNs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::TowNsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tAccMs"</b> field.
    struct TAccMs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::TAccMsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tAccNs"</b> field.
    struct TAccNs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::TAccNsCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ClkD optional.
    struct ClkDMembers
    {
        /// @brief Definition of <b>"clkD"</b> field.
        struct ClkD : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsNanoseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::ClkDMembersCommon::ClkDCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"clkD"</b> field.
    struct ClkD : public
        comms::field::Optional<
            typename ClkDMembers::ClkD,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::ClkDCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Freq optional.
    struct FreqMembers
    {
        /// @brief Definition of <b>"freq"</b> field.
        struct Freq : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 100>,
                comms::option::def::UnitsHertz
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::FreqMembersCommon::FreqCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"freq"</b> field.
    struct Freq : public
        comms::field::Optional<
            typename FreqMembers::Freq,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::FreqCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ClkDAcc optional.
    struct ClkDAccMembers
    {
        /// @brief Definition of <b>"clkDAcc"</b> field.
        struct ClkDAcc : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsNanoseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::ClkDAccMembersCommon::ClkDAccCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"clkDAcc"</b> field.
    struct ClkDAcc : public
        comms::field::Optional<
            typename ClkDAccMembers::ClkDAcc,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::ClkDAccCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref FreqAcc optional.
    struct FreqAccMembers
    {
        /// @brief Definition of <b>"freqAcc"</b> field.
        struct FreqAcc : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidIniFieldsCommon::FreqAccMembersCommon::FreqAccCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"freqAcc"</b> field.
    struct FreqAcc : public
        comms::field::Optional<
            typename FreqAccMembers::FreqAcc,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::FreqAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFB00UL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFB00UL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_pos.
        ///      @li @b BitIdx_time.
        ///      @li @b BitIdx_clockD.
        ///      @li @b BitIdx_tp.
        ///      @li @b BitIdx_clockF.
        ///      @li @b BitIdx_lla.
        ///      @li @b BitIdx_altInv.
        ///      @li @b BitIdx_prevTm.
        ///      @li @b BitIdx_utc.
        COMMS_BITMASK_BITS(
            pos=0,
            time=1,
            clockD=2,
            tp=3,
            clockF=4,
            lla=5,
            altInv=6,
            prevTm=7,
            utc=10
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_pos() and @b setBitValue_pos().
        ///      @li @b getBitValue_time() and @b setBitValue_time().
        ///      @li @b getBitValue_clockD() and @b setBitValue_clockD().
        ///      @li @b getBitValue_tp() and @b setBitValue_tp().
        ///      @li @b getBitValue_clockF() and @b setBitValue_clockF().
        ///      @li @b getBitValue_lla() and @b setBitValue_lla().
        ///      @li @b getBitValue_altInv() and @b setBitValue_altInv().
        ///      @li @b getBitValue_prevTm() and @b setBitValue_prevTm().
        ///      @li @b getBitValue_utc() and @b setBitValue_utc().
        COMMS_BITMASK_BITS_ACCESS(
            pos,
            time,
            clockD,
            tp,
            clockF,
            lla,
            altInv,
            prevTm,
            utc
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidIniFieldsCommon::FlagsCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::AidIniFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        EcefX,
        Lat,
        EcefY,
        Lon,
        EcefZ,
        Alt,
        PosAcc,
        TmCfg,
        Wno,
        Date,
        Tow,
        Time,
        TowNs,
        TAccMs,
        TAccNs,
        ClkD,
        Freq,
        ClkDAcc,
        FreqAcc,
        Flags
    >;
};

/// @brief Definition of <b>"AID-INI"</b> message class.
/// @details
///     See @ref AidIniFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidIni.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidIni : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidIni>,
        comms::option::def::FieldsImpl<typename AidIniFields<TOpt>::All>,
        comms::option::def::MsgType<AidIni<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidIni>,
            comms::option::def::FieldsImpl<typename AidIniFields<TOpt>::All>,
            comms::option::def::MsgType<AidIni<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_ecefX type and @b field_ecefX() fuction
    ///         for @ref AidIniFields::EcefX field.
    ///     @li @b Field_lat type and @b field_lat() fuction
    ///         for @ref AidIniFields::Lat field.
    ///     @li @b Field_ecefY type and @b field_ecefY() fuction
    ///         for @ref AidIniFields::EcefY field.
    ///     @li @b Field_lon type and @b field_lon() fuction
    ///         for @ref AidIniFields::Lon field.
    ///     @li @b Field_ecefZ type and @b field_ecefZ() fuction
    ///         for @ref AidIniFields::EcefZ field.
    ///     @li @b Field_alt type and @b field_alt() fuction
    ///         for @ref AidIniFields::Alt field.
    ///     @li @b Field_posAcc type and @b field_posAcc() fuction
    ///         for @ref AidIniFields::PosAcc field.
    ///     @li @b Field_tmCfg type and @b field_tmCfg() fuction
    ///         for @ref AidIniFields::TmCfg field.
    ///     @li @b Field_wno type and @b field_wno() fuction
    ///         for @ref AidIniFields::Wno field.
    ///     @li @b Field_date type and @b field_date() fuction
    ///         for @ref AidIniFields::Date field.
    ///     @li @b Field_tow type and @b field_tow() fuction
    ///         for @ref AidIniFields::Tow field.
    ///     @li @b Field_time type and @b field_time() fuction
    ///         for @ref AidIniFields::Time field.
    ///     @li @b Field_towNs type and @b field_towNs() fuction
    ///         for @ref AidIniFields::TowNs field.
    ///     @li @b Field_tAccMs type and @b field_tAccMs() fuction
    ///         for @ref AidIniFields::TAccMs field.
    ///     @li @b Field_tAccNs type and @b field_tAccNs() fuction
    ///         for @ref AidIniFields::TAccNs field.
    ///     @li @b Field_clkD type and @b field_clkD() fuction
    ///         for @ref AidIniFields::ClkD field.
    ///     @li @b Field_freq type and @b field_freq() fuction
    ///         for @ref AidIniFields::Freq field.
    ///     @li @b Field_clkDAcc type and @b field_clkDAcc() fuction
    ///         for @ref AidIniFields::ClkDAcc field.
    ///     @li @b Field_freqAcc type and @b field_freqAcc() fuction
    ///         for @ref AidIniFields::FreqAcc field.
    ///     @li @b Field_flags type and @b field_flags() fuction
    ///         for @ref AidIniFields::Flags field.
    COMMS_MSG_FIELDS_NAMES(
        ecefX,
        lat,
        ecefY,
        lon,
        ecefZ,
        alt,
        posAcc,
        tmCfg,
        wno,
        date,
        tow,
        time,
        towNs,
        tAccMs,
        tAccNs,
        clkD,
        freq,
        clkDAcc,
        freqAcc,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 22U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 74U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::AidIniCommon::name();
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::doRead(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        refresh_ecefXLat(true);
        refresh_ecefYLon(true);
        refresh_ecefZAlt(true);
        refresh_wnoDate(true);
        refresh_towTime(true);
        refresh_clkDFreq(true);
        refresh_clkDFreqAcc(true);
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_ecefXLat(false) || updated;
        updated = refresh_ecefYLon(false) || updated;
        updated = refresh_ecefZAlt(false) || updated;
        updated = refresh_wnoDate(false) || updated;
        updated = refresh_towTime(false) || updated;
        updated = refresh_clkDFreq(false) || updated;    
        updated = refresh_clkDFreqAcc(false) || updated;    
        return updated;
    }
    
    
private:
    template <typename TFirst, typename TSecond>
    static bool refreshFields(TFirst& first, TSecond& second, bool enableSecond, bool updateValue)
    {
        if ((first.isMissing() == enableSecond) &&
            (second.doesExist() == enableSecond)) {
            return false;
        }
    
        auto firstMode = comms::field::OptionalMode::Missing;
        auto secondMode = comms::field::OptionalMode::Exists;
        if (!enableSecond) {
            std::swap(firstMode, secondMode);
        }
    
        first.setMode(firstMode);
        second.setMode(secondMode);
    
        if (!updateValue) {
            return true;
        }
    
        if (enableSecond) {
            second.field() = 
                comms::field_cast<typename std::decay<decltype(second.field())>::type>(
                    first.field());
        }
        else {
            first.field() = 
                comms::field_cast<typename std::decay<decltype(first.field())>::type>(
                    second.field());
        }
    
        return true;
    }
    
    bool refresh_ecefXLat(bool updateValue)
    {
        return refreshFields(field_ecefX(), field_lat(), field_flags().getBitValue_lla(), updateValue);
    }
    
    bool refresh_ecefYLon(bool updateValue)
    {
        return refreshFields(field_ecefY(), field_lon(), field_flags().getBitValue_lla(), updateValue);
    } 
    
    bool refresh_ecefZAlt(bool updateValue)
    {
        return refreshFields(field_ecefZ(), field_alt(), field_flags().getBitValue_lla(), updateValue);
    }   
    
    bool refresh_wnoDate(bool upadteValue)
    {
        return refreshFields(field_wno(), field_date(), field_flags().getBitValue_utc(), upadteValue);
    }
    
    bool refresh_towTime(bool upadteValue)
    {
        return refreshFields(field_tow(), field_time(), field_flags().getBitValue_utc(), upadteValue);
    }
    
    bool refresh_clkDFreq(bool updateValue)
    {
        return refreshFields(field_clkD(), field_freq(), field_flags().getBitValue_clockF(), updateValue);
    }
    
    bool refresh_clkDFreqAcc(bool updateValue)
    {
        return refreshFields(field_clkDAcc(), field_freqAcc(), field_flags().getBitValue_clockF(), updateValue);
    }
    
};

} // namespace message

} // namespace ublox


