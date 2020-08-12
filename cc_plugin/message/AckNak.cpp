// Generated by commsdsl2comms v3.5.0

#include "AckNak.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AckNak.h"
#include "cc_plugin/field/MsgId.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId()
{
    using Field = ublox::message::AckNakFields<>::MsgId;
    auto props = cc_plugin::field::createProps_msgId(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId());
    return props;
}

} // namespace

class AckNakImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AckNak<ublox::cc_plugin::Message>,
        AckNakImpl
    >
{
public:
    AckNakImpl() = default;
    AckNakImpl(const AckNakImpl&) = delete;
    AckNakImpl(AckNakImpl&&) = delete;
    virtual ~AckNakImpl() = default;
    AckNakImpl& operator=(const AckNakImpl&) = default;
    AckNakImpl& operator=(AckNakImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AckNak::AckNak() : m_pImpl(new AckNakImpl) {}
AckNak::~AckNak() = default;

AckNak& AckNak::operator=(const AckNak& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AckNak& AckNak::operator=(AckNak&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AckNak::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AckNak::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AckNak::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AckNak::resetImpl()
{
    m_pImpl->reset();
}

bool AckNak::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AckNak*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AckNak::MsgIdParamType AckNak::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AckNak::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AckNak::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AckNak::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AckNak::lengthImpl() const
{
    return m_pImpl->length();
}

bool AckNak::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


