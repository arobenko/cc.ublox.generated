// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"RXM-MEASX"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Res8.h"
#include "ublox/message/RxmMeasxCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmMeasx.
/// @tparam TOpt Extra options
/// @see @ref RxmMeasx
/// @headerfile "ublox/message/RxmMeasx.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmMeasxFields
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
            return ublox::message::RxmMeasxFieldsCommon::VersionCommon::name();
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
            return ublox::message::RxmMeasxFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"gpsTOW"</b> field.
    struct GpsTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::GpsTOWCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gloTOW"</b> field.
    struct GloTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::GloTOWCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"bdsTOW"</b> field.
    struct BdsTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::BdsTOWCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"qzssTOW"</b> field.
    struct QzssTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::QzssTOWCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gpsTOWacc"</b> field.
    struct GpsTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::GpsTOWaccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gloTOWacc"</b> field.
    struct GloTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::GloTOWaccCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"bdsTOWacc"</b> field.
    struct BdsTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::BdsTOWaccCommon::name();
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
            return ublox::message::RxmMeasxFieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"qzssTOWacc"</b> field.
    struct QzssTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::QzssTOWaccCommon::name();
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
            return ublox::message::RxmMeasxFieldsCommon::NumSVCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>"towSet"</b> field.
        /// @see @ref ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetVal
        class TowSet : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"reserved"</b> field.
        struct Reserved : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<6U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::ReservedCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               TowSet,
               Reserved
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
        ///     @li @b Field_towSet type and @b field_towSet() access function -
        ///         for FlagsMembers::TowSet member field.
        ///     @li @b Field_reserved type and @b field_reserved() access function -
        ///         for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_NAMES(
            towSet,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved4"</b> field.
    struct Reserved4 : public
        ublox::field::Res8<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::Reserved4Common::name();
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
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"cNo"</b> field.
            struct CNo : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 63>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::CNoCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"mpathIndic"</b> field.
            /// @see @ref ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicVal
            class MpathIndic : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicVal,
                    comms::option::def::ValidNumValueRange<0, 3>
                >
            {
                using Base = 
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicVal,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;
            
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicCommon::name();
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicCommon::valueName(val);
                }
                
                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::value());
                }
                
            };
            
            /// @brief Definition of <b>"dopplerMS"</b> field.
            struct DopplerMS : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<4, 100>,
                    comms::option::def::UnitsMetersPerSecond
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::DopplerMSCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"dopplerHz"</b> field.
            struct DopplerHz : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<2, 100>,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::DopplerHzCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"wholeChips"</b> field.
            struct WholeChips : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::ValidNumValueRange<0, 1022>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::WholeChipsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"fracChips"</b> field.
            struct FracChips : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::ValidNumValueRange<0, 1023>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::FracChipsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"codePhase"</b> field.
            struct CodePhase : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 2097152L>,
                    comms::option::def::UnitsMilliseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::CodePhaseCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"intCodePhase"</b> field.
            struct IntCodePhase : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsMilliseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::IntCodePhaseCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"pseuRangeRMSErr"</b> field.
            struct PseuRangeRMSErr : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 63>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::PseuRangeRMSErrCommon::name();
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
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved5Common::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   GnssId,
                   Svid,
                   CNo,
                   MpathIndic,
                   DopplerMS,
                   DopplerHz,
                   WholeChips,
                   FracChips,
                   CodePhase,
                   IntCodePhase,
                   PseuRangeRMSErr,
                   Reserved5
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
            ///     @li @b Field_gnssIdtype and @b field_gnssId() access function -
            ///         for ElementMembers::GnssId member field.
            ///     @li @b Field_svidtype and @b field_svid() access function -
            ///         for ElementMembers::Svid member field.
            ///     @li @b Field_cNotype and @b field_cNo() access function -
            ///         for ElementMembers::CNo member field.
            ///     @li @b Field_mpathIndictype and @b field_mpathIndic() access function -
            ///         for ElementMembers::MpathIndic member field.
            ///     @li @b Field_dopplerMStype and @b field_dopplerMS() access function -
            ///         for ElementMembers::DopplerMS member field.
            ///     @li @b Field_dopplerHztype and @b field_dopplerHz() access function -
            ///         for ElementMembers::DopplerHz member field.
            ///     @li @b Field_wholeChipstype and @b field_wholeChips() access function -
            ///         for ElementMembers::WholeChips member field.
            ///     @li @b Field_fracChipstype and @b field_fracChips() access function -
            ///         for ElementMembers::FracChips member field.
            ///     @li @b Field_codePhasetype and @b field_codePhase() access function -
            ///         for ElementMembers::CodePhase member field.
            ///     @li @b Field_intCodePhasetype and @b field_intCodePhase() access function -
            ///         for ElementMembers::IntCodePhase member field.
            ///     @li @b Field_pseuRangeRMSErrtype and @b field_pseuRangeRMSErr() access function -
            ///         for ElementMembers::PseuRangeRMSErr member field.
            ///     @li @b Field_reserved5type and @b field_reserved5() access function -
            ///         for ElementMembers::Reserved5 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                gnssId,
                svid,
                cNo,
                mpathIndic,
                dopplerMS,
                dopplerHz,
                wholeChips,
                fracChips,
                codePhase,
                intCodePhase,
                pseuRangeRMSErr,
                reserved5
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::RxmMeasxFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmMeasxFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        GpsTOW,
        GloTOW,
        BdsTOW,
        Reserved2,
        QzssTOW,
        GpsTOWacc,
        GloTOWacc,
        BdsTOWacc,
        Reserved3,
        QzssTOWacc,
        NumSV,
        Flags,
        Reserved4,
        List
    >;
};

