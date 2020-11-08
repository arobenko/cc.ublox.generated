// Generated by commsdsl2comms v3.5.3

#include "Dop.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Dop.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_dop(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Dop<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


