/// @file
/// @brief Contains definition of <b>"TIM-DOSC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimDosc.
/// @tparam TOpt Extra options
/// @see @ref TimDosc
/// @headerfile "ublox/message/TimDosc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimDoscFields
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
            return "version";
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
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"value"</b> field.
    struct Value : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "value";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Value
    >;
};

/// @brief Definition of <b>"TIM-DOSC"</b> message class.
/// @details
///     See @ref TimDoscFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimDosc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimDosc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimDosc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimDosc>,
        comms::option::def::FieldsImpl<typename TimDoscFields<TOpt>::All>,
        comms::option::def::MsgType<TimDosc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimDosc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimDosc>,
            comms::option::def::FieldsImpl<typename TimDoscFields<TOpt>::All>,
            comms::option::def::MsgType<TimDosc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref TimDoscFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref TimDoscFields::Reserved1 field.
    ///     @li @b Field_value type and @b field_value() fuction
    ///         for @ref TimDoscFields::Value field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        reserved1,
        value
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-DOSC";
    }
    
    
};

} // namespace message

} // namespace ublox


