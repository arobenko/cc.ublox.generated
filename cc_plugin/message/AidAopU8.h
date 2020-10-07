// Generated by commsdsl2comms v3.5.2

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

class AidAopU8Impl;
class AidAopU8 : public ublox::cc_plugin::Message
{
public:
    AidAopU8();
    AidAopU8(const AidAopU8&) = delete;
    AidAopU8(AidAopU8&&) = delete;
    virtual ~AidAopU8();
    AidAopU8& operator=(const AidAopU8& other);
    AidAopU8& operator=(AidAopU8&&);

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
    std::unique_ptr<AidAopU8Impl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



