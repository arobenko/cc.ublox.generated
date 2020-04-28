// Generated by commsdsl2comms v3.4.0

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "cc_plugin/Message.h"

namespace ublox
{

namespace cc_plugin
{

namespace message
{

class MgaQzssEphImpl;
class MgaQzssEph : public ublox::cc_plugin::Message
{
public:
    MgaQzssEph();
    MgaQzssEph(const MgaQzssEph&) = delete;
    MgaQzssEph(MgaQzssEph&&) = delete;
    virtual ~MgaQzssEph();
    MgaQzssEph& operator=(const MgaQzssEph& other);
    MgaQzssEph& operator=(MgaQzssEph&&);

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(comms_champion::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const comms_champion::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<MgaQzssEphImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



