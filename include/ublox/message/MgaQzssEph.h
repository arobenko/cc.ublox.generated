// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"MGA-QZSS-EPH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/message/MgaQzssEphCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaQzssEph.
/// @tparam TOpt Extra options
/// @see @ref MgaQzssEph
/// @headerfile "ublox/message/MgaQzssEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaQzssEphFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::TypeCommon::name();
        }
        
    };
    
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
            return ublox::message::MgaQzssEphFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::SvidCommon::name();
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
            return ublox::message::MgaQzssEphFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"fitInterval"</b> field.
    struct FitInterval : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::FitIntervalCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"uraIndex"</b> field.
    struct UraIndex : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::UraIndexCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svHealth"</b> field.
    struct SvHealth : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::SvHealthCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tgd"</b> field.
    struct Tgd : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::TgdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"iodc"</b> field.
    struct Iodc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::IodcCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"toc"</b> field.
    struct Toc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<16, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::TocCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"af2"</b> field.
    struct Af2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 0x80000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::Af2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"af1"</b> field.
    struct Af1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::Af1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"af0"</b> field.
    struct Af0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::Af0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"crs"</b> field.
    struct Crs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::CrsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaN"</b> field.
    struct DeltaN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::DeltaNCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"m0"</b> field.
    struct M0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::M0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"cuc"</b> field.
    struct Cuc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::CucCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"cus"</b> field.
    struct Cus : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::CusCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"e"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 0x200000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::ECommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"sqrtA"</b> field.
    struct SqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 524288L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::SqrtACommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"toe"</b> field.
    struct Toe : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<16, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::ToeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"cic"</b> field.
    struct Cic : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::CicCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"omega0"</b> field.
    struct Omega0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::Omega0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"cis"</b> field.
    struct Cis : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::CisCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"crc"</b> field.
    struct Crc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::CrcCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"i0"</b> field.
    struct I0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::I0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::OmegaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"omegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::OmegaDotCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"idot"</b> field.
    struct Idot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::IdotCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssEphFieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        Reserved1,
        FitInterval,
        UraIndex,
        SvHealth,
        Tgd,
        Iodc,
        Toc,
        Reserved2,
        Af2,
        Af1,
        Af0,
        Crs,
        DeltaN,
        M0,
        Cuc,
        Cus,
        E,
        SqrtA,
        Toe,
        Cic,
        Omega0,
        Cis,
        Crc,
        I0,
        Omega,
        OmegaDot,
        Idot,
        Reserved3
    >;
};

/// @brief Definition of <b>"MGA-QZSS-EPH"</b> message class.
/// @details
///     See @ref MgaQzssEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaQzssEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaQzssEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaQzssEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaQzss>,
        comms::option::def::FieldsImpl<typename MgaQzssEphFields<TOpt>::All>,
        comms::option::def::MsgType<MgaQzssEph<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaQzssEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaQzss>,
            comms::option::def::FieldsImpl<typename MgaQzssEphFields<TOpt>::All>,
            comms::option::def::MsgType<MgaQzssEph<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref MgaQzssEphFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaQzssEphFields::Version field.
    ///     @li @b Field_svid type and @b field_svid() access fuction
    ///         for @ref MgaQzssEphFields::Svid field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaQzssEphFields::Reserved1 field.
    ///     @li @b Field_fitInterval type and @b field_fitInterval() access fuction
    ///         for @ref MgaQzssEphFields::FitInterval field.
    ///     @li @b Field_uraIndex type and @b field_uraIndex() access fuction
    ///         for @ref MgaQzssEphFields::UraIndex field.
    ///     @li @b Field_svHealth type and @b field_svHealth() access fuction
    ///         for @ref MgaQzssEphFields::SvHealth field.
    ///     @li @b Field_tgd type and @b field_tgd() access fuction
    ///         for @ref MgaQzssEphFields::Tgd field.
    ///     @li @b Field_iodc type and @b field_iodc() access fuction
    ///         for @ref MgaQzssEphFields::Iodc field.
    ///     @li @b Field_toc type and @b field_toc() access fuction
    ///         for @ref MgaQzssEphFields::Toc field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaQzssEphFields::Reserved2 field.
    ///     @li @b Field_af2 type and @b field_af2() access fuction
    ///         for @ref MgaQzssEphFields::Af2 field.
    ///     @li @b Field_af1 type and @b field_af1() access fuction
    ///         for @ref MgaQzssEphFields::Af1 field.
    ///     @li @b Field_af0 type and @b field_af0() access fuction
    ///         for @ref MgaQzssEphFields::Af0 field.
    ///     @li @b Field_crs type and @b field_crs() access fuction
    ///         for @ref MgaQzssEphFields::Crs field.
    ///     @li @b Field_deltaN type and @b field_deltaN() access fuction
    ///         for @ref MgaQzssEphFields::DeltaN field.
    ///     @li @b Field_m0 type and @b field_m0() access fuction
    ///         for @ref MgaQzssEphFields::M0 field.
    ///     @li @b Field_cuc type and @b field_cuc() access fuction
    ///         for @ref MgaQzssEphFields::Cuc field.
    ///     @li @b Field_cus type and @b field_cus() access fuction
    ///         for @ref MgaQzssEphFields::Cus field.
    ///     @li @b Field_e type and @b field_e() access fuction
    ///         for @ref MgaQzssEphFields::E field.
    ///     @li @b Field_sqrtA type and @b field_sqrtA() access fuction
    ///         for @ref MgaQzssEphFields::SqrtA field.
    ///     @li @b Field_toe type and @b field_toe() access fuction
    ///         for @ref MgaQzssEphFields::Toe field.
    ///     @li @b Field_cic type and @b field_cic() access fuction
    ///         for @ref MgaQzssEphFields::Cic field.
    ///     @li @b Field_omega0 type and @b field_omega0() access fuction
    ///         for @ref MgaQzssEphFields::Omega0 field.
    ///     @li @b Field_cis type and @b field_cis() access fuction
    ///         for @ref MgaQzssEphFields::Cis field.
    ///     @li @b Field_crc type and @b field_crc() access fuction
    ///         for @ref MgaQzssEphFields::Crc field.
    ///     @li @b Field_i0 type and @b field_i0() access fuction
    ///         for @ref MgaQzssEphFields::I0 field.
    ///     @li @b Field_omega type and @b field_omega() access fuction
    ///         for @ref MgaQzssEphFields::Omega field.
    ///     @li @b Field_omegaDot type and @b field_omegaDot() access fuction
    ///         for @ref MgaQzssEphFields::OmegaDot field.
    ///     @li @b Field_idot type and @b field_idot() access fuction
    ///         for @ref MgaQzssEphFields::Idot field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref MgaQzssEphFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        svid,
        reserved1,
        fitInterval,
        uraIndex,
        svHealth,
        tgd,
        iodc,
        toc,
        reserved2,
        af2,
        af1,
        af0,
        crs,
        deltaN,
        m0,
        cuc,
        cus,
        e,
        sqrtA,
        toe,
        cic,
        omega0,
        cis,
        crc,
        i0,
        omega,
        omegaDot,
        idot,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 68U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 68U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaQzssEphCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


