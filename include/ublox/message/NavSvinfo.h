// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"NAV-SVINFO"</b> message and its fields.

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
#include "ublox/message/NavSvinfoCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavSvinfo.
/// @tparam TOpt Extra options
/// @see @ref NavSvinfo
/// @headerfile "ublox/message/NavSvinfo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSvinfoFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
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
            return ublox::message::NavSvinfoFieldsCommon::NumChCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref GlobalFlags bitfield.
    struct GlobalFlagsMembers
    {
        /// @brief Definition of <b>"chipGen"</b> field.
        /// @see @ref ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenVal
        class ChipGen : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenVal,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 4>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenVal,
                    comms::option::def::FixedBitLength<3U>,
                    comms::option::def::ValidNumValueRange<0, 4>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenCommon::valueName(val);
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
                comms::option::def::FixedBitLength<5U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ReservedCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               ChipGen,
               Reserved
            >;
    };
    
    /// @brief Definition of <b>"globalFlags"</b> field.
    class GlobalFlags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename GlobalFlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename GlobalFlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b Field_chipGen @b field_chipGen() -
        ///         for GlobalFlagsMembers::ChipGen member field.
        ///     @li @b Field_reserved @b field_reserved() -
        ///         for GlobalFlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_NAMES(
            chipGen,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSvinfoFieldsCommon::GlobalFlagsCommon::name();
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
            return ublox::message::NavSvinfoFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"chn"</b> field.
            struct Chn : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::ChnCommon::name();
                }
                
            };
            
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
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<1U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_svUsed, @b getBitValue_svUsed() and @b setBitValue_svUsed().
                ///      @li @b BitIdx_diffCorr, @b getBitValue_diffCorr() and @b setBitValue_diffCorr().
                ///      @li @b BitIdx_orbitAvail, @b getBitValue_orbitAvail() and @b setBitValue_orbitAvail().
                ///      @li @b BitIdx_orbitEph, @b getBitValue_orbitEph() and @b setBitValue_orbitEph().
                ///      @li @b BitIdx_unhealthy, @b getBitValue_unhealthy() and @b setBitValue_unhealthy().
                ///      @li @b BitIdx_orbitAlm, @b getBitValue_orbitAlm() and @b setBitValue_orbitAlm().
                ///      @li @b BitIdx_orbitAop, @b getBitValue_orbitAop() and @b setBitValue_orbitAop().
                ///      @li @b BitIdx_smoothed, @b getBitValue_smoothed() and @b setBitValue_smoothed().
                COMMS_BITMASK_BITS_SEQ(
                    svUsed,
                    diffCorr,
                    orbitAvail,
                    orbitEph,
                    unhealthy,
                    orbitAlm,
                    orbitAop,
                    smoothed
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
                /// @brief Retrieve name of the bit.
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"quality"</b> field.
            /// @see @ref ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityVal
            class Quality : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityVal,
                    comms::option::def::ValidNumValueRange<0, 7>
                >
            {
                using Base = 
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityVal,
                        comms::option::def::ValidNumValueRange<0, 7>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;
            
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityCommon::name();
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityCommon::valueName(val);
                }
                
                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::value());
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
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::CnoCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"elev"</b> field.
            struct Elev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::ElevCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"azim"</b> field.
            struct Azim : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::AzimCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"prRes"</b> field.
            struct PrRes : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::PrResCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Chn,
                   Svid,
                   Flags,
                   Quality,
                   Cno,
                   Elev,
                   Azim,
                   PrRes
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
            ///     @li @b Field_chn @b field_chn() -
            ///         for ElementMembers::Chn member field.
            ///     @li @b Field_svid @b field_svid() -
            ///         for ElementMembers::Svid member field.
            ///     @li @b Field_flags @b field_flags() -
            ///         for ElementMembers::Flags member field.
            ///     @li @b Field_quality @b field_quality() -
            ///         for ElementMembers::Quality member field.
            ///     @li @b Field_cno @b field_cno() -
            ///         for ElementMembers::Cno member field.
            ///     @li @b Field_elev @b field_elev() -
            ///         for ElementMembers::Elev member field.
            ///     @li @b Field_azim @b field_azim() -
            ///         for ElementMembers::Azim member field.
            ///     @li @b Field_prRes @b field_prRes() -
            ///         for ElementMembers::PrRes member field.
            COMMS_FIELD_MEMBERS_NAMES(
                chn,
                svid,
                flags,
                quality,
                cno,
                elev,
                azim,
                prRes
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::NavSvinfoFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavSvinfoFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        NumCh,
        GlobalFlags,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-SVINFO"</b> message class.
/// @details
///     See @ref NavSvinfoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSvinfo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSvinfo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSvinfo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSvinfo>,
        comms::option::def::FieldsImpl<typename NavSvinfoFields<TOpt>::All>,
        comms::option::def::MsgType<NavSvinfo<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSvinfo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSvinfo>,
            comms::option::def::FieldsImpl<typename NavSvinfoFields<TOpt>::All>,
            comms::option::def::MsgType<NavSvinfo<TMsgBase, TOpt> >,
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
    ///     @li @b Field_itow type and @b field_itow() fuction
    ///         for @ref NavSvinfoFields::Itow field.
    ///     @li @b Field_numCh type and @b field_numCh() fuction
    ///         for @ref NavSvinfoFields::NumCh field.
    ///     @li @b Field_globalFlags type and @b field_globalFlags() fuction
    ///         for @ref NavSvinfoFields::GlobalFlags field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref NavSvinfoFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() fuction
    ///         for @ref NavSvinfoFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        numCh,
        globalFlags,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavSvinfoCommon::name();
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


