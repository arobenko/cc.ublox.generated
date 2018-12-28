#include "CfgPrtTxReady.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgPrtTxReady.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

namespace
{

struct CfgPrtTxReadyMembers
{
    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPrtTxReadyMembers<>::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "en")
                .add(1U, "pol")
                .asMap();
        
    }
    
    static QVariantMap createProps_pin(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPrtTxReadyMembers<>::Pin;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_thres(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ublox::field::CfgPrtTxReadyMembers<>::Thres;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
};

} // namespace


QVariantMap createProps_cfgPrtTxReady(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgPrtTxReady<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(CfgPrtTxReadyMembers::createProps_bits(serHidden))
            .add(CfgPrtTxReadyMembers::createProps_pin(serHidden))
            .add(CfgPrtTxReadyMembers::createProps_thres(serHidden))
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

