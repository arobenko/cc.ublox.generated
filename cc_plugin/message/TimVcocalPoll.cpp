// Generated by commsdsl2comms v3.4.0

#include "TimVcocalPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimVcocalPoll.h"
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

class TimVcocalPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimVcocalPoll<ublox::cc_plugin::Message>,
        TimVcocalPollImpl
    >
{
public:
    TimVcocalPollImpl() = default;
    TimVcocalPollImpl(const TimVcocalPollImpl&) = delete;
    TimVcocalPollImpl(TimVcocalPollImpl&&) = delete;
    virtual ~TimVcocalPollImpl() = default;
    TimVcocalPollImpl& operator=(const TimVcocalPollImpl&) = default;
    TimVcocalPollImpl& operator=(TimVcocalPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVcocalPoll::TimVcocalPoll() : m_pImpl(new TimVcocalPollImpl) {}
TimVcocalPoll::~TimVcocalPoll() = default;

TimVcocalPoll& TimVcocalPoll::operator=(const TimVcocalPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocalPoll& TimVcocalPoll::operator=(TimVcocalPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimVcocalPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVcocalPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVcocalPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVcocalPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocalPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVcocalPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVcocalPoll::MsgIdParamType TimVcocalPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVcocalPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVcocalPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVcocalPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVcocalPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVcocalPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


