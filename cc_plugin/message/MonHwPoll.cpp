// Generated by commsdsl2comms v3.3.2

#include "MonHwPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonHwPoll.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class MonHwPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonHwPoll<ublox::cc_plugin::Message>,
        MonHwPollImpl
    >
{
public:
    MonHwPollImpl() = default;
    MonHwPollImpl(const MonHwPollImpl&) = delete;
    MonHwPollImpl(MonHwPollImpl&&) = delete;
    virtual ~MonHwPollImpl() = default;
    MonHwPollImpl& operator=(const MonHwPollImpl&) = default;
    MonHwPollImpl& operator=(MonHwPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHwPoll::MonHwPoll() : m_pImpl(new MonHwPollImpl) {}
MonHwPoll::~MonHwPoll() = default;

MonHwPoll& MonHwPoll::operator=(const MonHwPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHwPoll& MonHwPoll::operator=(MonHwPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHwPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHwPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHwPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHwPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonHwPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHwPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHwPoll::MsgIdParamType MonHwPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHwPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHwPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHwPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHwPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHwPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


