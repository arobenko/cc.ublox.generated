// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"MON-SPAN"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/message/MonSpanCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonSpan.
/// @tparam TOpt Extra options
/// @see @ref MonSpan
/// @headerfile "ublox/message/MonSpan.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonSpanFields
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
            return ublox::message::MonSpanFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numRfblocks"</b> field.
    struct NumRfblocks : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonSpanFieldsCommon::NumRfblocksCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved0"</b> field.
    struct Reserved0 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonSpanFieldsCommon::Reserved0Common::name();
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
            /// @brief Scope for all the member fields of
            ///     @ref Spectrum list.
            struct SpectrumMembers
            {
                /// @brief Definition of <b>"element"</b> field.
                struct Element : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::SpectrumMembersCommon::ElementCommon::name();
                    }
                    
                };
                
            };
            
            /// @brief Definition of <b>"spectrum"</b> field.
            struct Spectrum : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    typename SpectrumMembers::Element,
                    typename TOpt::message::MonSpanFields::ListMembers::ElementMembers::Spectrum,
                    comms::option::def::SequenceFixedSize<256U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::SpectrumCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"span"</b> field.
            struct Span : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::SpanCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"res"</b> field.
            struct Res : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::ResCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"center"</b> field.
            struct Center : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::CenterCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"pga"</b> field.
            struct Pga : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::PgaCommon::name();
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
                    return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved1Common::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Spectrum,
                   Span,
                   Res,
                   Center,
                   Pga,
                   Reserved1
                >;
        };
        
        /// @brief Definition of <b>"element"</b> field.
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
            ///     @li @b Field_spectrumtype and @b field_spectrum() access function -
            ///         for ElementMembers::Spectrum member field.
            ///     @li @b Field_spantype and @b field_span() access function -
            ///         for ElementMembers::Span member field.
            ///     @li @b Field_restype and @b field_res() access function -
            ///         for ElementMembers::Res member field.
            ///     @li @b Field_centertype and @b field_center() access function -
            ///         for ElementMembers::Center member field.
            ///     @li @b Field_pgatype and @b field_pga() access function -
            ///         for ElementMembers::Pga member field.
            ///     @li @b Field_reserved1type and @b field_reserved1() access function -
            ///         for ElementMembers::Reserved1 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                spectrum,
                span,
                res,
                center,
                pga,
                reserved1
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MonSpanFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::MonSpanFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonSpanFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        NumRfblocks,
        Reserved0,
        List
    >;
};

/// @brief Definition of <b>"MON-SPAN"</b> message class.
/// @details
///     See @ref MonSpanFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonSpan.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonSpan : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonSpan,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonSpan>,
        comms::option::def::FieldsImpl<typename MonSpanFields<TOpt>::All>,
        comms::option::def::MsgType<MonSpan<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonSpan,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonSpan>,
            comms::option::def::FieldsImpl<typename MonSpanFields<TOpt>::All>,
            comms::option::def::MsgType<MonSpan<TMsgBase, TOpt> >,
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
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MonSpanFields::Version field.
    ///     @li @b Field_numRfblocks type and @b field_numRfblocks() access fuction
    ///         for @ref MonSpanFields::NumRfblocks field.
    ///     @li @b Field_reserved0 type and @b field_reserved0() access fuction
    ///         for @ref MonSpanFields::Reserved0 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref MonSpanFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        numRfblocks,
        reserved0,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MonSpanCommon::name();
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
            static_cast<std::size_t>(field_numRfblocks().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numRfblocks().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numRfblocks().value())>::type;
                field_numRfblocks().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


