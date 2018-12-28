#include "Day.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Day.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_day(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Day<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

