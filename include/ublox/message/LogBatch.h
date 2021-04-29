// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"LOG-BATCH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/Dop.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/HAcc.h"
#include "ublox/field/HMSL.h"
#include "ublox/field/Heading.h"
#include "ublox/field/HeadingAcc.h"
#include "ublox/field/Height.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/PsmState.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Sec.h"
#include "ublox/field/VAcc.h"
#include "ublox/field/Vel.h"
#include "ublox/field/Year.h"
#include "ublox/message/LogBatchCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref LogBatch.
/// @tparam TOpt Extra options
/// @see @ref LogBatch
/// @headerfile "ublox/message/LogBatch.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogBatchFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"contentValid"</b> field.
    class ContentValid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_extraPvt, @b getBitValue_extraPvt() and @b setBitValue_extraPvt().
        ///      @li @b BitIdx_extraOdo, @b getBitValue_extraOdo() and @b setBitValue_extraOdo().
        COMMS_BITMASK_BITS_SEQ(
            extraPvt,
            extraOdo
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::ContentValidCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::LogBatchFieldsCommon::ContentValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"msgCount"</b> field.
    struct MsgCount : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::MsgCountCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using ITOW =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"year"</b> field.
    using Year =
        ublox::field::Year<
            TOpt
        >;
    
    /// @brief Definition of <b>"month"</b> field.
    using Month =
        ublox::field::Month<
            TOpt
        >;
    
    /// @brief Definition of <b>"day"</b> field.
    using Day =
        ublox::field::Day<
            TOpt
        >;
    
    /// @brief Definition of <b>"hour"</b> field.
    using Hour =
        ublox::field::Hour<
            TOpt
        >;
    
    /// @brief Definition of <b>"min"</b> field.
    using Min =
        ublox::field::Min<
            TOpt
        >;
    
    /// @brief Definition of <b>"sec"</b> field.
    using Sec =
        ublox::field::Sec<
            TOpt
        >;
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_validDate, @b getBitValue_validDate() and @b setBitValue_validDate().
        ///      @li @b BitIdx_validTime, @b getBitValue_validTime() and @b setBitValue_validTime().
        COMMS_BITMASK_BITS_SEQ(
            validDate,
            validTime
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::ValidCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::LogBatchFieldsCommon::ValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"tAcc"</b> field.
    struct TAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::TAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"fracSec"</b> field.
    struct FracSec : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::FracSecCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"fixType"</b> field.
    struct FixType : public
        ublox::field::GpsFix<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::FixTypeCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>"bitsLow"</b> field.
        class BitsLow : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_gnssFixOK, @b getBitValue_gnssFixOK() and @b setBitValue_gnssFixOK().
            ///      @li @b BitIdx_diffSoln, @b getBitValue_diffSoln() and @b setBitValue_diffSoln().
            COMMS_BITMASK_BITS_SEQ(
                gnssFixOK,
                diffSoln
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::LogBatchFieldsCommon::FlagsMembersCommon::BitsLowCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::LogBatchFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"psmState"</b> field.
        using PsmState =
            ublox::field::PsmState<
                TOpt,
                comms::option::def::FixedBitLength<3U>
            >;
        
        /// @brief Definition of <b>"reserved"</b> field.
        struct Reserved : public
            ublox::field::Res1<
                TOpt,
                comms::option::def::FixedBitLength<3U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::LogBatchFieldsCommon::FlagsMembersCommon::ReservedCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               PsmState,
               Reserved
            >;
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_bitsLow type and @b field_bitsLow() access function -
        ///         for FlagsMembers::BitsLow member field.
        ///     @li @b Field_psmState type and @b field_psmState() access function -
        ///         for FlagsMembers::PsmState member field.
        ///     @li @b Field_reserved type and @b field_reserved() access function -
        ///         for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_NAMES(
            bitsLow,
            psmState,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"flags2"</b> field.
    struct Flags2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::Flags2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::NumSVCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"lon"</b> field.
    using Lon =
        ublox::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"lat"</b> field.
    using Lat =
        ublox::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"height"</b> field.
    using Height =
        ublox::field::Height<
            TOpt
        >;
    
    /// @brief Definition of <b>"hMSL"</b> field.
    using HMSL =
        ublox::field::HMSL<
            TOpt
        >;
    
    /// @brief Definition of <b>"hAcc"</b> field.
    using HAcc =
        ublox::field::HAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"vAcc"</b> field.
    using VAcc =
        ublox::field::VAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"velN"</b> field.
    struct VelN : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::VelNCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"velE"</b> field.
    struct VelE : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::VelECommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"velD"</b> field.
    struct VelD : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::VelDCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gSpeed"</b> field.
    struct GSpeed : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::GSpeedCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"headMot"</b> field.
    struct HeadMot : public
        ublox::field::Heading<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::HeadMotCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"sAcc"</b> field.
    struct SAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMillimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::SAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"headAcc"</b> field.
    struct HeadAcc : public
        ublox::field::HeadingAcc<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::HeadAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"pDOP"</b> field.
    struct PDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::PDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved0"</b> field.
    struct Reserved0 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::Reserved0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"distance"</b> field.
    struct Distance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::DistanceCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"totalDistance"</b> field.
    struct TotalDistance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::TotalDistanceCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"totalStd"</b> field.
    struct TotalStd : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::TotalStdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::LogBatchFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        ContentValid,
        MsgCount,
        ITOW,
        Year,
        Month,
        Day,
        Hour,
        Min,
        Sec,
        Valid,
        TAcc,
        FracSec,
        FixType,
        Flags,
        Flags2,
        NumSV,
        Lon,
        Lat,
        Height,
        HMSL,
        HAcc,
        VAcc,
        VelN,
        VelE,
        VelD,
        GSpeed,
        HeadMot,
        SAcc,
        HeadAcc,
        PDOP,
        Reserved0,
        Distance,
        TotalDistance,
        TotalStd,
        Reserved1
    >;
};

/// @brief Definition of <b>"LOG-BATCH"</b> message class.
/// @details
///     See @ref LogBatchFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogBatch.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogBatch : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogBatch,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogBatch>,
        comms::option::def::FieldsImpl<typename LogBatchFields<TOpt>::All>,
        comms::option::def::MsgType<LogBatch<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogBatch,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogBatch>,
            comms::option::def::FieldsImpl<typename LogBatchFields<TOpt>::All>,
            comms::option::def::MsgType<LogBatch<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref LogBatchFields::Version field.
    ///     @li @b Field_contentValid type and @b field_contentValid() access fuction
    ///         for @ref LogBatchFields::ContentValid field.
    ///     @li @b Field_msgCount type and @b field_msgCount() access fuction
    ///         for @ref LogBatchFields::MsgCount field.
    ///     @li @b Field_iTOW type and @b field_iTOW() access fuction
    ///         for @ref LogBatchFields::ITOW field.
    ///     @li @b Field_year type and @b field_year() access fuction
    ///         for @ref LogBatchFields::Year field.
    ///     @li @b Field_month type and @b field_month() access fuction
    ///         for @ref LogBatchFields::Month field.
    ///     @li @b Field_day type and @b field_day() access fuction
    ///         for @ref LogBatchFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() access fuction
    ///         for @ref LogBatchFields::Hour field.
    ///     @li @b Field_min type and @b field_min() access fuction
    ///         for @ref LogBatchFields::Min field.
    ///     @li @b Field_sec type and @b field_sec() access fuction
    ///         for @ref LogBatchFields::Sec field.
    ///     @li @b Field_valid type and @b field_valid() access fuction
    ///         for @ref LogBatchFields::Valid field.
    ///     @li @b Field_tAcc type and @b field_tAcc() access fuction
    ///         for @ref LogBatchFields::TAcc field.
    ///     @li @b Field_fracSec type and @b field_fracSec() access fuction
    ///         for @ref LogBatchFields::FracSec field.
    ///     @li @b Field_fixType type and @b field_fixType() access fuction
    ///         for @ref LogBatchFields::FixType field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref LogBatchFields::Flags field.
    ///     @li @b Field_flags2 type and @b field_flags2() access fuction
    ///         for @ref LogBatchFields::Flags2 field.
    ///     @li @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref LogBatchFields::NumSV field.
    ///     @li @b Field_lon type and @b field_lon() access fuction
    ///         for @ref LogBatchFields::Lon field.
    ///     @li @b Field_lat type and @b field_lat() access fuction
    ///         for @ref LogBatchFields::Lat field.
    ///     @li @b Field_height type and @b field_height() access fuction
    ///         for @ref LogBatchFields::Height field.
    ///     @li @b Field_hMSL type and @b field_hMSL() access fuction
    ///         for @ref LogBatchFields::HMSL field.
    ///     @li @b Field_hAcc type and @b field_hAcc() access fuction
    ///         for @ref LogBatchFields::HAcc field.
    ///     @li @b Field_vAcc type and @b field_vAcc() access fuction
    ///         for @ref LogBatchFields::VAcc field.
    ///     @li @b Field_velN type and @b field_velN() access fuction
    ///         for @ref LogBatchFields::VelN field.
    ///     @li @b Field_velE type and @b field_velE() access fuction
    ///         for @ref LogBatchFields::VelE field.
    ///     @li @b Field_velD type and @b field_velD() access fuction
    ///         for @ref LogBatchFields::VelD field.
    ///     @li @b Field_gSpeed type and @b field_gSpeed() access fuction
    ///         for @ref LogBatchFields::GSpeed field.
    ///     @li @b Field_headMot type and @b field_headMot() access fuction
    ///         for @ref LogBatchFields::HeadMot field.
    ///     @li @b Field_sAcc type and @b field_sAcc() access fuction
    ///         for @ref LogBatchFields::SAcc field.
    ///     @li @b Field_headAcc type and @b field_headAcc() access fuction
    ///         for @ref LogBatchFields::HeadAcc field.
    ///     @li @b Field_pDOP type and @b field_pDOP() access fuction
    ///         for @ref LogBatchFields::PDOP field.
    ///     @li @b Field_reserved0 type and @b field_reserved0() access fuction
    ///         for @ref LogBatchFields::Reserved0 field.
    ///     @li @b Field_distance type and @b field_distance() access fuction
    ///         for @ref LogBatchFields::Distance field.
    ///     @li @b Field_totalDistance type and @b field_totalDistance() access fuction
    ///         for @ref LogBatchFields::TotalDistance field.
    ///     @li @b Field_totalStd type and @b field_totalStd() access fuction
    ///         for @ref LogBatchFields::TotalStd field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref LogBatchFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        contentValid,
        msgCount,
        iTOW,
        year,
        month,
        day,
        hour,
        min,
        sec,
        valid,
        tAcc,
        fracSec,
        fixType,
        flags,
        flags2,
        numSV,
        lon,
        lat,
        height,
        hMSL,
        hAcc,
        vAcc,
        velN,
        velE,
        velD,
        gSpeed,
        headMot,
        sAcc,
        headAcc,
        pDOP,
        reserved0,
        distance,
        totalDistance,
        totalStd,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 100U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 100U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::LogBatchCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


