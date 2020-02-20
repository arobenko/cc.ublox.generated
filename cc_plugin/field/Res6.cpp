// Generated by commsdsl2comms v3.3.2

#include "Res6.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Res6.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_res6(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Res6<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


