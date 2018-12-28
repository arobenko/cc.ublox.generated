#include "MonIoPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonIoPoll.h"
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

class MonIoPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonIoPoll<ublox::cc_plugin::Message>,
        MonIoPollImpl
    >
{
public:
    MonIoPollImpl() = default;
    MonIoPollImpl(const MonIoPollImpl&) = delete;
    MonIoPollImpl(MonIoPollImpl&&) = delete;
    virtual ~MonIoPollImpl() = default;
    MonIoPollImpl& operator=(const MonIoPollImpl&) = default;
    MonIoPollImpl& operator=(MonIoPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonIoPoll::MonIoPoll() : m_pImpl(new MonIoPollImpl) {}
MonIoPoll::~MonIoPoll() = default;

MonIoPoll& MonIoPoll::operator=(const MonIoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonIoPoll& MonIoPoll::operator=(MonIoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonIoPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonIoPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonIoPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonIoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonIoPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonIoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonIoPoll::MsgIdParamType MonIoPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonIoPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonIoPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonIoPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonIoPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonIoPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

