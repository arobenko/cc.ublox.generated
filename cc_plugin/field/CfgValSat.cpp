// Generated by commsdsl2comms v3.6.0

#include "CfgValSat.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgValSat.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgValSat(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgValSat<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("UTC", 0)
            .add("GPS", 1)
            .add("GLO", 2)
            .add("BDS", 3)
            .add("GAL", 4)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

