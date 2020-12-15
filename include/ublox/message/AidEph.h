// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"AID-EPH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/AidEphCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidEph.
/// @tparam TOpt Extra options
/// @see @ref AidEph
/// @headerfile "ublox/message/AidEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidEphFields
{
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidEphFieldsCommon::SvidCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"how"</b> field.
    struct How : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidEphFieldsCommon::HowCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Sfd optional.
    struct SfdMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Lists bundle.
        struct ListsMembers
        {
            /// @brief Scope for all the member fields of
            ///     @ref Sf1d list.
            struct Sf1dMembers
            {
                /// @brief Definition of <b>"element"</b> field.
                struct Element : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint32_t
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsMembersCommon::Sf1dMembersCommon::ElementCommon::name();
                    }
                    
                };
                
            };
            
            /// @brief Definition of <b>"sf1d"</b> field.
            struct Sf1d : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    typename Sf1dMembers::Element,
                    typename TOpt::message::AidEphFields::SfdMembers::ListsMembers::Sf1d,
                    comms::option::def::SequenceFixedSize<8U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsMembersCommon::Sf1dCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of
            ///     @ref Sf2d list.
            struct Sf2dMembers
            {
                /// @brief Definition of <b>"element"</b> field.
                struct Element : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint32_t
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsMembersCommon::Sf2dMembersCommon::ElementCommon::name();
                    }
                    
                };
                
            };
            
            /// @brief Definition of <b>"sf2d"</b> field.
            struct Sf2d : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    typename Sf2dMembers::Element,
                    typename TOpt::message::AidEphFields::SfdMembers::ListsMembers::Sf2d,
                    comms::option::def::SequenceFixedSize<8U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsMembersCommon::Sf2dCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of
            ///     @ref Sf3d list.
            struct Sf3dMembers
            {
                /// @brief Definition of <b>"element"</b> field.
                struct Element : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint32_t
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsMembersCommon::Sf3dMembersCommon::ElementCommon::name();
                    }
                    
                };
                
            };
            
            /// @brief Definition of <b>"sf3d"</b> field.
            struct Sf3d : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    typename Sf3dMembers::Element,
                    typename TOpt::message::AidEphFields::SfdMembers::ListsMembers::Sf3d,
                    comms::option::def::SequenceFixedSize<8U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsMembersCommon::Sf3dCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Sf1d,
                   Sf2d,
                   Sf3d
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Lists : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ListsMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ListsMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access types and functions functions are:
            ///     @li @b Field_sf1dtype and @b field_sf1d() access function -
            ///         for ListsMembers::Sf1d member field.
            ///     @li @b Field_sf2dtype and @b field_sf2d() access function -
            ///         for ListsMembers::Sf2d member field.
            ///     @li @b Field_sf3dtype and @b field_sf3d() access function -
            ///         for ListsMembers::Sf3d member field.
            COMMS_FIELD_MEMBERS_NAMES(
                sf1d,
                sf2d,
                sf3d
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::AidEphFieldsCommon::SfdMembersCommon::ListsCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>""</b> field.
    struct Sfd : public
        comms::field::Optional<
            typename SfdMembers::Lists
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::AidEphFieldsCommon::SfdCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Svid,
        How,
        Sfd
    >;
};

/// @brief Definition of <b>"AID-EPH"</b> message class.
/// @details
///     See @ref AidEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidEph>,
        comms::option::def::FieldsImpl<typename AidEphFields<TOpt>::All>,
        comms::option::def::MsgType<AidEph<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidEph>,
            comms::option::def::FieldsImpl<typename AidEphFields<TOpt>::All>,
            comms::option::def::MsgType<AidEph<TMsgBase, TOpt> >,
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
    ///     @li @b Field_svid type and @b field_svid() access fuction
    ///         for @ref AidEphFields::Svid field.
    ///     @li @b Field_how type and @b field_how() access fuction
    ///         for @ref AidEphFields::How field.
    ///     @li @b Field_sfd type and @b field_sfd() access fuction
    ///         for @ref AidEphFields::Sfd field.
    COMMS_MSG_FIELDS_NAMES(
        svid,
        how,
        sfd
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 104U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::AidEphCommon::name();
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_sfd>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_sfd();
        
        es = Base::template doReadFrom<FieldIdx_sfd>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_sfd() || updated;
        return updated;
    }
    
    
private:
    bool refresh_sfd()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_how().value() != 0U) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_sfd().getMode() == mode) {
            return false;
        }
        
        field_sfd().setMode(mode);
        return true;
        
    }
    
};

} // namespace message

} // namespace ublox


