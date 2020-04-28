// Generated by commsdsl2comms v3.4.0

#include "CfgNavx5SigAttenCompMode.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNavx5SigAttenCompMode.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNavx5SigAttenCompMode(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNavx5SigAttenCompMode<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .addSpecial("Disabled", 0)
            .addSpecial("Automatic", 255)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


