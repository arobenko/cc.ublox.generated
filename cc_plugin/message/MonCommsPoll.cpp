// Generated by commsdsl2comms v3.6.2

#include "MonCommsPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonCommsPoll.h"
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

class MonCommsPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonCommsPoll<ublox::cc_plugin::Message>,
        MonCommsPollImpl
    >
{
public:
    MonCommsPollImpl() = default;
    MonCommsPollImpl(const MonCommsPollImpl&) = delete;
    MonCommsPollImpl(MonCommsPollImpl&&) = delete;
    virtual ~MonCommsPollImpl() = default;
    MonCommsPollImpl& operator=(const MonCommsPollImpl&) = default;
    MonCommsPollImpl& operator=(MonCommsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonCommsPoll::MonCommsPoll() : m_pImpl(new MonCommsPollImpl) {}
MonCommsPoll::~MonCommsPoll() = default;

MonCommsPoll& MonCommsPoll::operator=(const MonCommsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonCommsPoll& MonCommsPoll::operator=(MonCommsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonCommsPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonCommsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonCommsPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonCommsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonCommsPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonCommsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonCommsPoll::MsgIdParamType MonCommsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonCommsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonCommsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonCommsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonCommsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonCommsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


