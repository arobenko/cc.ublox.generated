// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"NAV-ATT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res3.h"
#include "ublox/message/NavAttCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavAtt.
/// @tparam TOpt Extra options
/// @see @ref NavAtt
/// @headerfile "ublox/message/NavAtt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavAttFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"roll"</b> field.
    struct Roll : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::RollCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"pitch"</b> field.
    struct Pitch : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::PitchCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"heading"</b> field.
    struct Heading : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::HeadingCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"accRoll"</b> field.
    struct AccRoll : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::AccRollCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"accPitch"</b> field.
    struct AccPitch : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::AccPitchCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"accHeading"</b> field.
    struct AccHeading : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAttFieldsCommon::AccHeadingCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        Reserved1,
        Roll,
        Pitch,
        Heading,
        AccRoll,
        AccPitch,
        AccHeading
    >;
};

/// @brief Definition of <b>"NAV-ATT"</b> message class.
/// @details
///     See @ref NavAttFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavAtt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavAtt : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAtt>,
        comms::option::def::FieldsImpl<typename NavAttFields<TOpt>::All>,
        comms::option::def::MsgType<NavAtt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAtt>,
            comms::option::def::FieldsImpl<typename NavAttFields<TOpt>::All>,
            comms::option::def::MsgType<NavAtt<TMsgBase, TOpt> >,
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
    ///         for @ref NavAttFields::Itow field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref NavAttFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavAttFields::Reserved1 field.
    ///     @li @b Field_roll type and @b field_roll() access fuction
    ///         for @ref NavAttFields::Roll field.
    ///     @li @b Field_pitch type and @b field_pitch() access fuction
    ///         for @ref NavAttFields::Pitch field.
    ///     @li @b Field_heading type and @b field_heading() access fuction
    ///         for @ref NavAttFields::Heading field.
    ///     @li @b Field_accRoll type and @b field_accRoll() access fuction
    ///         for @ref NavAttFields::AccRoll field.
    ///     @li @b Field_accPitch type and @b field_accPitch() access fuction
    ///         for @ref NavAttFields::AccPitch field.
    ///     @li @b Field_accHeading type and @b field_accHeading() access fuction
    ///         for @ref NavAttFields::AccHeading field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        version,
        reserved1,
        roll,
        pitch,
        heading,
        accRoll,
        accPitch,
        accHeading
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 32U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 32U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavAttCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


