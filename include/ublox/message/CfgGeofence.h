// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"CFG-GEOFENCE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Res1.h"
#include "ublox/message/CfgGeofenceCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgGeofence.
/// @tparam TOpt Extra options
/// @see @ref CfgGeofence
/// @headerfile "ublox/message/CfgGeofence.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgGeofenceFields
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
            return ublox::message::CfgGeofenceFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numFences"</b> field.
    struct NumFences : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGeofenceFieldsCommon::NumFencesCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"confLvl"</b> field.
    struct ConfLvl : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGeofenceFieldsCommon::ConfLvlCommon::name();
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
            return ublox::message::CfgGeofenceFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"pioEnabled"</b> field.
    /// @see @ref ublox::message::CfgGeofenceFieldsCommon::PioEnabledVal
    class PioEnabled : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgGeofenceFieldsCommon::PioEnabledVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgGeofenceFieldsCommon::PioEnabledVal,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGeofenceFieldsCommon::PioEnabledCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgGeofenceFieldsCommon::PioEnabledCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"pinPolarity"</b> field.
    /// @see @ref ublox::message::CfgGeofenceFieldsCommon::PinPolarityVal
    class PinPolarity : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgGeofenceFieldsCommon::PinPolarityVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgGeofenceFieldsCommon::PinPolarityVal,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGeofenceFieldsCommon::PinPolarityCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgGeofenceFieldsCommon::PinPolarityCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"pin"</b> field.
    struct Pin : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGeofenceFieldsCommon::PinCommon::name();
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
            return ublox::message::CfgGeofenceFieldsCommon::Reserved2Common::name();
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
            /// @brief Definition of <b>"lat"</b> field.
            using Lat =
                ublox::field::Lat<
                    TOpt
                >;
            
            /// @brief Definition of <b>"lon"</b> field.
            using Lon =
                ublox::field::Lon<
                    TOpt
                >;
            
            /// @brief Definition of <b>"radius"</b> field.
            struct Radius : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<100, 1>,
                    comms::option::def::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgGeofenceFieldsCommon::ListMembersCommon::ElementMembersCommon::RadiusCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Lat,
                   Lon,
                   Radius
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
            ///     @li @b Field_lattype and @b field_lat() access function -
            ///         for ElementMembers::Lat member field.
            ///     @li @b Field_lontype and @b field_lon() access function -
            ///         for ElementMembers::Lon member field.
            ///     @li @b Field_radiustype and @b field_radius() access function -
            ///         for ElementMembers::Radius member field.
            COMMS_FIELD_MEMBERS_NAMES(
                lat,
                lon,
                radius
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgGeofenceFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::CfgGeofenceFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgGeofenceFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        NumFences,
        ConfLvl,
        Reserved1,
        PioEnabled,
        PinPolarity,
        Pin,
        Reserved2,
        List
    >;
};

/// @brief Definition of <b>"CFG-GEOFENCE"</b> message class.
/// @details
///     See @ref CfgGeofenceFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgGeofence.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgGeofence : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgGeofence>,
        comms::option::def::FieldsImpl<typename CfgGeofenceFields<TOpt>::All>,
        comms::option::def::MsgType<CfgGeofence<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgGeofence>,
            comms::option::def::FieldsImpl<typename CfgGeofenceFields<TOpt>::All>,
            comms::option::def::MsgType<CfgGeofence<TMsgBase, TOpt> >,
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
    ///         for @ref CfgGeofenceFields::Version field.
    ///     @li @b Field_numFences type and @b field_numFences() access fuction
    ///         for @ref CfgGeofenceFields::NumFences field.
    ///     @li @b Field_confLvl type and @b field_confLvl() access fuction
    ///         for @ref CfgGeofenceFields::ConfLvl field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgGeofenceFields::Reserved1 field.
    ///     @li @b Field_pioEnabled type and @b field_pioEnabled() access fuction
    ///         for @ref CfgGeofenceFields::PioEnabled field.
    ///     @li @b Field_pinPolarity type and @b field_pinPolarity() access fuction
    ///         for @ref CfgGeofenceFields::PinPolarity field.
    ///     @li @b Field_pin type and @b field_pin() access fuction
    ///         for @ref CfgGeofenceFields::Pin field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref CfgGeofenceFields::Reserved2 field.
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref CfgGeofenceFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        numFences,
        confLvl,
        reserved1,
        pioEnabled,
        pinPolarity,
        pin,
        reserved2,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgGeofenceCommon::name();
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
            static_cast<std::size_t>(field_numFences().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numFences().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numFences().value())>::type;
                field_numFences().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


