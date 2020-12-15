// Generated by commsdsl2comms v3.6.0

#include "MonHw3Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonHw3Poll.h"
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

class MonHw3PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonHw3Poll<ublox::cc_plugin::Message>,
        MonHw3PollImpl
    >
{
public:
    MonHw3PollImpl() = default;
    MonHw3PollImpl(const MonHw3PollImpl&) = delete;
    MonHw3PollImpl(MonHw3PollImpl&&) = delete;
    virtual ~MonHw3PollImpl() = default;
    MonHw3PollImpl& operator=(const MonHw3PollImpl&) = default;
    MonHw3PollImpl& operator=(MonHw3PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHw3Poll::MonHw3Poll() : m_pImpl(new MonHw3PollImpl) {}
MonHw3Poll::~MonHw3Poll() = default;

MonHw3Poll& MonHw3Poll::operator=(const MonHw3Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw3Poll& MonHw3Poll::operator=(MonHw3Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHw3Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHw3Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHw3Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHw3Poll::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw3Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHw3Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHw3Poll::MsgIdParamType MonHw3Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHw3Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHw3Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHw3Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHw3Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHw3Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


