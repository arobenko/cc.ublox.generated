#include "MonPatchPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonPatchPoll.h"
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

class MonPatchPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonPatchPoll<ublox::cc_plugin::Message>,
        MonPatchPollImpl
    >
{
public:
    MonPatchPollImpl() = default;
    MonPatchPollImpl(const MonPatchPollImpl&) = delete;
    MonPatchPollImpl(MonPatchPollImpl&&) = delete;
    virtual ~MonPatchPollImpl() = default;
    MonPatchPollImpl& operator=(const MonPatchPollImpl&) = default;
    MonPatchPollImpl& operator=(MonPatchPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonPatchPoll::MonPatchPoll() : m_pImpl(new MonPatchPollImpl) {}
MonPatchPoll::~MonPatchPoll() = default;

MonPatchPoll& MonPatchPoll::operator=(const MonPatchPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonPatchPoll& MonPatchPoll::operator=(MonPatchPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonPatchPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonPatchPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonPatchPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonPatchPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonPatchPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonPatchPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonPatchPoll::MsgIdParamType MonPatchPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonPatchPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonPatchPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonPatchPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonPatchPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonPatchPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

