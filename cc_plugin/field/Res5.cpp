#include "Res5.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Res5.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_res5(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Res5<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

