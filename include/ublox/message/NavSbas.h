// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"NAV-SBAS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/SbasService.h"
#include "ublox/field/SbasSys.h"
#include "ublox/message/NavSbasCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavSbas.
/// @tparam TOpt Extra options
/// @see @ref NavSbas
/// @headerfile "ublox/message/NavSbas.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSbasFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"geo"</b> field.
    struct Geo : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSbasFieldsCommon::GeoCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"mode"</b> field.
    /// @see @ref ublox::message::NavSbasFieldsCommon::ModeVal
    class Mode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::NavSbasFieldsCommon::ModeVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavSbasFieldsCommon::ModeVal,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSbasFieldsCommon::ModeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::NavSbasFieldsCommon::ModeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"sys"</b> field.
    struct Sys : public
        ublox::field::SbasSys<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSbasFieldsCommon::SysCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"service"</b> field.
    struct Service : public
        ublox::field::SbasService<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSbasFieldsCommon::ServiceCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"cnt"</b> field.
    struct Cnt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSbasFieldsCommon::CntCommon::name();
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
            return ublox::message::NavSbasFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"svid"</b> field.
            struct Svid : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            struct Flags : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"udre"</b> field.
            struct Udre : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::UdreCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"svSys"</b> field.
            struct SvSys : public
                ublox::field::SbasSys<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::SvSysCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"svService"</b> field.
            struct SvService : public
                ublox::field::SbasService<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::SvServiceCommon::name();
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
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved2Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"prc"</b> field.
            struct Prc : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::PrcCommon::name();
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
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved3Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"ic"</b> field.
            struct Ic : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementMembersCommon::IcCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Svid,
                   Flags,
                   Udre,
                   SvSys,
                   SvService,
                   Reserved2,
                   Prc,
                   Reserved3,
                   Ic
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access types and functions functions are:
            ///     @li @b Field_svidtype and @b field_svid() access function -
            ///         for ElementMembers::Svid member field.
            ///     @li @b Field_flagstype and @b field_flags() access function -
            ///         for ElementMembers::Flags member field.
            ///     @li @b Field_udretype and @b field_udre() access function -
            ///         for ElementMembers::Udre member field.
            ///     @li @b Field_svSystype and @b field_svSys() access function -
            ///         for ElementMembers::SvSys member field.
            ///     @li @b Field_svServicetype and @b field_svService() access function -
            ///         for ElementMembers::SvService member field.
            ///     @li @b Field_reserved2type and @b field_reserved2() access function -
            ///         for ElementMembers::Reserved2 member field.
            ///     @li @b Field_prctype and @b field_prc() access function -
            ///         for ElementMembers::Prc member field.
            ///     @li @b Field_reserved3type and @b field_reserved3() access function -
            ///         for ElementMembers::Reserved3 member field.
            ///     @li @b Field_ictype and @b field_ic() access function -
            ///         for ElementMembers::Ic member field.
            COMMS_FIELD_MEMBERS_NAMES(
                svid,
                flags,
                udre,
                svSys,
                svService,
                reserved2,
                prc,
                reserved3,
                ic
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavSbasFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::NavSbasFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSbasFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Geo,
        Mode,
        Sys,
        Service,
        Cnt,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-SBAS"</b> message class.
/// @details
///     See @ref NavSbasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSbas.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSbas : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSbas,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSbas>,
        comms::option::def::FieldsImpl<typename NavSbasFields<TOpt>::All>,
        comms::option::def::MsgType<NavSbas<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSbas,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSbas>,
            comms::option::def::FieldsImpl<typename NavSbasFields<TOpt>::All>,
            comms::option::def::MsgType<NavSbas<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavSbasFields::Itow field.
    ///     @li @b Field_geo type and @b field_geo() access fuction
    ///         for @ref NavSbasFields::Geo field.
    ///     @li @b Field_mode type and @b field_mode() access fuction
    ///         for @ref NavSbasFields::Mode field.
    ///     @li @b Field_sys type and @b field_sys() access fuction
    ///         for @ref NavSbasFields::Sys field.
    ///     @li @b Field_service type and @b field_service() access fuction
    ///         for @ref NavSbasFields::Service field.
    ///     @li @b Field_cnt type and @b field_cnt() access fuction
    ///         for @ref NavSbasFields::Cnt field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavSbasFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref NavSbasFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        geo,
        mode,
        sys,
        service,
        cnt,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavSbasCommon::name();
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_list().forceReadElemCount(
            static_cast<std::size_t>(field_cnt().value()));
        
        es = Base::template doReadFrom<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_list() || updated;
        return updated;
    }
    
    
private:
    bool refresh_list()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_cnt().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_cnt().value())>::type;
                field_cnt().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


