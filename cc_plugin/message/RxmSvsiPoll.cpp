#include "RxmSvsiPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmSvsiPoll.h"
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

class RxmSvsiPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmSvsiPoll<ublox::cc_plugin::Message>,
        RxmSvsiPollImpl
    >
{
public:
    RxmSvsiPollImpl() = default;
    RxmSvsiPollImpl(const RxmSvsiPollImpl&) = delete;
    RxmSvsiPollImpl(RxmSvsiPollImpl&&) = delete;
    virtual ~RxmSvsiPollImpl() = default;
    RxmSvsiPollImpl& operator=(const RxmSvsiPollImpl&) = default;
    RxmSvsiPollImpl& operator=(RxmSvsiPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmSvsiPoll::RxmSvsiPoll() : m_pImpl(new RxmSvsiPollImpl) {}
RxmSvsiPoll::~RxmSvsiPoll() = default;

RxmSvsiPoll& RxmSvsiPoll::operator=(const RxmSvsiPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmSvsiPoll& RxmSvsiPoll::operator=(RxmSvsiPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmSvsiPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmSvsiPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmSvsiPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmSvsiPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmSvsiPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmSvsiPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmSvsiPoll::MsgIdParamType RxmSvsiPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmSvsiPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmSvsiPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmSvsiPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmSvsiPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmSvsiPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