/// @brief Definition of <b>"RXM-MEASX"</b> message class.
/// @details
///     See @ref RxmMeasxFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmMeasx.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmMeasx : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmMeasx,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmMeasx>,
        comms::option::def::FieldsImpl<typename RxmMeasxFields<TOpt>::All>,
        comms::option::def::MsgType<RxmMeasx<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmMeasx,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmMeasx>,
            comms::option::def::FieldsImpl<typename RxmMeasxFields<TOpt>::All>,
            comms::option::def::MsgType<RxmMeasx<TMsgBase, TOpt> >,
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
    ///         for @ref RxmMeasxFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref RxmMeasxFields::Reserved1 field.
    ///     @li @b Field_gpsTOW type and @b field_gpsTOW() access fuction
    ///         for @ref RxmMeasxFields::GpsTOW field.
    ///     @li @b Field_gloTOW type and @b field_gloTOW() access fuction
    ///         for @ref RxmMeasxFields::GloTOW field.
    ///     @li @b Field_bdsTOW type and @b field_bdsTOW() access fuction
    ///         for @ref RxmMeasxFields::BdsTOW field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref RxmMeasxFields::Reserved2 field.
    ///     @li @b Field_qzssTOW type and @b field_qzssTOW() access fuction
    ///         for @ref RxmMeasxFields::QzssTOW field.
    ///     @li @b Field_gpsTOWacc type and @b field_gpsTOWacc() access fuction
    ///         for @ref RxmMeasxFields::GpsTOWacc field.
    ///     @li @b Field_gloTOWacc type and @b field_gloTOWacc() access fuction
    ///         for @ref RxmMeasxFields::GloTOWacc field.
    ///     @li @b Field_bdsTOWacc type and @b field_bdsTOWacc() access fuction
    ///         for @ref RxmMeasxFields::BdsTOWacc field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref RxmMeasxFields::Reserved3 field.
    ///     @li @b Field_qzssTOWacc type and @b field_qzssTOWacc() access fuction
    ///         for @ref RxmMeasxFields::QzssTOWacc field.
    ///     @li @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref RxmMeasxFields::NumSV field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref RxmMeasxFields::Flags field.
    ///     @li @b Field_reserved4 type and @b field_reserved4() access fuction
    ///         for @ref RxmMeasxFields::Reserved4 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref RxmMeasxFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        reserved1,
        gpsTOW,
        gloTOW,
        bdsTOW,
        reserved2,
        qzssTOW,
        gpsTOWacc,
        gloTOWacc,
        bdsTOWacc,
        reserved3,
        qzssTOWacc,
        numSV,
        flags,
        reserved4,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 44U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::RxmMeasxCommon::name();
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


