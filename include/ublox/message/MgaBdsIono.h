// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"MGA-BDS-IONO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaBdsIonoCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaBdsIono.
/// @tparam TOpt Extra options
/// @see @ref MgaBdsIono
/// @headerfile "ublox/message/MgaBdsIono.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaBdsIonoFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<6>,
            comms::option::def::ValidNumValue<6>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaBdsIonoFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaBdsIonoFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"alpha0"</b> field.
    struct Alpha0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Alpha0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"alpha1"</b> field.
    struct Alpha1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 134217728L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Alpha1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"alpha2"</b> field.
    struct Alpha2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16777216L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Alpha2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"alpha3"</b> field.
    struct Alpha3 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16777216L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Alpha3Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"beta0"</b> field.
    struct Beta0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<2048, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Beta0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"beta1"</b> field.
    struct Beta1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<16384, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Beta1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"beta2"</b> field.
    struct Beta2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<65536L, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Beta2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"beta3"</b> field.
    struct Beta3 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<65536L, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsIonoFieldsCommon::Beta3Common::name();
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
            return ublox::message::MgaBdsIonoFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        Alpha0,
        Alpha1,
        Alpha2,
        Alpha3,
        Beta0,
        Beta1,
        Beta2,
        Beta3,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-BDS-IONO"</b> message class.
/// @details
///     See @ref MgaBdsIonoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaBdsIono.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaBdsIono : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaBdsIono,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
        comms::option::def::FieldsImpl<typename MgaBdsIonoFields<TOpt>::All>,
        comms::option::def::MsgType<MgaBdsIono<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaBdsIono,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
            comms::option::def::FieldsImpl<typename MgaBdsIonoFields<TOpt>::All>,
            comms::option::def::MsgType<MgaBdsIono<TMsgBase, TOpt> >,
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
    ///         for @ref MgaBdsIonoFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaBdsIonoFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaBdsIonoFields::Reserved1 field.
    ///     @li @b Field_alpha0 type and @b field_alpha0() access fuction
    ///         for @ref MgaBdsIonoFields::Alpha0 field.
    ///     @li @b Field_alpha1 type and @b field_alpha1() access fuction
    ///         for @ref MgaBdsIonoFields::Alpha1 field.
    ///     @li @b Field_alpha2 type and @b field_alpha2() access fuction
    ///         for @ref MgaBdsIonoFields::Alpha2 field.
    ///     @li @b Field_alpha3 type and @b field_alpha3() access fuction
    ///         for @ref MgaBdsIonoFields::Alpha3 field.
    ///     @li @b Field_beta0 type and @b field_beta0() access fuction
    ///         for @ref MgaBdsIonoFields::Beta0 field.
    ///     @li @b Field_beta1 type and @b field_beta1() access fuction
    ///         for @ref MgaBdsIonoFields::Beta1 field.
    ///     @li @b Field_beta2 type and @b field_beta2() access fuction
    ///         for @ref MgaBdsIonoFields::Beta2 field.
    ///     @li @b Field_beta3 type and @b field_beta3() access fuction
    ///         for @ref MgaBdsIonoFields::Beta3 field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaBdsIonoFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        alpha0,
        alpha1,
        alpha2,
        alpha3,
        beta0,
        beta1,
        beta2,
        beta3,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaBdsIonoCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


