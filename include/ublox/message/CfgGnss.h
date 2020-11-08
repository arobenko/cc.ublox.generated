// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"CFG-GNSS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res1.h"
#include "ublox/message/CfgGnssCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgGnss.
/// @tparam TOpt Extra options
/// @see @ref CfgGnss
/// @headerfile "ublox/message/CfgGnss.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgGnssFields
{
    /// @brief Definition of <b>"msgVer"</b> field.
    struct MsgVer : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGnssFieldsCommon::MsgVerCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numTrkChHw"</b> field.
    struct NumTrkChHw : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGnssFieldsCommon::NumTrkChHwCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numTrkChUse"</b> field.
    struct NumTrkChUse : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGnssFieldsCommon::NumTrkChUseCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numConfigBlocks"</b> field.
    struct NumConfigBlocks : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGnssFieldsCommon::NumConfigBlocksCommon::name();
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
            
            /// @brief Definition of <b>"resTrkCh"</b> field.
            struct ResTrkCh : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::ResTrkChCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"maxTrkCh"</b> field.
            struct MaxTrkCh : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::MaxTrkChCommon::name();
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
                    return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved1Common::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of
            ///     @ref Flags bitfield.
            struct FlagsMembers
            {
                /// @brief Definition of <b>""</b> field.
                class BitsLow : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<16U>,
                        comms::option::def::BitmaskReservedBits<0xFFFEU, 0x0U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<16U>,
                            comms::option::def::BitmaskReservedBits<0xFFFEU, 0x0U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_enable, @b getBitValue_enable() and @b setBitValue_enable().
                    COMMS_BITMASK_BITS_SEQ(
                        enable
                    );
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::BitsLowCommon::name();
                    }
                    
                    /// @brief Retrieve name of the bit.
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief Definition of <b>"sigCfgMask"</b> field.
                struct SigCfgMask : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<8U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::SigCfgMaskCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>"reserved"</b> field.
                /// @details
                ///     Reserved field with 1 byte length
                struct Reserved : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<8U>,
                        comms::option::def::ValidNumValue<0>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::ReservedCommon::name();
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       BitsLow,
                       SigCfgMask,
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
                ///     @li @b Field_bitsLow type and @b field_bitsLow() access function -
                ///         for FlagsMembers::BitsLow member field.
                ///     @li @b Field_sigCfgMask type and @b field_sigCfgMask() access function -
                ///         for FlagsMembers::SigCfgMask member field.
                ///     @li @b Field_reserved type and @b field_reserved() access function -
                ///         for FlagsMembers::Reserved member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    bitsLow,
                    sigCfgMask,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   GnssId,
                   ResTrkCh,
                   MaxTrkCh,
                   Reserved1,
                   Flags
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
            ///     @li @b Field_resTrkChtype and @b field_resTrkCh() access function -
            ///         for ElementMembers::ResTrkCh member field.
            ///     @li @b Field_maxTrkChtype and @b field_maxTrkCh() access function -
            ///         for ElementMembers::MaxTrkCh member field.
            ///     @li @b Field_reserved1type and @b field_reserved1() access function -
            ///         for ElementMembers::Reserved1 member field.
            ///     @li @b Field_flagstype and @b field_flags() access function -
            ///         for ElementMembers::Flags member field.
            COMMS_FIELD_MEMBERS_NAMES(
                gnssId,
                resTrkCh,
                maxTrkCh,
                reserved1,
                flags
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgGnssFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::CfgGnssFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGnssFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgVer,
        NumTrkChHw,
        NumTrkChUse,
        NumConfigBlocks,
        List
    >;
};

/// @brief Definition of <b>"CFG-GNSS"</b> message class.
/// @details
///     See @ref CfgGnssFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgGnss.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgGnss : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgGnss>,
        comms::option::def::FieldsImpl<typename CfgGnssFields<TOpt>::All>,
        comms::option::def::MsgType<CfgGnss<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgGnss>,
            comms::option::def::FieldsImpl<typename CfgGnssFields<TOpt>::All>,
            comms::option::def::MsgType<CfgGnss<TMsgBase, TOpt> >,
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
    ///     @li @b Field_msgVer type and @b field_msgVer() access fuction
    ///         for @ref CfgGnssFields::MsgVer field.
    ///     @li @b Field_numTrkChHw type and @b field_numTrkChHw() access fuction
    ///         for @ref CfgGnssFields::NumTrkChHw field.
    ///     @li @b Field_numTrkChUse type and @b field_numTrkChUse() access fuction
    ///         for @ref CfgGnssFields::NumTrkChUse field.
    ///     @li @b Field_numConfigBlocks type and @b field_numConfigBlocks() access fuction
    ///         for @ref CfgGnssFields::NumConfigBlocks field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref CfgGnssFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        msgVer,
        numTrkChHw,
        numTrkChUse,
        numConfigBlocks,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgGnssCommon::name();
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
            static_cast<std::size_t>(field_numConfigBlocks().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numConfigBlocks().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numConfigBlocks().value())>::type;
                field_numConfigBlocks().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


