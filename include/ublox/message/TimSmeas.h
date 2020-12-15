// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"TIM-SMEAS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/TimSmeasCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimSmeas.
/// @tparam TOpt Extra options
/// @see @ref TimSmeas
/// @headerfile "ublox/message/TimSmeas.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimSmeasFields
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
            return ublox::message::TimSmeasFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numMeas"</b> field.
    struct NumMeas : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimSmeasFieldsCommon::NumMeasCommon::name();
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
            return ublox::message::TimSmeasFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimSmeasFieldsCommon::Reserved2Common::name();
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
            /// @brief Definition of <b>"sourceId"</b> field.
            struct SourceId : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceIdCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<1U>,
                        comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_freqValid, @b getBitValue_freqValid() and @b setBitValue_freqValid().
                ///      @li @b BitIdx_phaseValid, @b getBitValue_phaseValid() and @b setBitValue_phaseValid().
                COMMS_BITMASK_BITS_SEQ(
                    freqValid,
                    phaseValid
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
                /// @brief Retrieve name of the bit.
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"phaseOffsetFrac"</b> field.
            struct PhaseOffsetFrac : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 256>,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::PhaseOffsetFracCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"phaseUncFrac"</b> field.
            struct PhaseUncFrac : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ScalingRatio<1, 256>,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::PhaseUncFracCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"phaseOffset"</b> field.
            struct PhaseOffset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::PhaseOffsetCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"phaseUnc"</b> field.
            struct PhaseUnc : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::PhaseUncCommon::name();
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
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved3Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"freqOffset"</b> field.
            struct FreqOffset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqOffsetCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"freqUnc"</b> field.
            struct FreqUnc : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqUncCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   SourceId,
                   Flags,
                   PhaseOffsetFrac,
                   PhaseUncFrac,
                   PhaseOffset,
                   PhaseUnc,
                   Reserved3,
                   FreqOffset,
                   FreqUnc
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
            ///     @li @b Field_sourceIdtype and @b field_sourceId() access function -
            ///         for ElementMembers::SourceId member field.
            ///     @li @b Field_flagstype and @b field_flags() access function -
            ///         for ElementMembers::Flags member field.
            ///     @li @b Field_phaseOffsetFractype and @b field_phaseOffsetFrac() access function -
            ///         for ElementMembers::PhaseOffsetFrac member field.
            ///     @li @b Field_phaseUncFractype and @b field_phaseUncFrac() access function -
            ///         for ElementMembers::PhaseUncFrac member field.
            ///     @li @b Field_phaseOffsettype and @b field_phaseOffset() access function -
            ///         for ElementMembers::PhaseOffset member field.
            ///     @li @b Field_phaseUnctype and @b field_phaseUnc() access function -
            ///         for ElementMembers::PhaseUnc member field.
            ///     @li @b Field_reserved3type and @b field_reserved3() access function -
            ///         for ElementMembers::Reserved3 member field.
            ///     @li @b Field_freqOffsettype and @b field_freqOffset() access function -
            ///         for ElementMembers::FreqOffset member field.
            ///     @li @b Field_freqUnctype and @b field_freqUnc() access function -
            ///         for ElementMembers::FreqUnc member field.
            COMMS_FIELD_MEMBERS_NAMES(
                sourceId,
                flags,
                phaseOffsetFrac,
                phaseUncFrac,
                phaseOffset,
                phaseUnc,
                reserved3,
                freqOffset,
                freqUnc
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::TimSmeasFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimSmeasFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        NumMeas,
        Reserved1,
        Itow,
        Reserved2,
        List
    >;
};

/// @brief Definition of <b>"TIM-SMEAS"</b> message class.
/// @details
///     See @ref TimSmeasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimSmeas.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimSmeas : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimSmeas>,
        comms::option::def::FieldsImpl<typename TimSmeasFields<TOpt>::All>,
        comms::option::def::MsgType<TimSmeas<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimSmeas>,
            comms::option::def::FieldsImpl<typename TimSmeasFields<TOpt>::All>,
            comms::option::def::MsgType<TimSmeas<TMsgBase, TOpt> >,
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
    ///         for @ref TimSmeasFields::Version field.
    ///     @li @b Field_numMeas type and @b field_numMeas() access fuction
    ///         for @ref TimSmeasFields::NumMeas field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref TimSmeasFields::Reserved1 field.
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref TimSmeasFields::Itow field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref TimSmeasFields::Reserved2 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref TimSmeasFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        numMeas,
        reserved1,
        itow,
        reserved2,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::TimSmeasCommon::name();
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
            static_cast<std::size_t>(field_numMeas().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numMeas().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numMeas().value())>::type;
                field_numMeas().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


