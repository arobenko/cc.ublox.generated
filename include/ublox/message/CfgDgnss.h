// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"CFG-DGNSS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/message/CfgDgnssCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgDgnss.
/// @tparam TOpt Extra options
/// @see @ref CfgDgnss
/// @headerfile "ublox/message/CfgDgnss.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDgnssFields
{
    /// @brief Definition of <b>"dgnssMode"</b> field.
    /// @see @ref ublox::message::CfgDgnssFieldsCommon::DgnssModeVal
    class DgnssMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgDgnssFieldsCommon::DgnssModeVal,
            comms::option::def::ValidNumValueRange<2, 3>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgDgnssFieldsCommon::DgnssModeVal,
                comms::option::def::ValidNumValueRange<2, 3>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDgnssFieldsCommon::DgnssModeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgDgnssFieldsCommon::DgnssModeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
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
            return ublox::message::CfgDgnssFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        DgnssMode,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-DGNSS"</b> message class.
/// @details
///     See @ref CfgDgnssFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgDgnss.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDgnss : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDgnss>,
        comms::option::def::FieldsImpl<typename CfgDgnssFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDgnss<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDgnss>,
            comms::option::def::FieldsImpl<typename CfgDgnssFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDgnss<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_dgnssMode type and @b field_dgnssMode() access fuction
    ///         for @ref CfgDgnssFields::DgnssMode field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgDgnssFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        dgnssMode,
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
        return ublox::message::CfgDgnssCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


