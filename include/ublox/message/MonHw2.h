// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"MON-HW2"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Res8.h"
#include "ublox/message/MonHw2Common.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonHw2.
/// @tparam TOpt Extra options
/// @see @ref MonHw2
/// @headerfile "ublox/message/MonHw2.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonHw2Fields
{
    /// @brief Definition of <b>"ofsI"</b> field.
    struct OfsI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::OfsICommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"magI"</b> field.
    struct MagI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::MagICommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"ofsQ"</b> field.
    struct OfsQ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::OfsQCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"magQ"</b> field.
    struct MagQ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::MagQCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"cfgSource"</b> field.
    /// @see @ref ublox::message::MonHw2FieldsCommon::CfgSourceVal
    class CfgSource : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::MonHw2FieldsCommon::CfgSourceVal,
            comms::option::def::ValidNumValue<102>,
            comms::option::def::ValidNumValueRange<111, 112>,
            comms::option::def::ValidNumValue<114>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::MonHw2FieldsCommon::CfgSourceVal,
                comms::option::def::ValidNumValue<102>,
                comms::option::def::ValidNumValueRange<111, 112>,
                comms::option::def::ValidNumValue<114>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::CfgSourceCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::MonHw2FieldsCommon::CfgSourceCommon::valueName(val);
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
            return ublox::message::MonHw2FieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"lowLevCfg"</b> field.
    struct LowLevCfg : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::LowLevCfgCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res8<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"postStatus"</b> field.
    struct PostStatus : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::PostStatusCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonHw2FieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        OfsI,
        MagI,
        OfsQ,
        MagQ,
        CfgSource,
        Reserved1,
        LowLevCfg,
        Reserved2,
        PostStatus,
        Reserved3
    >;
};

/// @brief Definition of <b>"MON-HW2"</b> message class.
/// @details
///     See @ref MonHw2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonHw2.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonHw2 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonHw2,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw2>,
        comms::option::def::FieldsImpl<typename MonHw2Fields<TOpt>::All>,
        comms::option::def::MsgType<MonHw2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonHw2,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw2>,
            comms::option::def::FieldsImpl<typename MonHw2Fields<TOpt>::All>,
            comms::option::def::MsgType<MonHw2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_ofsI type and @b field_ofsI() access fuction
    ///         for @ref MonHw2Fields::OfsI field.
    ///     @li @b Field_magI type and @b field_magI() access fuction
    ///         for @ref MonHw2Fields::MagI field.
    ///     @li @b Field_ofsQ type and @b field_ofsQ() access fuction
    ///         for @ref MonHw2Fields::OfsQ field.
    ///     @li @b Field_magQ type and @b field_magQ() access fuction
    ///         for @ref MonHw2Fields::MagQ field.
    ///     @li @b Field_cfgSource type and @b field_cfgSource() access fuction
    ///         for @ref MonHw2Fields::CfgSource field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MonHw2Fields::Reserved1 field.
    ///     @li @b Field_lowLevCfg type and @b field_lowLevCfg() access fuction
    ///         for @ref MonHw2Fields::LowLevCfg field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MonHw2Fields::Reserved2 field.
    ///     @li @b Field_postStatus type and @b field_postStatus() access fuction
    ///         for @ref MonHw2Fields::PostStatus field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref MonHw2Fields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        ofsI,
        magI,
        ofsQ,
        magQ,
        cfgSource,
        reserved1,
        lowLevCfg,
        reserved2,
        postStatus,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MonHw2Common::name();
    }
    
    
};

} // namespace message

} // namespace ublox


