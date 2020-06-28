// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"NAV-STATUS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/Itow.h"
#include "ublox/message/NavStatusCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavStatus.
/// @tparam TOpt Extra options
/// @see @ref NavStatus
/// @headerfile "ublox/message/NavStatus.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavStatusFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"gpsFix"</b> field.
    using GpsFix =
        ublox::field::GpsFix<
            TOpt
        >;
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
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
        ///      @li @b BitIdx_gpsFixOk, @b getBitValue_gpsFixOk() and @b setBitValue_gpsFixOk().
        ///      @li @b BitIdx_diffSoln, @b getBitValue_diffSoln() and @b setBitValue_diffSoln().
        ///      @li @b BitIdx_wknSet, @b getBitValue_wknSet() and @b setBitValue_wknSet().
        ///      @li @b BitIdx_towSet, @b getBitValue_towSet() and @b setBitValue_towSet().
        COMMS_BITMASK_BITS_SEQ(
            gpsFixOk,
            diffSoln,
            wknSet,
            towSet
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavStatusFieldsCommon::FlagsCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavStatusFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref FixStat bitfield.
    struct FixStatMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<6U>,
                comms::option::def::BitmaskReservedBits<0x3EU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<6U>,
                    comms::option::def::BitmaskReservedBits<0x3EU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_diffCorr, @b getBitValue_diffCorr() and @b setBitValue_diffCorr().
            COMMS_BITMASK_BITS_SEQ(
                diffCorr
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::BitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"mapMatching"</b> field.
        /// @see @ref ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::MapMatchingVal
        class MapMatching : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::MapMatchingVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::MapMatchingVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::MapMatchingCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavStatusFieldsCommon::FixStatMembersCommon::MapMatchingCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Bits,
               MapMatching
            >;
    };
    
    /// @brief Definition of <b>"fixStat"</b> field.
    class FixStat : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FixStatMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FixStatMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_bits type and @b field_bits() access function -
        ///         for FixStatMembers::Bits member field.
        ///     @li @b Field_mapMatching type and @b field_mapMatching() access function -
        ///         for FixStatMembers::MapMatching member field.
        COMMS_FIELD_MEMBERS_NAMES(
            bits,
            mapMatching
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavStatusFieldsCommon::FixStatCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Flags2 bitfield.
    struct Flags2Members
    {
        /// @brief Definition of <b>"psmState"</b> field.
        /// @see @ref ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::PsmStateVal
        class PsmState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::PsmStateVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::PsmStateVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::PsmStateCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::PsmStateCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"res1"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Res1 : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<1U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::Res1Common::name();
            }
            
        };
        
        /// @brief Definition of <b>"spoofDetState"</b> field.
        /// @see @ref ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::SpoofDetStateVal
        class SpoofDetState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::SpoofDetStateVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::SpoofDetStateVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::SpoofDetStateCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::SpoofDetStateCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"res2"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Res2 : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavStatusFieldsCommon::Flags2MembersCommon::Res2Common::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               PsmState,
               Res1,
               SpoofDetState,
               Res2
            >;
    };
    
    /// @brief Definition of <b>"flags2"</b> field.
    class Flags2 : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename Flags2Members::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename Flags2Members::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_psmState type and @b field_psmState() access function -
        ///         for Flags2Members::PsmState member field.
        ///     @li @b Field_res1 type and @b field_res1() access function -
        ///         for Flags2Members::Res1 member field.
        ///     @li @b Field_spoofDetState type and @b field_spoofDetState() access function -
        ///         for Flags2Members::SpoofDetState member field.
        ///     @li @b Field_res2 type and @b field_res2() access function -
        ///         for Flags2Members::Res2 member field.
        COMMS_FIELD_MEMBERS_NAMES(
            psmState,
            res1,
            spoofDetState,
            res2
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavStatusFieldsCommon::Flags2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ttff"</b> field.
    struct Ttff : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavStatusFieldsCommon::TtffCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"msss"</b> field.
    struct Msss : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavStatusFieldsCommon::MsssCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        GpsFix,
        Flags,
        FixStat,
        Flags2,
        Ttff,
        Msss
    >;
};

/// @brief Definition of <b>"NAV-STATUS"</b> message class.
/// @details
///     See @ref NavStatusFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavStatus.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavStatus : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavStatus,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavStatus>,
        comms::option::def::FieldsImpl<typename NavStatusFields<TOpt>::All>,
        comms::option::def::MsgType<NavStatus<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavStatus,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavStatus>,
            comms::option::def::FieldsImpl<typename NavStatusFields<TOpt>::All>,
            comms::option::def::MsgType<NavStatus<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavStatusFields::Itow field.
    ///     @li @b Field_gpsFix type and @b field_gpsFix() access fuction
    ///         for @ref NavStatusFields::GpsFix field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref NavStatusFields::Flags field.
    ///     @li @b Field_fixStat type and @b field_fixStat() access fuction
    ///         for @ref NavStatusFields::FixStat field.
    ///     @li @b Field_flags2 type and @b field_flags2() access fuction
    ///         for @ref NavStatusFields::Flags2 field.
    ///     @li @b Field_ttff type and @b field_ttff() access fuction
    ///         for @ref NavStatusFields::Ttff field.
    ///     @li @b Field_msss type and @b field_msss() access fuction
    ///         for @ref NavStatusFields::Msss field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        gpsFix,
        flags,
        fixStat,
        flags2,
        ttff,
        msss
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavStatusCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


