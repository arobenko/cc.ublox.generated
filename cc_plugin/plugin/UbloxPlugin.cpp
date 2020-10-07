// Generated by commsdsl2comms v3.5.2

#include "UbloxPlugin.h"

#include "UbloxProtocol.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace plugin
{

UbloxPlugin::UbloxPlugin()
  : m_protocol(new UbloxProtocol())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() -> cc::ProtocolPtr
            {
                return m_protocol;
            })
            ;
}

UbloxPlugin::~UbloxPlugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace ublox


