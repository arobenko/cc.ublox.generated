#include "CfgNmeaGsvTalkerId.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNmeaGsvTalkerId.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNmeaGsvTalkerId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNmeaGsvTalkerId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("GNSS Specific", 0)
            .add("Main", 1)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox

