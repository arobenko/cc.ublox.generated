#include "Vel.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Vel.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_vel(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Vel<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

