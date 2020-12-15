// Generated by commsdsl2comms v3.6.0

#include "Month.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Month.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_month(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Month<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


