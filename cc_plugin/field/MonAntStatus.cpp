// Generated by commsdsl2comms v3.6.0

#include "MonAntStatus.h"

#include "comms_champion/property/field.h"
#include "ublox/field/MonAntStatus.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_monAntStatus(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::MonAntStatus<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("INIT", 0)
            .add("DONTKNOW", 1)
            .add("OK", 2)
            .add("SHORT", 3)
            .add("OPEN", 4)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


