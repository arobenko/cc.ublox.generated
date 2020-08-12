// Generated by commsdsl2comms v3.5.0

#include "RxmAlmPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmAlmPoll.h"
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

class RxmAlmPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmAlmPoll<ublox::cc_plugin::Message>,
        RxmAlmPollImpl
    >
{
public:
    RxmAlmPollImpl() = default;
    RxmAlmPollImpl(const RxmAlmPollImpl&) = delete;
    RxmAlmPollImpl(RxmAlmPollImpl&&) = delete;
    virtual ~RxmAlmPollImpl() = default;
    RxmAlmPollImpl& operator=(const RxmAlmPollImpl&) = default;
    RxmAlmPollImpl& operator=(RxmAlmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmAlmPoll::RxmAlmPoll() : m_pImpl(new RxmAlmPollImpl) {}
RxmAlmPoll::~RxmAlmPoll() = default;

RxmAlmPoll& RxmAlmPoll::operator=(const RxmAlmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmAlmPoll& RxmAlmPoll::operator=(RxmAlmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmAlmPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmAlmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmAlmPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmAlmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmAlmPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmAlmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmAlmPoll::MsgIdParamType RxmAlmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmAlmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmAlmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmAlmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmAlmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmAlmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


