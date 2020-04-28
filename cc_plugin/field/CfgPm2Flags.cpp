// Generated by commsdsl2comms v3.4.0

#include "CfgPm2Flags.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgPm2Flags.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

namespace
{

struct CfgPm2FlagsMembers
{
    static QVariantMap createProps_bitsLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPm2FlagsMembers<>::BitsLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(4U, "extintSel")
                .add(5U, "extintWake")
                .add(6U, "extintBackup")
                .add(7U, "extintInactive")
                .asMap();
        
    }
    
    static QVariantMap createProps_limitPeakCurr(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPm2FlagsMembers<>::LimitPeakCurr;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Desabled", 0)
                .add("Enabled", 1)
                .asMap();
        
    }
    
    static QVariantMap createProps_bitsMid(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPm2FlagsMembers<>::BitsMid;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "waitTimeFix")
                .add(1U, "updateRTC")
                .add(2U, "updateEPH")
                .add(6U, "doNotEnterOff")
                .asMap();
        
    }
    
    static QVariantMap createProps_mode(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPm2FlagsMembers<>::Mode;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("ON/OFF", 0)
                .add("Cyclic", 1)
                .asMap();
        
    }
    
    static QVariantMap createProps_reserved(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPm2FlagsMembers<>::Reserved;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
};

} // namespace


QVariantMap createProps_cfgPm2Flags(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgPm2Flags<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(CfgPm2FlagsMembers::createProps_bitsLow(serHidden))
            .add(CfgPm2FlagsMembers::createProps_limitPeakCurr(serHidden))
            .add(CfgPm2FlagsMembers::createProps_bitsMid(serHidden))
            .add(CfgPm2FlagsMembers::createProps_mode(serHidden))
            .add(CfgPm2FlagsMembers::createProps_reserved(serHidden))
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


