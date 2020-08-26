// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"NAV-PVT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
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
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Sec.h"
#include "ublox/field/VAcc.h"
#include "ublox/field/Vel.h"
#include "ublox/field/Year.h"
#include "ublox/message/NavPvtCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavPvt.
/// @tparam TOpt Extra options
/// @see @ref NavPvt
/// @headerfile "ublox/message/NavPvt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavPvtFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
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
            comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
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
        ///      @li @b BitIdx_fullyResolved, @b getBitValue_fullyResolved() and @b setBitValue_fullyResolved().
        COMMS_BITMASK_BITS_SEQ(
            validDate,
            validTime,
            fullyResolved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::ValidCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavPvtFieldsCommon::ValidCommon::bitName(
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
            return ublox::message::NavPvtFieldsCommon::TAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"nano"</b> field.
    struct Nano : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::NanoCommon::name();
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
            return ublox::message::NavPvtFieldsCommon::FixTypeCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class LowBits : public
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
                return ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::LowBitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::LowBitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"psmState"</b> field.
        /// @see @ref ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::PsmStateVal
        class PsmState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::PsmStateVal,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 5>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::PsmStateVal,
                    comms::option::def::FixedBitLength<3U>,
                    comms::option::def::ValidNumValueRange<0, 5>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::PsmStateCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::PsmStateCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class MidBits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<1U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<1U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_headVehValid, @b getBitValue_headVehValid() and @b setBitValue_headVehValid().
            COMMS_BITMASK_BITS_SEQ(
                headVehValid
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::MidBitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::MidBitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"carrSoln"</b> field.
        /// @see @ref ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::CarrSolnVal
        class CarrSoln : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::CarrSolnVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::CarrSolnVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::CarrSolnCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavPvtFieldsCommon::FlagsMembersCommon::CarrSolnCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               LowBits,
               PsmState,
               MidBits,
               CarrSoln
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
        ///     @li @b Field_lowBits type and @b field_lowBits() access function -
        ///         for FlagsMembers::LowBits member field.
        ///     @li @b Field_psmState type and @b field_psmState() access function -
        ///         for FlagsMembers::PsmState member field.
        ///     @li @b Field_midBits type and @b field_midBits() access function -
        ///         for FlagsMembers::MidBits member field.
        ///     @li @b Field_carrSoln type and @b field_carrSoln() access function -
        ///         for FlagsMembers::CarrSoln member field.
        COMMS_FIELD_MEMBERS_NAMES(
            lowBits,
            psmState,
            midBits,
            carrSoln
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"flags2"</b> field.
    class Flags2 : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0x1FU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0x1FU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_confirmedAvai.
        ///      @li @b BitIdx_confirmedDate.
        ///      @li @b BitIdx_confirmedTime.
        COMMS_BITMASK_BITS(
            confirmedAvai=5,
            confirmedDate=6,
            confirmedTime=7
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_confirmedAvai() and @b setBitValue_confirmedAvai().
        ///      @li @b getBitValue_confirmedDate() and @b setBitValue_confirmedDate().
        ///      @li @b getBitValue_confirmedTime() and @b setBitValue_confirmedTime().
        COMMS_BITMASK_BITS_ACCESS(
            confirmedAvai,
            confirmedDate,
            confirmedTime
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::Flags2Common::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavPvtFieldsCommon::Flags2Common::bitName(
                    static_cast<std::size_t>(idx));
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
            return ublox::message::NavPvtFieldsCommon::NumSVCommon::name();
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
            return ublox::message::NavPvtFieldsCommon::VelNCommon::name();
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
            return ublox::message::NavPvtFieldsCommon::VelECommon::name();
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
            return ublox::message::NavPvtFieldsCommon::VelDCommon::name();
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
            return ublox::message::NavPvtFieldsCommon::GSpeedCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"heading"</b> field.
    using Heading =
        ublox::field::Heading<
            TOpt
        >;
    
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
            return ublox::message::NavPvtFieldsCommon::SAccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"headingAcc"</b> field.
    using HeadingAcc =
        ublox::field::HeadingAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"pDop"</b> field.
    struct PDop : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::PDopCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavPvtFieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Year,
        Month,
        Day,
        Hour,
        Min,
        Sec,
        Valid,
        TAcc,
        Nano,
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
        Heading,
        SAcc,
        HeadingAcc,
        PDop,
        Reserved2,
        Reserved3
    >;
};

/// @brief Definition of <b>"NAV-PVT"</b> message class.
/// @details
///     See @ref NavPvtFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavPvt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavPvt : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavPvt,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPvt>,
        comms::option::def::FieldsImpl<typename NavPvtFields<TOpt>::All>,
        comms::option::def::MsgType<NavPvt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavPvt,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPvt>,
            comms::option::def::FieldsImpl<typename NavPvtFields<TOpt>::All>,
            comms::option::def::MsgType<NavPvt<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavPvtFields::Itow field.
    ///     @li @b Field_year type and @b field_year() access fuction
    ///         for @ref NavPvtFields::Year field.
    ///     @li @b Field_month type and @b field_month() access fuction
    ///         for @ref NavPvtFields::Month field.
    ///     @li @b Field_day type and @b field_day() access fuction
    ///         for @ref NavPvtFields::Day field.
    ///     @li @b Field_hour type and @b field_hour() access fuction
    ///         for @ref NavPvtFields::Hour field.
    ///     @li @b Field_min type and @b field_min() access fuction
    ///         for @ref NavPvtFields::Min field.
    ///     @li @b Field_sec type and @b field_sec() access fuction
    ///         for @ref NavPvtFields::Sec field.
    ///     @li @b Field_valid type and @b field_valid() access fuction
    ///         for @ref NavPvtFields::Valid field.
    ///     @li @b Field_tAcc type and @b field_tAcc() access fuction
    ///         for @ref NavPvtFields::TAcc field.
    ///     @li @b Field_nano type and @b field_nano() access fuction
    ///         for @ref NavPvtFields::Nano field.
    ///     @li @b Field_fixType type and @b field_fixType() access fuction
    ///         for @ref NavPvtFields::FixType field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref NavPvtFields::Flags field.
    ///     @li @b Field_flags2 type and @b field_flags2() access fuction
    ///         for @ref NavPvtFields::Flags2 field.
    ///     @li @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref NavPvtFields::NumSV field.
    ///     @li @b Field_lon type and @b field_lon() access fuction
    ///         for @ref NavPvtFields::Lon field.
    ///     @li @b Field_lat type and @b field_lat() access fuction
    ///         for @ref NavPvtFields::Lat field.
    ///     @li @b Field_height type and @b field_height() access fuction
    ///         for @ref NavPvtFields::Height field.
    ///     @li @b Field_hMSL type and @b field_hMSL() access fuction
    ///         for @ref NavPvtFields::HMSL field.
    ///     @li @b Field_hAcc type and @b field_hAcc() access fuction
    ///         for @ref NavPvtFields::HAcc field.
    ///     @li @b Field_vAcc type and @b field_vAcc() access fuction
    ///         for @ref NavPvtFields::VAcc field.
    ///     @li @b Field_velN type and @b field_velN() access fuction
    ///         for @ref NavPvtFields::VelN field.
    ///     @li @b Field_velE type and @b field_velE() access fuction
    ///         for @ref NavPvtFields::VelE field.
    ///     @li @b Field_velD type and @b field_velD() access fuction
    ///         for @ref NavPvtFields::VelD field.
    ///     @li @b Field_gSpeed type and @b field_gSpeed() access fuction
    ///         for @ref NavPvtFields::GSpeed field.
    ///     @li @b Field_heading type and @b field_heading() access fuction
    ///         for @ref NavPvtFields::Heading field.
    ///     @li @b Field_sAcc type and @b field_sAcc() access fuction
    ///         for @ref NavPvtFields::SAcc field.
    ///     @li @b Field_headingAcc type and @b field_headingAcc() access fuction
    ///         for @ref NavPvtFields::HeadingAcc field.
    ///     @li @b Field_pDop type and @b field_pDop() access fuction
    ///         for @ref NavPvtFields::PDop field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref NavPvtFields::Reserved2 field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref NavPvtFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        year,
        month,
        day,
        hour,
        min,
        sec,
        valid,
        tAcc,
        nano,
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
        heading,
        sAcc,
        headingAcc,
        pDop,
        reserved2,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 84U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 84U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavPvtCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


