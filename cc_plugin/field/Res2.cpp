// Generated by commsdsl2comms v3.5.0

#include "Res2.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Res2.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_res2(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Res2<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


