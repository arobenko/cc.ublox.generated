// Generated by commsdsl2comms v3.5.2

#include "PAcc.h"

#include "comms_champion/property/field.h"
#include "ublox/field/PAcc.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_pAcc(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::PAcc<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


