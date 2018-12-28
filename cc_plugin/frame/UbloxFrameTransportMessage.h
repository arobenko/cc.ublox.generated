#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "comms_champion/TransportMessageBase.h"
#include "ublox/frame/UbloxFrame.h"
#include "cc_plugin/Message.h"

namespace ublox
{

namespace cc_plugin
{

namespace frame
{

struct UbloxFrameTransportMessageFields
{
    using All =
        std::tuple<
            ublox::frame::UbloxFrameLayers<>::SyncMembers::Sync,
            ublox::frame::UbloxFrameLayers<>::IdMembers::MsgId,
            ublox::frame::UbloxFrameLayers<>::LengthMembers::LENGTH,
            ublox::frame::UbloxFrameLayers<>::Payload::Field,
            ublox::frame::UbloxFrameLayers<>::ChecksumMembers::Checksum
        >;
};

class UbloxFrameTransportMessage : public
    comms_champion::TransportMessageBase<
        ublox::cc_plugin::Message,
        UbloxFrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
};

} // namespace frame

} // namespace cc_plugin

} // namespace ublox

