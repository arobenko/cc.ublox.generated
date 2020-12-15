// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"CfgValPairSimple"</b> field.

#pragma once

#include <tuple>
#include "comms/CompileControl.h"
#include "comms/field/Bundle.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "ublox/field/CfgValKeyId.h"
#include "ublox/field/CfgValL.h"
#include "ublox/field/CfgValPairSimpleCommon.h"
#include "ublox/field/CfgValU1.h"
#include "ublox/field/CfgValU2.h"
#include "ublox/field/CfgValU4.h"
#include "ublox/field/CfgValU8.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"
#include "comms/cast.h"

namespace ublox
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref CfgValPairSimple bundle.
/// @tparam TOpt Protocol options.
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgValPairSimpleMembers
{
    /// @brief Definition of <b>"Key"</b> field.
    struct Key : public
        ublox::field::CfgValKeyId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::field::CfgValPairSimpleMembersCommon::KeyCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Val bitfield.
    struct ValMembers
    {
        /// @brief Definition of <b>"L"</b> field.
        struct L : public
            ublox::field::CfgValL<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::field::CfgValPairSimpleMembersCommon::ValMembersCommon::LCommon::name();
            }
            
        };
        
        /// @brief Definition of <b>"U1"</b> field.
        struct U1 : public
            ublox::field::CfgValU1<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::field::CfgValPairSimpleMembersCommon::ValMembersCommon::U1Common::name();
            }
            
        };
        
        /// @brief Definition of <b>"U2"</b> field.
        struct U2 : public
            ublox::field::CfgValU2<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::field::CfgValPairSimpleMembersCommon::ValMembersCommon::U2Common::name();
            }
            
        };
        
        /// @brief Definition of <b>"U4"</b> field.
        struct U4 : public
            ublox::field::CfgValU4<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::field::CfgValPairSimpleMembersCommon::ValMembersCommon::U4Common::name();
            }
            
        };
        
        /// @brief Definition of <b>"U8"</b> field.
        struct U8 : public
            ublox::field::CfgValU8<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::field::CfgValPairSimpleMembersCommon::ValMembersCommon::U8Common::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               L,
               U1,
               U2,
               U4,
               U8
            >;
    };
    
    /// @brief Definition of <b>"Val"</b> field.
    class Val : public
        comms::field::Variant<
            ublox::field::FieldBase<>,
            typename ValMembers::All
        >
    {
        using Base = 
            comms::field::Variant<
                ublox::field::FieldBase<>,
                typename ValMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
        ///     related to @b comms::field::Variant class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_l type, @b initField_l() and @b accessField_l() access functions -
        ///     for ValMembers::L member field.
        ///     @li @b Field_u1 type, @b initField_u1() and @b accessField_u1() access functions -
        ///     for ValMembers::U1 member field.
        ///     @li @b Field_u2 type, @b initField_u2() and @b accessField_u2() access functions -
        ///     for ValMembers::U2 member field.
        ///     @li @b Field_u4 type, @b initField_u4() and @b accessField_u4() access functions -
        ///     for ValMembers::U4 member field.
        ///     @li @b Field_u8 type, @b initField_u8() and @b accessField_u8() access functions -
        ///     for ValMembers::U8 member field.
        COMMS_VARIANT_MEMBERS_NAMES(
            l,
            u1,
            u2,
            u4,
            u8
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::field::CfgValPairSimpleMembersCommon::ValCommon::name();
        }
        
        /// @brief Optimized currFieldExec functionality.
        /// @details Replaces the currFieldExec() member function defined
        ///    by @b comms::field::Variant.
        template <typename TFunc>
        void currFieldExec(TFunc&& func) 
        {
            switch (Base::currentField()) {
            case FieldIdx_l:
                memFieldDispatch<FieldIdx_l>(accessField_l(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u1:
                memFieldDispatch<FieldIdx_u1>(accessField_u1(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u2:
                memFieldDispatch<FieldIdx_u2>(accessField_u2(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u4:
                memFieldDispatch<FieldIdx_u4>(accessField_u4(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u8:
                memFieldDispatch<FieldIdx_u8>(accessField_u8(), std::forward<TFunc>(func));
                break;
            default:
                static constexpr bool Invalid_field_execution = false;
                static_cast<void>(Invalid_field_execution);
                COMMS_ASSERT(Invalid_field_execution);
                break;
            }
        }
        
        /// @brief Optimized currFieldExec functionality (const variant).
        /// @details Replaces the currFieldExec() member function defined
        ///    by @b comms::field::Variant.
        template <typename TFunc>
        void currFieldExec(TFunc&& func) const
        {
            switch (Base::currentField()) {
            case FieldIdx_l:
                memFieldDispatch<FieldIdx_l>(accessField_l(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u1:
                memFieldDispatch<FieldIdx_u1>(accessField_u1(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u2:
                memFieldDispatch<FieldIdx_u2>(accessField_u2(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u4:
                memFieldDispatch<FieldIdx_u4>(accessField_u4(), std::forward<TFunc>(func));
                break;
            case FieldIdx_u8:
                memFieldDispatch<FieldIdx_u8>(accessField_u8(), std::forward<TFunc>(func));
                break;
            default:
                static constexpr bool Invalid_field_execution = false;
                static_cast<void>(Invalid_field_execution);
                COMMS_ASSERT(Invalid_field_execution);
                break;
            }
        }
        
    private:
        template <std::size_t TIdx, typename TField, typename TFunc>
        static void memFieldDispatch(TField&& f, TFunc&& func)
        {
            #ifdef _MSC_VER
                func.operator()<TIdx>(std::forward<TField>(f)); // VS compiler
            #else // #ifdef _MSC_VER
                func.template operator()<TIdx>(std::forward<TField>(f)); // All other compilers
            #endif // #ifdef _MSC_VER
        }
    };
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Key,
           Val
        >;
};

/// @brief Definition of <b>"CfgValPairSimple"</b> field.
/// @details
///     The CfgValPair definition may be too extensive and too complex
///     for some applications. This field may be a simpler replacement.
///     It also requires custom various custom operations.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgValPairSimple : public
    comms::field::Bundle<
        ublox::field::FieldBase<>,
        typename CfgValPairSimpleMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomRead,
        comms::option::def::HasCustomRefresh
    >
{
    using Base = 
        comms::field::Bundle<
            ublox::field::FieldBase<>,
            typename CfgValPairSimpleMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomRead,
            comms::option::def::HasCustomRefresh
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated access types and functions functions are:
    ///     @li @b Field_keytype and @b field_key() access function -
    ///         for CfgValPairSimpleMembers::Key member field.
    ///     @li @b Field_valtype and @b field_val() access function -
    ///         for CfgValPairSimpleMembers::Val member field.
    COMMS_FIELD_MEMBERS_NAMES(
        key,
        val
    );
    
    /// @brief Allow construction from other files, 
    ///     like members of CfgValPair.
    template <typename TFrom>
    static CfgValPairSimple from(const TFrom& f)
    {
        return comms::field_cast<CfgValPairSimple>(f);
    }
    
    /// @brief Allow casting to other fields, 
    ///     like members of CfgValPair.
    template <typename TTo>
    TTo to() const
    {
        return comms::field_cast<TTo>(*this);
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgValPairSimpleCommon::name();
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        auto es = Base::template readUntilAndUpdateLen<FieldIdx_val>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        auto valId = getValueId();
        switch (valId) {
            case ValId_OneByteLsb: 
                field_val().initField_l();
                break;
            case ValId_OneByte:
                field_val().initField_u1();
                break;
            case ValId_TwoBytes:
                field_val().initField_u2();
                break;
            case ValId_FourBytes: 
                field_val().initField_u4();
                break;
            case ValId_EightBytes:
                field_val().initField_u8();
                break;
            default:
                return comms::ErrorStatus::InvalidMsgData;
        }
    
        return Base::template readFrom<FieldIdx_val>(iter, len);
    }
    
    /// @brief Custom refresh functionality
    bool refresh()
    {
        bool updated = Base::refresh();
    
        auto valId = getValueId();
        switch (valId) {
            case ValId_OneByteLsb: 
                if (field_val().currentField() != Field_val::FieldIdx_l) {
                    field_val().initField_l();
                    updated = true;
                }
                break;
    
            case ValId_OneByte:
                if (field_val().currentField() != Field_val::FieldIdx_u1) {
                    field_val().initField_u1();
                    updated = true;
                }
                break;
    
            case ValId_TwoBytes:
                if (field_val().currentField() != Field_val::FieldIdx_u2) {
                    field_val().initField_u2();
                    updated = true;
                }
                break;
    
            case ValId_FourBytes: 
                if (field_val().currentField() != Field_val::FieldIdx_u4) {
                    field_val().initField_u4();
                    updated = true;
                }
                break;
    
            case ValId_EightBytes:
                if (field_val().currentField() != Field_val::FieldIdx_u8) {
                    field_val().initField_u8();
                    updated = true;
                }
                break;
    
            default:
                if (field_val().currentField() < Field_val::FieldIdx_numOfValues) {
                    field_val().reset();
                    updated = true;
                }
    
                break;
        }
    
        return updated;
    }
    
private:
    /// @brief Value ID
    enum ValId
    {
        ValId_OneByteLsb = 0x1,
        ValId_OneByte = 0x2,
        ValId_TwoBytes = 0x3,
        ValId_FourBytes = 0x4,
        ValId_EightBytes = 0x5,
        ValId_ValuesLimit
    };
    
    /// @brief Get the length of the value field
    ValId getValueId() const
    {
        return static_cast<ValId>(
            (static_cast<std::uint32_t>(field_key().value()) >> 28) & 0x7);    
    } 
    
};

} // namespace field

} // namespace ublox


