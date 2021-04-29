// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"NAV-DGPS"</b> message and its fields.

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
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/message/NavDgpsCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavDgps.
/// @tparam TOpt Extra options
/// @see @ref NavDgps
/// @headerfile "ublox/message/NavDgps.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavDgpsFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"age"</b> field.
    struct Age : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDgpsFieldsCommon::AgeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"baseId"</b> field.
    struct BaseId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDgpsFieldsCommon::BaseIdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"baseHealth"</b> field.
    struct BaseHealth : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDgpsFieldsCommon::BaseHealthCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numCh"</b> field.
    struct NumCh : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDgpsFieldsCommon::NumChCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"status"</b> field.
    /// @see @ref ublox::message::NavDgpsFieldsCommon::StatusVal
    class Status : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::NavDgpsFieldsCommon::StatusVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavDgpsFieldsCommon::StatusVal,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDgpsFieldsCommon::StatusCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::NavDgpsFieldsCommon::StatusCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
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
            return ublox::message::NavDgpsFieldsCommon::Reserved1Common::name();
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
                    return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of
            ///     @ref Flags bitfield.
            struct FlagsMembers
            {
                /// @brief Definition of <b>"channel"</b> field.
                struct Channel : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::ChannelCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<4U>,
                        comms::option::def::BitmaskReservedBits<0xEU, 0x0U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<4U>,
                            comms::option::def::BitmaskReservedBits<0xEU, 0x0U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_dgpsUsed, @b getBitValue_dgpsUsed() and @b setBitValue_dgpsUsed().
                    COMMS_BITMASK_BITS_SEQ(
                        dgpsUsed
                    );
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::BitsCommon::name();
                    }
                    
                    /// @brief Retrieve name of the bit.
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Channel,
                       Bits
                    >;
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename FlagsMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename FlagsMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated types and access functions are:
                ///     @li @b Field_channel type and @b field_channel() access function -
                ///         for FlagsMembers::Channel member field.
                ///     @li @b Field_bits type and @b field_bits() access function -
                ///         for FlagsMembers::Bits member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    channel,
                    bits
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"ageC"</b> field.
            struct AgeC : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::UnitsMilliseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::AgeCCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"prc"</b> field.
            struct Prc : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    float,
                    comms::option::def::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::PrcCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"prrc"</b> field.
            struct Prrc : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    float,
                    comms::option::def::UnitsMetersPerSecond
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementMembersCommon::PrrcCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Svid,
                   Flags,
                   AgeC,
                   Prc,
                   Prrc
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
            ///     @li @b Field_ageCtype and @b field_ageC() access function -
            ///         for ElementMembers::AgeC member field.
            ///     @li @b Field_prctype and @b field_prc() access function -
            ///         for ElementMembers::Prc member field.
            ///     @li @b Field_prrctype and @b field_prrc() access function -
            ///         for ElementMembers::Prrc member field.
            COMMS_FIELD_MEMBERS_NAMES(
                svid,
                flags,
                ageC,
                prc,
                prrc
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavDgpsFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::NavDgpsFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDgpsFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Age,
        BaseId,
        BaseHealth,
        NumCh,
        Status,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-DGPS"</b> message class.
/// @details
///     See @ref NavDgpsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavDgps.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavDgps : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavDgps,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavDgps>,
        comms::option::def::FieldsImpl<typename NavDgpsFields<TOpt>::All>,
        comms::option::def::MsgType<NavDgps<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavDgps,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavDgps>,
            comms::option::def::FieldsImpl<typename NavDgpsFields<TOpt>::All>,
            comms::option::def::MsgType<NavDgps<TMsgBase, TOpt> >,
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
    ///         for @ref NavDgpsFields::Itow field.
    ///     @li @b Field_age type and @b field_age() access fuction
    ///         for @ref NavDgpsFields::Age field.
    ///     @li @b Field_baseId type and @b field_baseId() access fuction
    ///         for @ref NavDgpsFields::BaseId field.
    ///     @li @b Field_baseHealth type and @b field_baseHealth() access fuction
    ///         for @ref NavDgpsFields::BaseHealth field.
    ///     @li @b Field_numCh type and @b field_numCh() access fuction
    ///         for @ref NavDgpsFields::NumCh field.
    ///     @li @b Field_status type and @b field_status() access fuction
    ///         for @ref NavDgpsFields::Status field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref NavDgpsFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref NavDgpsFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        age,
        baseId,
        baseHealth,
        numCh,
        status,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavDgpsCommon::name();
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
            static_cast<std::size_t>(field_numCh().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numCh().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numCh().value())>::type;
                field_numCh().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


