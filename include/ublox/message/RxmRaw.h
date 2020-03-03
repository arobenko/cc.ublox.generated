// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"RXM-RAW"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/RxmRawCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmRaw.
/// @tparam TOpt Extra options
/// @see @ref RxmRaw
/// @headerfile "ublox/message/RxmRaw.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRawFields
{
    /// @brief Definition of <b>"rcvTow"</b> field.
    struct RcvTow : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawFieldsCommon::RcvTowCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawFieldsCommon::WeekCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawFieldsCommon::NumSVCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"cpMes"</b> field.
            struct CpMes : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    double
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::CpMesCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"prMes"</b> field.
            struct PrMes : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    double,
                    comms::option::def::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::PrMesCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"doMes"</b> field.
            struct DoMes : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    float,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::DoMesCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"sv"</b> field.
            struct Sv : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::SvCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"mesQI"</b> field.
            struct MesQI : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::MesQICommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"cno"</b> field.
            struct Cno : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::CnoCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"lli"</b> field.
            struct Lli : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::LliCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   CpMes,
                   PrMes,
                   DoMes,
                   Sv,
                   MesQI,
                   Cno,
                   Lli
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
            ///     The generated access functions are:
            ///     @li @b Field_cpMes @b field_cpMes() -
            ///         for ElementMembers::CpMes member field.
            ///     @li @b Field_prMes @b field_prMes() -
            ///         for ElementMembers::PrMes member field.
            ///     @li @b Field_doMes @b field_doMes() -
            ///         for ElementMembers::DoMes member field.
            ///     @li @b Field_sv @b field_sv() -
            ///         for ElementMembers::Sv member field.
            ///     @li @b Field_mesQI @b field_mesQI() -
            ///         for ElementMembers::MesQI member field.
            ///     @li @b Field_cno @b field_cno() -
            ///         for ElementMembers::Cno member field.
            ///     @li @b Field_lli @b field_lli() -
            ///         for ElementMembers::Lli member field.
            COMMS_FIELD_MEMBERS_NAMES(
                cpMes,
                prMes,
                doMes,
                sv,
                mesQI,
                cno,
                lli
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::RxmRawFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        RcvTow,
        Week,
        NumSV,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"RXM-RAW"</b> message class.
/// @details
///     See @ref RxmRawFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRaw.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRaw : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRaw,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRaw>,
        comms::option::def::FieldsImpl<typename RxmRawFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRaw<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRaw,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRaw>,
            comms::option::def::FieldsImpl<typename RxmRawFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRaw<TMsgBase, TOpt> >,
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
    ///     @li @b Field_rcvTow type and @b field_rcvTow() fuction
    ///         for @ref RxmRawFields::RcvTow field.
    ///     @li @b Field_week type and @b field_week() fuction
    ///         for @ref RxmRawFields::Week field.
    ///     @li @b Field_numSV type and @b field_numSV() fuction
    ///         for @ref RxmRawFields::NumSV field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref RxmRawFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() fuction
    ///         for @ref RxmRawFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        rcvTow,
        week,
        numSV,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::RxmRawCommon::name();
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
            static_cast<std::size_t>(field_numSV().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numSV().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSV().value())>::type;
                field_numSV().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


