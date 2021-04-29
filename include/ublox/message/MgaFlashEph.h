// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"MGA-FLASH-DATA"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/MgaFlashEphCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaFlashEph.
/// @tparam TOpt Extra options
/// @see @ref MgaFlashEph
/// @headerfile "ublox/message/MgaFlashEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaFlashEphFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashEphFieldsCommon::TypeCommon::name();
        }
        
    };
    
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
            return ublox::message::MgaFlashEphFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"sequence"</b> field.
    struct Sequence : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashEphFieldsCommon::SequenceCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"size"</b> field.
    struct Size : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashEphFieldsCommon::SizeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaFlashEphFields::Data,
            comms::option::def::SequenceLengthForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaFlashEphFieldsCommon::DataCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Sequence,
        Size,
        Data
    >;
};

/// @brief Definition of <b>"MGA-FLASH-DATA"</b> message class.
/// @details
///     See @ref MgaFlashEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaFlashEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaFlashEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaFlashEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
        comms::option::def::FieldsImpl<typename MgaFlashEphFields<TOpt>::All>,
        comms::option::def::MsgType<MgaFlashEph<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaFlashEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
            comms::option::def::FieldsImpl<typename MgaFlashEphFields<TOpt>::All>,
            comms::option::def::MsgType<MgaFlashEph<TMsgBase, TOpt> >,
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
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref MgaFlashEphFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaFlashEphFields::Version field.
    ///     @li @b Field_sequence type and @b field_sequence() access fuction
    ///         for @ref MgaFlashEphFields::Sequence field.
    ///     @li @b Field_size type and @b field_size() access fuction
    ///         for @ref MgaFlashEphFields::Size field.
    ///     @li @b Field_data type and @b field_data() access fuction
    ///         for @ref MgaFlashEphFields::Data field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        sequence,
        size,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaFlashEphCommon::name();
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_data>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_data().forceReadLength(
            static_cast<std::size_t>(field_size().value()));
        
        es = Base::template doReadFrom<FieldIdx_data>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_data() || updated;
        return updated;
    }
    
    
private:
    bool refresh_data()
    {
        auto expectedLength = static_cast<std::size_t>(field_size().value());
        auto realLength = field_data().value().size();
        if (expectedLength != realLength) {
            using LenValueType = typename std::decay<decltype(field_size().value())>::type;
            field_size().value() = static_cast<LenValueType>(realLength);
            return true;
        }
        
        return false;
    }
    
};

} // namespace message

} // namespace ublox


