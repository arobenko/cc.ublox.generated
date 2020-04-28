// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"MGA-BDS-EOP"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaIniEopCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniEop.
/// @tparam TOpt Extra options
/// @see @ref MgaIniEop
/// @headerfile "ublox/message/MgaIniEop.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniEopFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<48>,
            comms::option::def::ValidNumValue<48>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaIniEopFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaIniEopFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"d2kRef"</b> field.
    struct D2kRef : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::D2kRefCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"d2kMax"</b> field.
    struct D2kMax : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::D2kMaxCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"xpP0"</b> field.
    struct XpP0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::XpP0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"xpP1"</b> field.
    struct XpP1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::XpP1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ypP0"</b> field.
    struct YpP0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::YpP0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ypP1"</b> field.
    struct YpP1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::YpP1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"dUT1"</b> field.
    struct DUT1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 33554432L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::DUT1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ddUT1"</b> field.
    struct DdUT1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::DdUT1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Reserved2 list.
    struct Reserved2Members
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            ublox::field::Res4<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MgaIniEopFieldsCommon::Reserved2MembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename Reserved2Members::Element,
            typename TOpt::message::MgaIniEopFields::Reserved2,
            comms::option::def::SequenceFixedSize<10U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniEopFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        D2kRef,
        D2kMax,
        XpP0,
        XpP1,
        YpP0,
        YpP1,
        DUT1,
        DdUT1,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-BDS-EOP"</b> message class.
/// @details
///     See @ref MgaIniEopFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniEop.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniEop : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniEop,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniEopFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniEop<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniEop,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniEopFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniEop<TMsgBase, TOpt> >,
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
    ///         for @ref MgaIniEopFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaIniEopFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaIniEopFields::Reserved1 field.
    ///     @li @b Field_d2kRef type and @b field_d2kRef() access fuction
    ///         for @ref MgaIniEopFields::D2kRef field.
    ///     @li @b Field_d2kMax type and @b field_d2kMax() access fuction
    ///         for @ref MgaIniEopFields::D2kMax field.
    ///     @li @b Field_xpP0 type and @b field_xpP0() access fuction
    ///         for @ref MgaIniEopFields::XpP0 field.
    ///     @li @b Field_xpP1 type and @b field_xpP1() access fuction
    ///         for @ref MgaIniEopFields::XpP1 field.
    ///     @li @b Field_ypP0 type and @b field_ypP0() access fuction
    ///         for @ref MgaIniEopFields::YpP0 field.
    ///     @li @b Field_ypP1 type and @b field_ypP1() access fuction
    ///         for @ref MgaIniEopFields::YpP1 field.
    ///     @li @b Field_dUT1 type and @b field_dUT1() access fuction
    ///         for @ref MgaIniEopFields::DUT1 field.
    ///     @li @b Field_ddUT1 type and @b field_ddUT1() access fuction
    ///         for @ref MgaIniEopFields::DdUT1 field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaIniEopFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        d2kRef,
        d2kMax,
        xpP0,
        xpP1,
        ypP0,
        ypP1,
        dUT1,
        ddUT1,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 72U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 72U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaIniEopCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


