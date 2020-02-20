// Generated by commsdsl2comms v3.3.2

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

class NavPvt_u8Impl;
class NavPvt_u8 : public ublox::cc_plugin::Message
{
public:
    NavPvt_u8();
    NavPvt_u8(const NavPvt_u8&) = delete;
    NavPvt_u8(NavPvt_u8&&) = delete;
    virtual ~NavPvt_u8();
    NavPvt_u8& operator=(const NavPvt_u8& other);
    NavPvt_u8& operator=(NavPvt_u8&&);

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
    std::unique_ptr<NavPvt_u8Impl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



