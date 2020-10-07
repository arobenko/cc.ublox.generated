// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"AID-ALP"</b> message and its fields.

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
#include "ublox/field/Res4.h"
#include "ublox/message/AidAlpCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidAlp.
/// @tparam TOpt Extra options
/// @see @ref AidAlp
/// @headerfile "ublox/message/AidAlp.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAlpFields
{
    /// @brief Definition of <b>"predTow"</b> field.
    struct PredTow : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidAlpFieldsCommon::PredTowCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"predDur"</b> field.
    struct PredDur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidAlpFieldsCommon::PredDurCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"age"</b> field.
    struct Age : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidAlpFieldsCommon::AgeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"predWno"</b> field.
    struct PredWno : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidAlpFieldsCommon::PredWnoCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"almWno"</b> field.
    struct AlmWno : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidAlpFieldsCommon::AlmWnoCommon::name();
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
            return ublox::message::AidAlpFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"svs"</b> field.
    struct Svs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidAlpFieldsCommon::SvsCommon::name();
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
            return ublox::message::AidAlpFieldsCommon::Reserved2Common::name();
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
            return ublox::message::AidAlpFieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PredTow,
        PredDur,
        Age,
        PredWno,
        AlmWno,
        Reserved1,
        Svs,
        Reserved2,
        Reserved3
    >;
};

/// @brief Definition of <b>"AID-ALP"</b> message class.
/// @details
///     See @ref AidAlpFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAlp.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAlp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidAlp,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlp>,
        comms::option::def::FieldsImpl<typename AidAlpFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidAlp,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlp>,
            comms::option::def::FieldsImpl<typename AidAlpFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_predTow type and @b field_predTow() access fuction
    ///         for @ref AidAlpFields::PredTow field.
    ///     @li @b Field_predDur type and @b field_predDur() access fuction
    ///         for @ref AidAlpFields::PredDur field.
    ///     @li @b Field_age type and @b field_age() access fuction
    ///         for @ref AidAlpFields::Age field.
    ///     @li @b Field_predWno type and @b field_predWno() access fuction
    ///         for @ref AidAlpFields::PredWno field.
    ///     @li @b Field_almWno type and @b field_almWno() access fuction
    ///         for @ref AidAlpFields::AlmWno field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref AidAlpFields::Reserved1 field.
    ///     @li @b Field_svs type and @b field_svs() access fuction
    ///         for @ref AidAlpFields::Svs field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref AidAlpFields::Reserved2 field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref AidAlpFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        predTow,
        predDur,
        age,
        predWno,
        almWno,
        reserved1,
        svs,
        reserved2,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 24U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 24U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::AidAlpCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


