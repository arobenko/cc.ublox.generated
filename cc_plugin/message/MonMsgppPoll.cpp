// Generated by commsdsl2comms v3.6.2

#include "MonMsgppPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonMsgppPoll.h"
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

class MonMsgppPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonMsgppPoll<ublox::cc_plugin::Message>,
        MonMsgppPollImpl
    >
{
public:
    MonMsgppPollImpl() = default;
    MonMsgppPollImpl(const MonMsgppPollImpl&) = delete;
    MonMsgppPollImpl(MonMsgppPollImpl&&) = delete;
    virtual ~MonMsgppPollImpl() = default;
    MonMsgppPollImpl& operator=(const MonMsgppPollImpl&) = default;
    MonMsgppPollImpl& operator=(MonMsgppPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonMsgppPoll::MonMsgppPoll() : m_pImpl(new MonMsgppPollImpl) {}
MonMsgppPoll::~MonMsgppPoll() = default;

MonMsgppPoll& MonMsgppPoll::operator=(const MonMsgppPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonMsgppPoll& MonMsgppPoll::operator=(MonMsgppPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonMsgppPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonMsgppPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonMsgppPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonMsgppPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonMsgppPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonMsgppPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonMsgppPoll::MsgIdParamType MonMsgppPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonMsgppPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonMsgppPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonMsgppPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonMsgppPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonMsgppPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


