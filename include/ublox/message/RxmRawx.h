// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"RXM-RAWX"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/message/RxmRawxCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmRawx.
/// @tparam TOpt Extra options
/// @see @ref RxmRawx
/// @headerfile "ublox/message/RxmRawx.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRawxFields
{
    /// @brief Definition of <b>"rcvTow"</b> field.
    struct RcvTow : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            double,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawxFieldsCommon::RcvTowCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawxFieldsCommon::WeekCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"leapS"</b> field.
    struct LeapS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawxFieldsCommon::LeapSCommon::name();
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
            return ublox::message::RxmRawxFieldsCommon::NumMeasCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"recStat"</b> field.
    class RecStat : public
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
        ///      @li @b BitIdx_leapSec, @b getBitValue_leapSec() and @b setBitValue_leapSec().
        ///      @li @b BitIdx_clkReset, @b getBitValue_clkReset() and @b setBitValue_clkReset().
        COMMS_BITMASK_BITS_SEQ(
            leapSec,
            clkReset
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawxFieldsCommon::RecStatCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::RxmRawxFieldsCommon::RecStatCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawxFieldsCommon::VersionCommon::name();
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
            return ublox::message::RxmRawxFieldsCommon::Reserved1Common::name();
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
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::PrMesCommon::name();
                }
                
            };
            
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
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::CpMesCommon::name();
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
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::DoMesCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"gnssId"</b> field.
            using GnssId =
                ublox::field::GnssId<
                    TOpt
                >;
            
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
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
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
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved2Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"freqId"</b> field.
            struct FreqId : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 13>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqIdCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"locktime"</b> field.
            struct Locktime : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::UnitsMilliseconds,
                    comms::option::def::ValidNumValueRange<0, 64500L>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::LocktimeCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"cno"</b> field.
            struct Cno : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::CnoCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"prStdev"</b> field.
            struct PrStdev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::PrStdevCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"cpStdev"</b> field.
            struct CpStdev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ScalingRatio<4, 1000>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::CpStdevCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"doStdev"</b> field.
            struct DoStdev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::DoStdevCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"trkStat"</b> field.
            class TrkStat : public
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
                ///      @li @b BitIdx_prValid, @b getBitValue_prValid() and @b setBitValue_prValid().
                ///      @li @b BitIdx_cpValid, @b getBitValue_cpValid() and @b setBitValue_cpValid().
                ///      @li @b BitIdx_halfCyc, @b getBitValue_halfCyc() and @b setBitValue_halfCyc().
                ///      @li @b BitIdx_subHalfCyc, @b getBitValue_subHalfCyc() and @b setBitValue_subHalfCyc().
                COMMS_BITMASK_BITS_SEQ(
                    prValid,
                    cpValid,
                    halfCyc,
                    subHalfCyc
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::TrkStatCommon::name();
                }
                
                /// @brief Retrieve name of the bit.
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::TrkStatCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"reserved3"</b> field.
            struct Reserved3 : public
                ublox::field::Res1<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved3Common::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   PrMes,
                   CpMes,
                   DoMes,
                   GnssId,
                   Svid,
                   Reserved2,
                   FreqId,
                   Locktime,
                   Cno,
                   PrStdev,
                   CpStdev,
                   DoStdev,
                   TrkStat,
                   Reserved3
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
            ///     @li @b Field_prMestype and @b field_prMes() access function -
            ///         for ElementMembers::PrMes member field.
            ///     @li @b Field_cpMestype and @b field_cpMes() access function -
            ///         for ElementMembers::CpMes member field.
            ///     @li @b Field_doMestype and @b field_doMes() access function -
            ///         for ElementMembers::DoMes member field.
            ///     @li @b Field_gnssIdtype and @b field_gnssId() access function -
            ///         for ElementMembers::GnssId member field.
            ///     @li @b Field_svidtype and @b field_svid() access function -
            ///         for ElementMembers::Svid member field.
            ///     @li @b Field_reserved2type and @b field_reserved2() access function -
            ///         for ElementMembers::Reserved2 member field.
            ///     @li @b Field_freqIdtype and @b field_freqId() access function -
            ///         for ElementMembers::FreqId member field.
            ///     @li @b Field_locktimetype and @b field_locktime() access function -
            ///         for ElementMembers::Locktime member field.
            ///     @li @b Field_cnotype and @b field_cno() access function -
            ///         for ElementMembers::Cno member field.
            ///     @li @b Field_prStdevtype and @b field_prStdev() access function -
            ///         for ElementMembers::PrStdev member field.
            ///     @li @b Field_cpStdevtype and @b field_cpStdev() access function -
            ///         for ElementMembers::CpStdev member field.
            ///     @li @b Field_doStdevtype and @b field_doStdev() access function -
            ///         for ElementMembers::DoStdev member field.
            ///     @li @b Field_trkStattype and @b field_trkStat() access function -
            ///         for ElementMembers::TrkStat member field.
            ///     @li @b Field_reserved3type and @b field_reserved3() access function -
            ///         for ElementMembers::Reserved3 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                prMes,
                cpMes,
                doMes,
                gnssId,
                svid,
                reserved2,
                freqId,
                locktime,
                cno,
                prStdev,
                cpStdev,
                doStdev,
                trkStat,
                reserved3
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::RxmRawxFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRawxFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        RcvTow,
        Week,
        LeapS,
        NumMeas,
        RecStat,
        Version,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"RXM-RAWX"</b> message class.
/// @details
///     See @ref RxmRawxFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRawx.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRawx : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRawx,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRawx>,
        comms::option::def::FieldsImpl<typename RxmRawxFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRawx<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRawx,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRawx>,
            comms::option::def::FieldsImpl<typename RxmRawxFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRawx<TMsgBase, TOpt> >,
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
    ///     @li @b Field_rcvTow type and @b field_rcvTow() access fuction
    ///         for @ref RxmRawxFields::RcvTow field.
    ///     @li @b Field_week type and @b field_week() access fuction
    ///         for @ref RxmRawxFields::Week field.
    ///     @li @b Field_leapS type and @b field_leapS() access fuction
    ///         for @ref RxmRawxFields::LeapS field.
    ///     @li @b Field_numMeas type and @b field_numMeas() access fuction
    ///         for @ref RxmRawxFields::NumMeas field.
    ///     @li @b Field_recStat type and @b field_recStat() access fuction
    ///         for @ref RxmRawxFields::RecStat field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref RxmRawxFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref RxmRawxFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref RxmRawxFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        rcvTow,
        week,
        leapS,
        numMeas,
        recStat,
        version,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::RxmRawxCommon::name();
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


