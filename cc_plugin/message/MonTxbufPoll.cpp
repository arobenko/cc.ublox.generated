// Generated by commsdsl2comms v3.5.1

#include "MonTxbufPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonTxbufPoll.h"
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

class MonTxbufPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonTxbufPoll<ublox::cc_plugin::Message>,
        MonTxbufPollImpl
    >
{
public:
    MonTxbufPollImpl() = default;
    MonTxbufPollImpl(const MonTxbufPollImpl&) = delete;
    MonTxbufPollImpl(MonTxbufPollImpl&&) = delete;
    virtual ~MonTxbufPollImpl() = default;
    MonTxbufPollImpl& operator=(const MonTxbufPollImpl&) = default;
    MonTxbufPollImpl& operator=(MonTxbufPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonTxbufPoll::MonTxbufPoll() : m_pImpl(new MonTxbufPollImpl) {}
MonTxbufPoll::~MonTxbufPoll() = default;

MonTxbufPoll& MonTxbufPoll::operator=(const MonTxbufPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonTxbufPoll& MonTxbufPoll::operator=(MonTxbufPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonTxbufPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonTxbufPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonTxbufPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonTxbufPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonTxbufPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonTxbufPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonTxbufPoll::MsgIdParamType MonTxbufPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonTxbufPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonTxbufPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonTxbufPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonTxbufPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonTxbufPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


