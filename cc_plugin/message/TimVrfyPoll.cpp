#include "TimVrfyPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimVrfyPoll.h"
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

class TimVrfyPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimVrfyPoll<ublox::cc_plugin::Message>,
        TimVrfyPollImpl
    >
{
public:
    TimVrfyPollImpl() = default;
    TimVrfyPollImpl(const TimVrfyPollImpl&) = delete;
    TimVrfyPollImpl(TimVrfyPollImpl&&) = delete;
    virtual ~TimVrfyPollImpl() = default;
    TimVrfyPollImpl& operator=(const TimVrfyPollImpl&) = default;
    TimVrfyPollImpl& operator=(TimVrfyPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVrfyPoll::TimVrfyPoll() : m_pImpl(new TimVrfyPollImpl) {}
TimVrfyPoll::~TimVrfyPoll() = default;

TimVrfyPoll& TimVrfyPoll::operator=(const TimVrfyPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVrfyPoll& TimVrfyPoll::operator=(TimVrfyPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimVrfyPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVrfyPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVrfyPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVrfyPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimVrfyPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVrfyPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVrfyPoll::MsgIdParamType TimVrfyPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVrfyPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVrfyPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVrfyPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVrfyPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVrfyPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

