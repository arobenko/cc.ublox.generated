// Generated by commsdsl2comms v3.3.2

#include "CfgTp5TpIdx.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgTp5TpIdx.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgTp5TpIdx(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgTp5TpIdx<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("TIMEPULSE", 0)
            .add("TIMEPULSE2", 1)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


