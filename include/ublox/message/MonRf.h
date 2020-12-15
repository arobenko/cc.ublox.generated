// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"MON-RF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MonAntPower.h"
#include "ublox/field/MonAntStatus.h"
#include "ublox/field/MonJammingState.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MonRfCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonRf.
/// @tparam TOpt Extra options
/// @see @ref MonRf
/// @headerfile "ublox/message/MonRf.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonRfFields
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
            return ublox::message::MonRfFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"nBlocks"</b> field.
    struct NBlocks : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonRfFieldsCommon::NBlocksCommon::name();
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
            return ublox::message::MonRfFieldsCommon::Reserved0Common::name();
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
            /// @brief Definition of <b>"blockId"</b> field.
            struct BlockId : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::BlockIdCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of
            ///     @ref Flags bitfield.
            struct FlagsMembers
            {
                /// @brief Definition of <b>"jammingState"</b> field.
                struct JammingState : public
                    ublox::field::MonJammingState<
                        TOpt,
                        comms::option::def::FixedBitLength<2U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::JammingStateCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>"res1"</b> field.
                using Res1 =
                    ublox::field::Res1<
                        TOpt,
                        comms::option::def::FixedBitLength<6U>
                    >;
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       JammingState,
                       Res1
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
                ///     @li @b Field_jammingState type and @b field_jammingState() access function -
                ///         for FlagsMembers::JammingState member field.
                ///     @li @b Field_res1 type and @b field_res1() access function -
                ///         for FlagsMembers::Res1 member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    jammingState,
                    res1
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"antStatus"</b> field.
            struct AntStatus : public
                ublox::field::MonAntStatus<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::AntStatusCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"antPower"</b> field.
            struct AntPower : public
                ublox::field::MonAntPower<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::AntPowerCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"postStatus"</b> field.
            struct PostStatus : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::PostStatusCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"reserved1"</b> field.
            struct Reserved1 : public
                ublox::field::Res4<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved1Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"noisePerMS"</b> field.
            struct NoisePerMS : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::NoisePerMSCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"agcCnt"</b> field.
            struct AgcCnt : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::AgcCntCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"jamInd"</b> field.
            struct JamInd : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::JamIndCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"ofsI"</b> field.
            struct OfsI : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::OfsICommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"magI"</b> field.
            struct MagI : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::MagICommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"ofsQ"</b> field.
            struct OfsQ : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::OfsQCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"magQ"</b> field.
            struct MagQ : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::MagQCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"reserved2"</b> field.
            struct Reserved2 : public
                ublox::field::Res3<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved2Common::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   BlockId,
                   Flags,
                   AntStatus,
                   AntPower,
                   PostStatus,
                   Reserved1,
                   NoisePerMS,
                   AgcCnt,
                   JamInd,
                   OfsI,
                   MagI,
                   OfsQ,
                   MagQ,
                   Reserved2
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
            ///     @li @b Field_blockIdtype and @b field_blockId() access function -
            ///         for ElementMembers::BlockId member field.
            ///     @li @b Field_flagstype and @b field_flags() access function -
            ///         for ElementMembers::Flags member field.
            ///     @li @b Field_antStatustype and @b field_antStatus() access function -
            ///         for ElementMembers::AntStatus member field.
            ///     @li @b Field_antPowertype and @b field_antPower() access function -
            ///         for ElementMembers::AntPower member field.
            ///     @li @b Field_postStatustype and @b field_postStatus() access function -
            ///         for ElementMembers::PostStatus member field.
            ///     @li @b Field_reserved1type and @b field_reserved1() access function -
            ///         for ElementMembers::Reserved1 member field.
            ///     @li @b Field_noisePerMStype and @b field_noisePerMS() access function -
            ///         for ElementMembers::NoisePerMS member field.
            ///     @li @b Field_agcCnttype and @b field_agcCnt() access function -
            ///         for ElementMembers::AgcCnt member field.
            ///     @li @b Field_jamIndtype and @b field_jamInd() access function -
            ///         for ElementMembers::JamInd member field.
            ///     @li @b Field_ofsItype and @b field_ofsI() access function -
            ///         for ElementMembers::OfsI member field.
            ///     @li @b Field_magItype and @b field_magI() access function -
            ///         for ElementMembers::MagI member field.
            ///     @li @b Field_ofsQtype and @b field_ofsQ() access function -
            ///         for ElementMembers::OfsQ member field.
            ///     @li @b Field_magQtype and @b field_magQ() access function -
            ///         for ElementMembers::MagQ member field.
            ///     @li @b Field_reserved2type and @b field_reserved2() access function -
            ///         for ElementMembers::Reserved2 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                blockId,
                flags,
                antStatus,
                antPower,
                postStatus,
                reserved1,
                noisePerMS,
                agcCnt,
                jamInd,
                ofsI,
                magI,
                ofsQ,
                magQ,
                reserved2
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MonRfFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::MonRfFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonRfFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        NBlocks,
        Reserved0,
        List
    >;
};

/// @brief Definition of <b>"MON-RF"</b> message class.
/// @details
///     See @ref MonRfFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonRf.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonRf : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonRf,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonRf>,
        comms::option::def::FieldsImpl<typename MonRfFields<TOpt>::All>,
        comms::option::def::MsgType<MonRf<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonRf,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonRf>,
            comms::option::def::FieldsImpl<typename MonRfFields<TOpt>::All>,
            comms::option::def::MsgType<MonRf<TMsgBase, TOpt> >,
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
    ///         for @ref MonRfFields::Version field.
    ///     @li @b Field_nBlocks type and @b field_nBlocks() access fuction
    ///         for @ref MonRfFields::NBlocks field.
    ///     @li @b Field_reserved0 type and @b field_reserved0() access fuction
    ///         for @ref MonRfFields::Reserved0 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref MonRfFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        nBlocks,
        reserved0,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MonRfCommon::name();
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
            static_cast<std::size_t>(field_nBlocks().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_nBlocks().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_nBlocks().value())>::type;
                field_nBlocks().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox

