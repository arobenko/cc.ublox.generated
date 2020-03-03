// Generated by commsdsl2comms v3.3.3

#include "UpdSosPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/UpdSosPoll.h"
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

class UpdSosPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::UpdSosPoll<ublox::cc_plugin::Message>,
        UpdSosPollImpl
    >
{
public:
    UpdSosPollImpl() = default;
    UpdSosPollImpl(const UpdSosPollImpl&) = delete;
    UpdSosPollImpl(UpdSosPollImpl&&) = delete;
    virtual ~UpdSosPollImpl() = default;
    UpdSosPollImpl& operator=(const UpdSosPollImpl&) = default;
    UpdSosPollImpl& operator=(UpdSosPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

UpdSosPoll::UpdSosPoll() : m_pImpl(new UpdSosPollImpl) {}
UpdSosPoll::~UpdSosPoll() = default;

UpdSosPoll& UpdSosPoll::operator=(const UpdSosPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

UpdSosPoll& UpdSosPoll::operator=(UpdSosPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* UpdSosPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& UpdSosPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void UpdSosPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void UpdSosPoll::resetImpl()
{
    m_pImpl->reset();
}

bool UpdSosPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const UpdSosPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

UpdSosPoll::MsgIdParamType UpdSosPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus UpdSosPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus UpdSosPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool UpdSosPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t UpdSosPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool UpdSosPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


