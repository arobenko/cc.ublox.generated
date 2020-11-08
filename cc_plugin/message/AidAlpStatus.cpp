// Generated by commsdsl2comms v3.5.3

#include "AidAlpStatus.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAlpStatus.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_status()
{
    using Field = ublox::message::AidAlpStatusFields<>::Status;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("nak", 0)
            .add("ack", 1)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_status());
    return props;
}

} // namespace

class AidAlpStatusImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAlpStatus<ublox::cc_plugin::Message>,
        AidAlpStatusImpl
    >
{
public:
    AidAlpStatusImpl() = default;
    AidAlpStatusImpl(const AidAlpStatusImpl&) = delete;
    AidAlpStatusImpl(AidAlpStatusImpl&&) = delete;
    virtual ~AidAlpStatusImpl() = default;
    AidAlpStatusImpl& operator=(const AidAlpStatusImpl&) = default;
    AidAlpStatusImpl& operator=(AidAlpStatusImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlpStatus::AidAlpStatus() : m_pImpl(new AidAlpStatusImpl) {}
AidAlpStatus::~AidAlpStatus() = default;

AidAlpStatus& AidAlpStatus::operator=(const AidAlpStatus& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlpStatus& AidAlpStatus::operator=(AidAlpStatus&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlpStatus::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlpStatus::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlpStatus::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlpStatus::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlpStatus::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlpStatus*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlpStatus::MsgIdParamType AidAlpStatus::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlpStatus::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlpStatus::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlpStatus::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlpStatus::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlpStatus::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


