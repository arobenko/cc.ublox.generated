// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"ESF-STATUS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res7.h"
#include "ublox/message/EsfStatusCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref EsfStatus.
/// @tparam TOpt Extra options
/// @see @ref EsfStatus
/// @headerfile "ublox/message/EsfStatus.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct EsfStatusFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfStatusFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res7<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfStatusFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"fusionMode"</b> field.
    /// @see @ref ublox::message::EsfStatusFieldsCommon::FusionModeVal
    class FusionMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::EsfStatusFieldsCommon::FusionModeVal,
            comms::option::def::ValidNumValueRange<0, 3>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::EsfStatusFieldsCommon::FusionModeVal,
                comms::option::def::ValidNumValueRange<0, 3>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfStatusFieldsCommon::FusionModeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::EsfStatusFieldsCommon::FusionModeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfStatusFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"numSens"</b> field.
    struct NumSens : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfStatusFieldsCommon::NumSensCommon::name();
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
            ///     @ref SensStatus1 bitfield.
            struct SensStatus1Members
            {
                /// @brief Definition of <b>"type"</b> field.
                struct Type : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<6U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus1MembersCommon::TypeCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<2U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<2U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_used, @b getBitValue_used() and @b setBitValue_used().
                    ///      @li @b BitIdx_ready, @b getBitValue_ready() and @b setBitValue_ready().
                    COMMS_BITMASK_BITS_SEQ(
                        used,
                        ready
                    );
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus1MembersCommon::BitsCommon::name();
                    }
                    
                    /// @brief Retrieve name of the bit.
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus1MembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Type,
                       Bits
                    >;
            };
            
            /// @brief Definition of <b>"sensStatus1"</b> field.
            class SensStatus1 : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename SensStatus1Members::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename SensStatus1Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated types and access functions are:
                ///     @li @b Field_type type and @b field_type() access function -
                ///         for SensStatus1Members::Type member field.
                ///     @li @b Field_bits type and @b field_bits() access function -
                ///         for SensStatus1Members::Bits member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    type,
                    bits
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus1Common::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of
            ///     @ref SensStatus2 bitfield.
            struct SensStatus2Members
            {
                /// @brief Definition of <b>"calibStatus"</b> field.
                /// @see @ref ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::CalibStatusVal
                class CalibStatus : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::CalibStatusVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::CalibStatusVal,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValueRange<0, 3>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::CalibStatusCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::CalibStatusCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief Definition of <b>"timeStatus"</b> field.
                /// @see @ref ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::TimeStatusVal
                class TimeStatus : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::TimeStatusVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::TimeStatusVal,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValueRange<0, 3>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::TimeStatusCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::TimeStatusCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief Definition of <b>"reserved"</b> field.
                /// @details
                ///     Reserved field with 1 byte length
                struct Reserved : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>,
                        comms::option::def::ValidNumValue<0>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2MembersCommon::ReservedCommon::name();
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       CalibStatus,
                       TimeStatus,
                       Reserved
                    >;
            };
            
            /// @brief Definition of <b>"sensStatus2"</b> field.
            class SensStatus2 : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename SensStatus2Members::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename SensStatus2Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated types and access functions are:
                ///     @li @b Field_calibStatus type and @b field_calibStatus() access function -
                ///         for SensStatus2Members::CalibStatus member field.
                ///     @li @b Field_timeStatus type and @b field_timeStatus() access function -
                ///         for SensStatus2Members::TimeStatus member field.
                ///     @li @b Field_reserved type and @b field_reserved() access function -
                ///         for SensStatus2Members::Reserved member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    calibStatus,
                    timeStatus,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::SensStatus2Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"freq"</b> field.
            struct Freq : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"faults"</b> field.
            class Faults : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<1U>,
                        comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_badMeas, @b getBitValue_badMeas() and @b setBitValue_badMeas().
                ///      @li @b BitIdx_badTTag, @b getBitValue_badTTag() and @b setBitValue_badTTag().
                ///      @li @b BitIdx_missingMeas, @b getBitValue_missingMeas() and @b setBitValue_missingMeas().
                ///      @li @b BitIdx_noisyMeas, @b getBitValue_noisyMeas() and @b setBitValue_noisyMeas().
                COMMS_BITMASK_BITS_SEQ(
                    badMeas,
                    badTTag,
                    missingMeas,
                    noisyMeas
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::FaultsCommon::name();
                }
                
                /// @brief Retrieve name of the bit.
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementMembersCommon::FaultsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   SensStatus1,
                   SensStatus2,
                   Freq,
                   Faults
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
            ///     @li @b Field_sensStatus1type and @b field_sensStatus1() access function -
            ///         for ElementMembers::SensStatus1 member field.
            ///     @li @b Field_sensStatus2type and @b field_sensStatus2() access function -
            ///         for ElementMembers::SensStatus2 member field.
            ///     @li @b Field_freqtype and @b field_freq() access function -
            ///         for ElementMembers::Freq member field.
            ///     @li @b Field_faultstype and @b field_faults() access function -
            ///         for ElementMembers::Faults member field.
            COMMS_FIELD_MEMBERS_NAMES(
                sensStatus1,
                sensStatus2,
                freq,
                faults
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::EsfStatusFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::EsfStatusFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfStatusFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        Reserved1,
        FusionMode,
        Reserved2,
        NumSens,
        List
    >;
};

/// @brief Definition of <b>"ESF-STATUS"</b> message class.
/// @details
///     See @ref EsfStatusFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/EsfStatus.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class EsfStatus : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::EsfStatus,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfStatus>,
        comms::option::def::FieldsImpl<typename EsfStatusFields<TOpt>::All>,
        comms::option::def::MsgType<EsfStatus<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::EsfStatus,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfStatus>,
            comms::option::def::FieldsImpl<typename EsfStatusFields<TOpt>::All>,
            comms::option::def::MsgType<EsfStatus<TMsgBase, TOpt> >,
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
    ///         for @ref EsfStatusFields::Itow field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref EsfStatusFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref EsfStatusFields::Reserved1 field.
    ///     @li @b Field_fusionMode type and @b field_fusionMode() access fuction
    ///         for @ref EsfStatusFields::FusionMode field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref EsfStatusFields::Reserved2 field.
    ///     @li @b Field_numSens type and @b field_numSens() access fuction
    ///         for @ref EsfStatusFields::NumSens field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref EsfStatusFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        version,
        reserved1,
        fusionMode,
        reserved2,
        numSens,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::EsfStatusCommon::name();
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
            static_cast<std::size_t>(field_numSens().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numSens().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSens().value())>::type;
                field_numSens().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


