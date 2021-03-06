// Generated by commsdsl2comms v3.6.2

#include "AltHP.h"

#include "comms_champion/property/field.h"
#include "ublox/field/AltHP.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_altHP(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::AltHP<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


