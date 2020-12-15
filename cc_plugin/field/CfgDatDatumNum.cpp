// Generated by commsdsl2comms v3.6.0

#include "CfgDatDatumNum.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgDatDatumNum.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgDatDatumNum(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgDatDatumNum<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("WGS84", 0)
            .add("User", 65535L)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


