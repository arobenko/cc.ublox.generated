// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"MGA-GAL-UTC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/message/MgaGalUtcCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGalUtc.
/// @tparam TOpt Extra options
/// @see @ref MgaGalUtc
/// @headerfile "ublox/message/MgaGalUtc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGalUtcFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<5>,
            comms::option::def::ValidNumValue<5>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaGalUtcFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"a0"</b> field.
    struct A0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::A0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"a1"</b> field.
    struct A1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::A1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"dtLS"</b> field.
    struct DtLS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::DtLSCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tot"</b> field.
    struct Tot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ScalingRatio<3600, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::TotCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"wnt"</b> field.
    struct Wnt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::WntCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"wnLSF"</b> field.
    struct WnLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::WnLSFCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dN"</b> field.
    struct DN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::DNCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dTLSF"</b> field.
    struct DTLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGalUtcFieldsCommon::DTLSFCommon::name();
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
            return ublox::message::MgaGalUtcFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        A0,
        A1,
        DtLS,
        Tot,
        Wnt,
        WnLSF,
        DN,
        DTLSF,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GAL-UTC"</b> message class.
/// @details
///     See @ref MgaGalUtcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGalUtc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGalUtc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGalUtc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
        comms::option::def::FieldsImpl<typename MgaGalUtcFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGalUtc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGalUtc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
            comms::option::def::FieldsImpl<typename MgaGalUtcFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGalUtc<TMsgBase, TOpt> >,
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
    ///         for @ref MgaGalUtcFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaGalUtcFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaGalUtcFields::Reserved1 field.
    ///     @li @b Field_a0 type and @b field_a0() access fuction
    ///         for @ref MgaGalUtcFields::A0 field.
    ///     @li @b Field_a1 type and @b field_a1() access fuction
    ///         for @ref MgaGalUtcFields::A1 field.
    ///     @li @b Field_dtLS type and @b field_dtLS() access fuction
    ///         for @ref MgaGalUtcFields::DtLS field.
    ///     @li @b Field_tot type and @b field_tot() access fuction
    ///         for @ref MgaGalUtcFields::Tot field.
    ///     @li @b Field_wnt type and @b field_wnt() access fuction
    ///         for @ref MgaGalUtcFields::Wnt field.
    ///     @li @b Field_wnLSF type and @b field_wnLSF() access fuction
    ///         for @ref MgaGalUtcFields::WnLSF field.
    ///     @li @b Field_dN type and @b field_dN() access fuction
    ///         for @ref MgaGalUtcFields::DN field.
    ///     @li @b Field_dTLSF type and @b field_dTLSF() access fuction
    ///         for @ref MgaGalUtcFields::DTLSF field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaGalUtcFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        a0,
        a1,
        dtLS,
        tot,
        wnt,
        wnLSF,
        dN,
        dTLSF,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaGalUtcCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


