// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"NAV-SOL"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Dop.h"
#include "ublox/field/EcefVX.h"
#include "ublox/field/EcefVY.h"
#include "ublox/field/EcefVZ.h"
#include "ublox/field/EcefX.h"
#include "ublox/field/EcefY.h"
#include "ublox/field/EcefZ.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Ftow.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/Itow.h"
#include "ublox/field/PAcc.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res4.h"
#include "ublox/field/SAcc.h"
#include "ublox/message/NavSolCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavSol.
/// @tparam TOpt Extra options
/// @see @ref NavSol
/// @headerfile "ublox/message/NavSol.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSolFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"fTOW"</b> field.
    using Ftow =
        ublox::field::Ftow<
            TOpt
        >;
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSolFieldsCommon::WeekCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gpsFix"</b> field.
    using GpsFix =
        ublox::field::GpsFix<
            TOpt
        >;
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_GPSfixOK, @b getBitValue_GPSfixOK() and @b setBitValue_GPSfixOK().
        ///      @li @b BitIdx_DiffSoln, @b getBitValue_DiffSoln() and @b setBitValue_DiffSoln().
        ///      @li @b BitIdx_WKNSET, @b getBitValue_WKNSET() and @b setBitValue_WKNSET().
        ///      @li @b BitIdx_TOWSET, @b getBitValue_TOWSET() and @b setBitValue_TOWSET().
        COMMS_BITMASK_BITS_SEQ(
            GPSfixOK,
            DiffSoln,
            WKNSET,
            TOWSET
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSolFieldsCommon::FlagsCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavSolFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"ecefX"</b> field.
    using EcefX =
        ublox::field::EcefX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefY"</b> field.
    using EcefY =
        ublox::field::EcefY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    using EcefZ =
        ublox::field::EcefZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"pAcc"</b> field.
    using PAcc =
        ublox::field::PAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVX"</b> field.
    using EcefVX =
        ublox::field::EcefVX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVY"</b> field.
    using EcefVY =
        ublox::field::EcefVY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVZ"</b> field.
    using EcefVZ =
        ublox::field::EcefVZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"sAcc"</b> field.
    using SAcc =
        ublox::field::SAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"pDOP"</b> field.
    struct PDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSolFieldsCommon::PDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSolFieldsCommon::Reserved1Common::name();
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
            return ublox::message::NavSolFieldsCommon::NumSVCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSolFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Ftow,
        Week,
        GpsFix,
        Flags,
        EcefX,
        EcefY,
        EcefZ,
        PAcc,
        EcefVX,
        EcefVY,
        EcefVZ,
        SAcc,
        PDOP,
        Reserved1,
        NumSV,
        Reserved2
    >;
};

/// @brief Definition of <b>"NAV-SOL"</b> message class.
/// @details
///     See @ref NavSolFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSol.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSol : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSol,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSol>,
        comms::option::def::FieldsImpl<typename NavSolFields<TOpt>::All>,
        comms::option::def::MsgType<NavSol<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSol,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSol>,
            comms::option::def::FieldsImpl<typename NavSolFields<TOpt>::All>,
            comms::option::def::MsgType<NavSol<TMsgBase, TOpt> >,
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
    ///         for @ref NavSolFields::Itow field.
    ///     @li @b Field_ftow type and @b field_ftow() access fuction
    ///         for @ref NavSolFields::Ftow field.
    ///     @li @b Field_week type and @b field_week() access fuction
    ///         for @ref NavSolFields::Week field.
    ///     @li @b Field_gpsFix type and @b field_gpsFix() access fuction
    ///         for @ref NavSolFields::GpsFix field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref NavSolFields::Flags field.
    ///     @li @b Field_ecefX type and @b field_ecefX() access fuction
    ///         for @ref NavSolFields::EcefX field.
    ///     @li @b Field_ecefY type and @b field_ecefY() access fuction
    ///         for @ref NavSolFields::EcefY field.
    ///     @li @b Field_ecefZ type and @b field_ecefZ() access fuction
    ///         for @ref NavSolFields::EcefZ field.
    ///     @li @b Field_pAcc type and @b field_pAcc() access fuction
    ///         for @ref NavSolFields::PAcc field.
    ///     @li @b Field_ecefVX type and @b field_ecefVX() access fuction
    ///         for @ref NavSolFields::EcefVX field.
    ///     @li @b Field_ecefVY type and @b field_ecefVY() access fuction
    ///         for @ref NavSolFields::EcefVY field.
    ///     @li @b Field_ecefVZ type and @b field_ecefVZ() access fuction
    ///         for @ref NavSolFields::EcefVZ field.
    ///     @li @b Field_sAcc type and @b field_sAcc() access fuction
    ///         for @ref NavSolFields::SAcc field.
    ///     @li @b Field_pDOP type and @b field_pDOP() access fuction
    ///         for @ref NavSolFields::PDOP field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavSolFields::Reserved1 field.
    ///     @li @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref NavSolFields::NumSV field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref NavSolFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        ftow,
        week,
        gpsFix,
        flags,
        ecefX,
        ecefY,
        ecefZ,
        pAcc,
        ecefVX,
        ecefVY,
        ecefVZ,
        sAcc,
        pDOP,
        reserved1,
        numSV,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 52U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 52U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavSolCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


