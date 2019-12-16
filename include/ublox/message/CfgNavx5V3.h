/// @file
/// @brief Contains definition of <b>"CFG-NAVX5"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgNavx5AopCfg.h"
#include "ublox/field/CfgNavx5AopOrbMaxErr.h"
#include "ublox/field/CfgNavx5Mask1.h"
#include "ublox/field/CfgNavx5Mask2.h"
#include "ublox/field/CfgNavx5SigAttenCompMode.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNavx5V3.
/// @tparam TOpt Extra options
/// @see @ref CfgNavx5V3
/// @headerfile "ublox/message/CfgNavx5V3.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNavx5V3Fields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"mask1"</b> field.
    using Mask1 =
        ublox::field::CfgNavx5Mask1<
            TOpt
        >;
    
    /// @brief Definition of <b>"mask2"</b> field.
    using Mask2 =
        ublox::field::CfgNavx5Mask2<
            TOpt
        >;
    
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
    
    /// @brief Definition of <b>"minSVs"</b> field.
    struct MinSVs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minSVs";
        }
        
    };
    
    /// @brief Definition of <b>"maxSVs"</b> field.
    struct MaxSVs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxSVs";
        }
        
    };
    
    /// @brief Definition of <b>"minCNO"</b> field.
    struct MinCNO : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minCNO";
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
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"iniFix3D"</b> field.
    struct IniFix3D : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "iniFix3D";
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
            return "reserved3";
        }
        
    };
    
    /// @brief Definition of <b>"ackAiding"</b> field.
    struct AckAiding : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ackAiding";
        }
        
    };
    
    /// @brief Definition of <b>"wknRollover"</b> field.
    struct WknRollover : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wknRollover";
        }
        
    };
    
    /// @brief Definition of <b>"sigAttenCompMode"</b> field.
    using SigAttenCompMode =
        ublox::field::CfgNavx5SigAttenCompMode<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved4"</b> field.
    struct Reserved4 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
    /// @brief Definition of <b>"reserved5"</b> field.
    struct Reserved5 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved5";
        }
        
    };
    
    /// @brief Definition of <b>"reserved6"</b> field.
    struct Reserved6 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved6";
        }
        
    };
    
    /// @brief Definition of <b>"usePPP"</b> field.
    struct UsePPP : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "usePPP";
        }
        
    };
    
    /// @brief Definition of <b>"aopCfg"</b> field.
    using AopCfg =
        ublox::field::CfgNavx5AopCfg<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved7"</b> field.
    struct Reserved7 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved7";
        }
        
    };
    
    /// @brief Definition of <b>"aopOrbMaxErr"</b> field.
    using AopOrbMaxErr =
        ublox::field::CfgNavx5AopOrbMaxErr<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved8"</b> field.
    struct Reserved8 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved8";
        }
        
    };
    
    /// @brief Definition of <b>"reserved9"</b> field.
    struct Reserved9 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved9";
        }
        
    };
    
    /// @brief Definition of <b>"useAdr"</b> field.
    struct UseAdr : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "useAdr";
        }
        
    };
    
    /// @brief Definition of <b>"reserved10"</b> field.
    struct Reserved10 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved10";
        }
        
    };
    
    /// @brief Definition of <b>"reserved11"</b> field.
    struct Reserved11 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved11";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Mask1,
        Mask2,
        Reserved1,
        MinSVs,
        MaxSVs,
        MinCNO,
        Reserved2,
        IniFix3D,
        Reserved3,
        AckAiding,
        WknRollover,
        SigAttenCompMode,
        Reserved4,
        Reserved5,
        Reserved6,
        UsePPP,
        AopCfg,
        Reserved7,
        AopOrbMaxErr,
        Reserved8,
        Reserved9,
        UseAdr,
        Reserved10,
        Reserved11
    >;
};

/// @brief Definition of <b>"CFG-NAVX5"</b> message class.
/// @details
///     See @ref CfgNavx5V3Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNavx5V3.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNavx5V3 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNavx5>,
        comms::option::def::FieldsImpl<typename CfgNavx5V3Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgNavx5V3<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNavx5>,
            comms::option::def::FieldsImpl<typename CfgNavx5V3Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgNavx5V3<TMsgBase, TOpt> >,
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
    ///         for @ref CfgNavx5V3Fields::Version field.
    ///     @li @b Field_mask1 type and @b field_mask1() fuction
    ///         for @ref CfgNavx5V3Fields::Mask1 field.
    ///     @li @b Field_mask2 type and @b field_mask2() fuction
    ///         for @ref CfgNavx5V3Fields::Mask2 field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved1 field.
    ///     @li @b Field_minSVs type and @b field_minSVs() fuction
    ///         for @ref CfgNavx5V3Fields::MinSVs field.
    ///     @li @b Field_maxSVs type and @b field_maxSVs() fuction
    ///         for @ref CfgNavx5V3Fields::MaxSVs field.
    ///     @li @b Field_minCNO type and @b field_minCNO() fuction
    ///         for @ref CfgNavx5V3Fields::MinCNO field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved2 field.
    ///     @li @b Field_iniFix3D type and @b field_iniFix3D() fuction
    ///         for @ref CfgNavx5V3Fields::IniFix3D field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved3 field.
    ///     @li @b Field_ackAiding type and @b field_ackAiding() fuction
    ///         for @ref CfgNavx5V3Fields::AckAiding field.
    ///     @li @b Field_wknRollover type and @b field_wknRollover() fuction
    ///         for @ref CfgNavx5V3Fields::WknRollover field.
    ///     @li @b Field_sigAttenCompMode type and @b field_sigAttenCompMode() fuction
    ///         for @ref CfgNavx5V3Fields::SigAttenCompMode field.
    ///     @li @b Field_reserved4 type and @b field_reserved4() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved4 field.
    ///     @li @b Field_reserved5 type and @b field_reserved5() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved5 field.
    ///     @li @b Field_reserved6 type and @b field_reserved6() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved6 field.
    ///     @li @b Field_usePPP type and @b field_usePPP() fuction
    ///         for @ref CfgNavx5V3Fields::UsePPP field.
    ///     @li @b Field_aopCfg type and @b field_aopCfg() fuction
    ///         for @ref CfgNavx5V3Fields::AopCfg field.
    ///     @li @b Field_reserved7 type and @b field_reserved7() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved7 field.
    ///     @li @b Field_aopOrbMaxErr type and @b field_aopOrbMaxErr() fuction
    ///         for @ref CfgNavx5V3Fields::AopOrbMaxErr field.
    ///     @li @b Field_reserved8 type and @b field_reserved8() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved8 field.
    ///     @li @b Field_reserved9 type and @b field_reserved9() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved9 field.
    ///     @li @b Field_useAdr type and @b field_useAdr() fuction
    ///         for @ref CfgNavx5V3Fields::UseAdr field.
    ///     @li @b Field_reserved10 type and @b field_reserved10() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved10 field.
    ///     @li @b Field_reserved11 type and @b field_reserved11() fuction
    ///         for @ref CfgNavx5V3Fields::Reserved11 field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        mask1,
        mask2,
        reserved1,
        minSVs,
        maxSVs,
        minCNO,
        reserved2,
        iniFix3D,
        reserved3,
        ackAiding,
        wknRollover,
        sigAttenCompMode,
        reserved4,
        reserved5,
        reserved6,
        usePPP,
        aopCfg,
        reserved7,
        aopOrbMaxErr,
        reserved8,
        reserved9,
        useAdr,
        reserved10,
        reserved11
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 44U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 44U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-NAVX5";
    }
    
    
};

} // namespace message

} // namespace ublox


