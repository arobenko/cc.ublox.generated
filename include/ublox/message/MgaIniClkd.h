/// @file
/// @brief Contains definition of <b>"MGA-BDS-CLKD"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniClkd.
/// @tparam TOpt Extra options
/// @see @ref MgaIniClkd
/// @headerfile "ublox/message/MgaIniClkd.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniClkdFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<32>,
            comms::option::def::ValidNumValue<32>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
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
            return "version";
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
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"clkD"</b> field.
    struct ClkD : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "clkD";
        }
        
    };
    
    /// @brief Definition of <b>"clkDAcc"</b> field.
    struct ClkDAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "clkDAcc";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        ClkD,
        ClkDAcc
    >;
};

/// @brief Definition of <b>"MGA-BDS-CLKD"</b> message class.
/// @details
///     See @ref MgaIniClkdFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniClkd.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniClkd : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniClkd,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniClkdFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniClkd<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniClkd,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniClkdFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniClkd<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() fuction
    ///         for @ref MgaIniClkdFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaIniClkdFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaIniClkdFields::Reserved1 field.
    ///     @li @b Field_clkD type and @b field_clkD() fuction
    ///         for @ref MgaIniClkdFields::ClkD field.
    ///     @li @b Field_clkDAcc type and @b field_clkDAcc() fuction
    ///         for @ref MgaIniClkdFields::ClkDAcc field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        clkD,
        clkDAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-CLKD";
    }
    
    
};

} // namespace message

} // namespace ublox


