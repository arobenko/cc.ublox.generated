#include "GpsFix.h"

#include "comms_champion/property/field.h"
#include "ublox/field/GpsFix.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_gpsFix(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::GpsFix<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("no fix", 0)
            .add("dead reckoning", 1)
            .add("2D fix", 2)
            .add("3D fix", 3)
            .add("GPS + dead reckoning", 4)
            .add("time only fix", 5)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

