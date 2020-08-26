// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"CFG-HNR"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/message/CfgHnrCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgHnr.
/// @tparam TOpt Extra options
/// @see @ref CfgHnr
/// @headerfile "ublox/message/CfgHnr.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgHnrFields
{
    /// @brief Definition of <b>"highNavRate"</b> field.
    struct HighNavRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsHertz
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgHnrFieldsCommon::HighNavRateCommon::name();
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
            return ublox::message::CfgHnrFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        HighNavRate,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-HNR"</b> message class.
/// @details
///     See @ref CfgHnrFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgHnr.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgHnr : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgHnr>,
        comms::option::def::FieldsImpl<typename CfgHnrFields<TOpt>::All>,
        comms::option::def::MsgType<CfgHnr<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgHnr>,
            comms::option::def::FieldsImpl<typename CfgHnrFields<TOpt>::All>,
            comms::option::def::MsgType<CfgHnr<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_highNavRate type and @b field_highNavRate() access fuction
    ///         for @ref CfgHnrFields::HighNavRate field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgHnrFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        highNavRate,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 4U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgHnrCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


