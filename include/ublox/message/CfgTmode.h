// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"CFG-TMODE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/CfgTmodeCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgTmode.
/// @tparam TOpt Extra options
/// @see @ref CfgTmode
/// @headerfile "ublox/message/CfgTmode.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTmodeFields
{
    /// @brief Definition of <b>"timeMode"</b> field.
    /// @see @ref ublox::message::CfgTmodeFieldsCommon::TimeModeVal
    class TimeMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgTmodeFieldsCommon::TimeModeVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgTmodeFieldsCommon::TimeModeVal,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::TimeModeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgTmodeFieldsCommon::TimeModeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosX"</b> field.
    struct FixedPosX : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::FixedPosXCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosY"</b> field.
    struct FixedPosY : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::FixedPosYCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosZ"</b> field.
    struct FixedPosZ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::FixedPosZCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosVar"</b> field.
    struct FixedPosVar : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::FixedPosVarCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svinMinDur"</b> field.
    struct SvinMinDur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::SvinMinDurCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svinVarLimit"</b> field.
    struct SvinVarLimit : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgTmodeFieldsCommon::SvinVarLimitCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TimeMode,
        FixedPosX,
        FixedPosY,
        FixedPosZ,
        FixedPosVar,
        SvinMinDur,
        SvinVarLimit
    >;
};

/// @brief Definition of <b>"CFG-TMODE"</b> message class.
/// @details
///     See @ref CfgTmodeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTmode.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTmode : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode>,
        comms::option::def::FieldsImpl<typename CfgTmodeFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmode<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode>,
            comms::option::def::FieldsImpl<typename CfgTmodeFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmode<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_timeMode type and @b field_timeMode() access fuction
    ///         for @ref CfgTmodeFields::TimeMode field.
    ///     @li @b Field_fixedPosX type and @b field_fixedPosX() access fuction
    ///         for @ref CfgTmodeFields::FixedPosX field.
    ///     @li @b Field_fixedPosY type and @b field_fixedPosY() access fuction
    ///         for @ref CfgTmodeFields::FixedPosY field.
    ///     @li @b Field_fixedPosZ type and @b field_fixedPosZ() access fuction
    ///         for @ref CfgTmodeFields::FixedPosZ field.
    ///     @li @b Field_fixedPosVar type and @b field_fixedPosVar() access fuction
    ///         for @ref CfgTmodeFields::FixedPosVar field.
    ///     @li @b Field_svinMinDur type and @b field_svinMinDur() access fuction
    ///         for @ref CfgTmodeFields::SvinMinDur field.
    ///     @li @b Field_svinVarLimit type and @b field_svinVarLimit() access fuction
    ///         for @ref CfgTmodeFields::SvinVarLimit field.
    COMMS_MSG_FIELDS_NAMES(
        timeMode,
        fixedPosX,
        fixedPosY,
        fixedPosZ,
        fixedPosVar,
        svinMinDur,
        svinVarLimit
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgTmodeCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


