/// @file
/// @brief Contains definition of <b>"CFG-TMODE2"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgTmode2Fields.
/// @see @ref CfgTmode2Fields
/// @headerfile "ublox/message/CfgTmode2.h"
struct CfgTmode2FieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTmode2Fields::TimeMode field.
    enum class TimeModeVal : std::uint32_t
    {
        Disabled = 0, ///< value @b Disabled
        SurveyIn = 1, ///< value <b>Survey In</b>.
        FixedMode = 2, ///< value <b>Fixed Mode</b>.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTmode2Fields::TimeMode field.
    struct TimeModeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(TimeModeVal val)
        {
            static const char* Map[] = {
                "Disabled",
                "Survey In",
                "Fixed Mode"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTmode2Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "lla",
                "altInv"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgTmode2.
/// @tparam TOpt Extra options
/// @see @ref CfgTmode2
/// @headerfile "ublox/message/CfgTmode2.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTmode2Fields
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTmode2Fields::TimeMode field.
    using TimeModeVal = ublox::message::CfgTmode2FieldsCommon::TimeModeVal;
    
    /// @brief Definition of <b>"timeMode"</b> field.
    /// @see @ref ublox::message::CfgTmode2Fields::TimeModeVal
    struct TimeMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            TimeModeVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(TimeModeVal val)
        {
            return ublox::message::CfgTmode2FieldsCommon::TimeModeCommon::valueName(val);
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
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_lla, @b getBitValue_lla() and @b setBitValue_lla().
        ///      @li @b BitIdx_altInv, @b getBitValue_altInv() and @b setBitValue_altInv().
        COMMS_BITMASK_BITS_SEQ(
            lla,
            altInv
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgTmode2FieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefX optional.
    struct EcefXMembers
    {
        /// @brief Definition of <b>"ecefX"</b> field.
        struct EcefX : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ecefX";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefX"</b> field.
    struct EcefX : public
        comms::field::Optional<
            typename EcefXMembers::EcefX,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecefX";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lat optional.
    struct LatMembers
    {
        /// @brief Definition of <b>"lat"</b> field.
        struct Lat : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 10000000L>,
                comms::option::def::UnitsDegrees
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "lat";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lat"</b> field.
    struct Lat : public
        comms::field::Optional<
            typename LatMembers::Lat,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lat";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefY optional.
    struct EcefYMembers
    {
        /// @brief Definition of <b>"ecefY"</b> field.
        struct EcefY : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ecefY";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefY"</b> field.
    struct EcefY : public
        comms::field::Optional<
            typename EcefYMembers::EcefY,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecefY";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lon optional.
    struct LonMembers
    {
        /// @brief Definition of <b>"lon"</b> field.
        struct Lon : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 10000000L>,
                comms::option::def::UnitsDegrees
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "lon";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lon"</b> field.
    struct Lon : public
        comms::field::Optional<
            typename LonMembers::Lon,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lon";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefZ optional.
    struct EcefZMembers
    {
        /// @brief Definition of <b>"ecefZ"</b> field.
        struct EcefZ : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ecefZ";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    struct EcefZ : public
        comms::field::Optional<
            typename EcefZMembers::EcefZ,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecefZ";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Alt optional.
    struct AltMembers
    {
        /// @brief Definition of <b>"alt"</b> field.
        struct Alt : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "alt";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"alt"</b> field.
    struct Alt : public
        comms::field::Optional<
            typename AltMembers::Alt,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "alt";
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosAcc"</b> field.
    struct FixedPosAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixedPosAcc";
        }
        
    };
    
    /// @brief Definition of <b>"svinMinDur"</b> field.
    struct SvinMinDur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svinMinDur";
        }
        
    };
    
    /// @brief Definition of <b>"svinVarLimit"</b> field.
    struct SvinVarLimit : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svinVarLimit";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TimeMode,
        Reserved1,
        Flags,
        EcefX,
        Lat,
        EcefY,
        Lon,
        EcefZ,
        Alt,
        FixedPosAcc,
        SvinMinDur,
        SvinVarLimit
    >;
};

/// @brief Definition of <b>"CFG-TMODE2"</b> message class.
/// @details
///     See @ref CfgTmode2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTmode2.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTmode2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode2>,
        comms::option::def::FieldsImpl<typename CfgTmode2Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmode2<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode2>,
            comms::option::def::FieldsImpl<typename CfgTmode2Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmode2<TMsgBase, TOpt> >,
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
    ///     @li @b Field_timeMode type and @b field_timeMode() fuction
    ///         for @ref CfgTmode2Fields::TimeMode field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref CfgTmode2Fields::Reserved1 field.
    ///     @li @b Field_flags type and @b field_flags() fuction
    ///         for @ref CfgTmode2Fields::Flags field.
    ///     @li @b Field_ecefX type and @b field_ecefX() fuction
    ///         for @ref CfgTmode2Fields::EcefX field.
    ///     @li @b Field_lat type and @b field_lat() fuction
    ///         for @ref CfgTmode2Fields::Lat field.
    ///     @li @b Field_ecefY type and @b field_ecefY() fuction
    ///         for @ref CfgTmode2Fields::EcefY field.
    ///     @li @b Field_lon type and @b field_lon() fuction
    ///         for @ref CfgTmode2Fields::Lon field.
    ///     @li @b Field_ecefZ type and @b field_ecefZ() fuction
    ///         for @ref CfgTmode2Fields::EcefZ field.
    ///     @li @b Field_alt type and @b field_alt() fuction
    ///         for @ref CfgTmode2Fields::Alt field.
    ///     @li @b Field_fixedPosAcc type and @b field_fixedPosAcc() fuction
    ///         for @ref CfgTmode2Fields::FixedPosAcc field.
    ///     @li @b Field_svinMinDur type and @b field_svinMinDur() fuction
    ///         for @ref CfgTmode2Fields::SvinMinDur field.
    ///     @li @b Field_svinVarLimit type and @b field_svinVarLimit() fuction
    ///         for @ref CfgTmode2Fields::SvinVarLimit field.
    COMMS_MSG_FIELDS_NAMES(
        timeMode,
        reserved1,
        flags,
        ecefX,
        lat,
        ecefY,
        lon,
        ecefZ,
        alt,
        fixedPosAcc,
        svinMinDur,
        svinVarLimit
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 19U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 43U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TMODE2";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_ecefX>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_ecefX();
        
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_ecefX, FieldIdx_lat>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_lat();
        
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_lat, FieldIdx_ecefY>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_ecefY();
        
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_ecefY, FieldIdx_lon>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_lon();
        
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_lon, FieldIdx_ecefZ>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_ecefZ();
        
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_ecefZ, FieldIdx_alt>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_alt();
        
        es = Base::template doReadFrom<FieldIdx_alt>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_ecefX() || updated;
        updated = refresh_lat() || updated;
        updated = refresh_ecefY() || updated;
        updated = refresh_lon() || updated;
        updated = refresh_ecefZ() || updated;
        updated = refresh_alt() || updated;
        return updated;
    }
    
    
private:
    bool refresh_ecefX()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (!field_flags().getBitValue_lla()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_ecefX().getMode() == mode) {
            return false;
        }
        
        field_ecefX().setMode(mode);
        return true;
        
    }
    
    bool refresh_lat()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().getBitValue_lla()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_lat().getMode() == mode) {
            return false;
        }
        
        field_lat().setMode(mode);
        return true;
        
    }
    
    bool refresh_ecefY()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (!field_flags().getBitValue_lla()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_ecefY().getMode() == mode) {
            return false;
        }
        
        field_ecefY().setMode(mode);
        return true;
        
    }
    
    bool refresh_lon()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().getBitValue_lla()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_lon().getMode() == mode) {
            return false;
        }
        
        field_lon().setMode(mode);
        return true;
        
    }
    
    bool refresh_ecefZ()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (!field_flags().getBitValue_lla()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_ecefZ().getMode() == mode) {
            return false;
        }
        
        field_ecefZ().setMode(mode);
        return true;
        
    }
    
    bool refresh_alt()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().getBitValue_lla()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_alt().getMode() == mode) {
            return false;
        }
        
        field_alt().setMode(mode);
        return true;
        
    }
    
};

} // namespace message

} // namespace ublox


