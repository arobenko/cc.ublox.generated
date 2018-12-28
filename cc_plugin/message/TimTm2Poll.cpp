#include "TimTm2Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimTm2Poll.h"
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

class TimTm2PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimTm2Poll<ublox::cc_plugin::Message>,
        TimTm2PollImpl
    >
{
public:
    TimTm2PollImpl() = default;
    TimTm2PollImpl(const TimTm2PollImpl&) = delete;
    TimTm2PollImpl(TimTm2PollImpl&&) = delete;
    virtual ~TimTm2PollImpl() = default;
    TimTm2PollImpl& operator=(const TimTm2PollImpl&) = default;
    TimTm2PollImpl& operator=(TimTm2PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimTm2Poll::TimTm2Poll() : m_pImpl(new TimTm2PollImpl) {}
TimTm2Poll::~TimTm2Poll() = default;

TimTm2Poll& TimTm2Poll::operator=(const TimTm2Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTm2Poll& TimTm2Poll::operator=(TimTm2Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTm2Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimTm2Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimTm2Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimTm2Poll::resetImpl()
{
    m_pImpl->reset();
}

bool TimTm2Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimTm2Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimTm2Poll::MsgIdParamType TimTm2Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimTm2Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimTm2Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimTm2Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimTm2Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimTm2Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

