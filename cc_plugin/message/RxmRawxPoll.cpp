// Generated by commsdsl2comms v3.6.2

#include "RxmRawxPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmRawxPoll.h"
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

class RxmRawxPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmRawxPoll<ublox::cc_plugin::Message>,
        RxmRawxPollImpl
    >
{
public:
    RxmRawxPollImpl() = default;
    RxmRawxPollImpl(const RxmRawxPollImpl&) = delete;
    RxmRawxPollImpl(RxmRawxPollImpl&&) = delete;
    virtual ~RxmRawxPollImpl() = default;
    RxmRawxPollImpl& operator=(const RxmRawxPollImpl&) = default;
    RxmRawxPollImpl& operator=(RxmRawxPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmRawxPoll::RxmRawxPoll() : m_pImpl(new RxmRawxPollImpl) {}
RxmRawxPoll::~RxmRawxPoll() = default;

RxmRawxPoll& RxmRawxPoll::operator=(const RxmRawxPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRawxPoll& RxmRawxPoll::operator=(RxmRawxPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRawxPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmRawxPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmRawxPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmRawxPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRawxPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmRawxPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmRawxPoll::MsgIdParamType RxmRawxPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmRawxPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmRawxPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmRawxPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmRawxPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmRawxPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


