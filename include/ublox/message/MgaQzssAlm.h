// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"MGA-QZSS-ALM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaQzssAlmCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaQzssAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaQzssAlm
/// @headerfile "ublox/message/MgaQzssAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaQzssAlmFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaQzssAlmFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaQzssAlmFieldsCommon::SvidCommon::name();
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
            return ublox::message::MgaQzssAlmFieldsCommon::SvHealthCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"e"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 2097152L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::ECommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"almWNa"</b> field.
    struct AlmWNa : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::AlmWNaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"toa"</b> field.
    struct Toa : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ScalingRatio<4096, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::ToaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaI"</b> field.
    struct DeltaI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 524288L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::DeltaICommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"omegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x4000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::OmegaDotCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"sqrtA"</b> field.
    struct SqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 2048>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::SqrtACommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"omega0"</b> field.
    struct Omega0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 8388608L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::Omega0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 8388608L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::OmegaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"m0"</b> field.
    struct M0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 8388608L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::M0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"af0"</b> field.
    struct Af0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 1048576L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::Af0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"af1"</b> field.
    struct Af1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x4000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::Af1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserve1"</b> field.
    struct Reserve1 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaQzssAlmFieldsCommon::Reserve1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        SvHealth,
        E,
        AlmWNa,
        Toa,
        DeltaI,
        OmegaDot,
        SqrtA,
        Omega0,
        Omega,
        M0,
        Af0,
        Af1,
        Reserve1
    >;
};

/// @brief Definition of <b>"MGA-QZSS-ALM"</b> message class.
/// @details
///     See @ref MgaQzssAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaQzssAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaQzssAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaQzssAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaQzss>,
        comms::option::def::FieldsImpl<typename MgaQzssAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaQzssAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaQzssAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaQzss>,
            comms::option::def::FieldsImpl<typename MgaQzssAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaQzssAlm<TMsgBase, TOpt> >,
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
    ///         for @ref MgaQzssAlmFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaQzssAlmFields::Version field.
    ///     @li @b Field_svid type and @b field_svid() access fuction
    ///         for @ref MgaQzssAlmFields::Svid field.
    ///     @li @b Field_svHealth type and @b field_svHealth() access fuction
    ///         for @ref MgaQzssAlmFields::SvHealth field.
    ///     @li @b Field_e type and @b field_e() access fuction
    ///         for @ref MgaQzssAlmFields::E field.
    ///     @li @b Field_almWNa type and @b field_almWNa() access fuction
    ///         for @ref MgaQzssAlmFields::AlmWNa field.
    ///     @li @b Field_toa type and @b field_toa() access fuction
    ///         for @ref MgaQzssAlmFields::Toa field.
    ///     @li @b Field_deltaI type and @b field_deltaI() access fuction
    ///         for @ref MgaQzssAlmFields::DeltaI field.
    ///     @li @b Field_omegaDot type and @b field_omegaDot() access fuction
    ///         for @ref MgaQzssAlmFields::OmegaDot field.
    ///     @li @b Field_sqrtA type and @b field_sqrtA() access fuction
    ///         for @ref MgaQzssAlmFields::SqrtA field.
    ///     @li @b Field_omega0 type and @b field_omega0() access fuction
    ///         for @ref MgaQzssAlmFields::Omega0 field.
    ///     @li @b Field_omega type and @b field_omega() access fuction
    ///         for @ref MgaQzssAlmFields::Omega field.
    ///     @li @b Field_m0 type and @b field_m0() access fuction
    ///         for @ref MgaQzssAlmFields::M0 field.
    ///     @li @b Field_af0 type and @b field_af0() access fuction
    ///         for @ref MgaQzssAlmFields::Af0 field.
    ///     @li @b Field_af1 type and @b field_af1() access fuction
    ///         for @ref MgaQzssAlmFields::Af1 field.
    ///     @li @b Field_reserve1 type and @b field_reserve1() access fuction
    ///         for @ref MgaQzssAlmFields::Reserve1 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        svid,
        svHealth,
        e,
        almWNa,
        toa,
        deltaI,
        omegaDot,
        sqrtA,
        omega0,
        omega,
        m0,
        af0,
        af1,
        reserve1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaQzssAlmCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


