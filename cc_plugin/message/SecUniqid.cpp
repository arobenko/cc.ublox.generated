#include "SecUniqid.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/SecUniqid.h"
#include "cc_plugin/field/Res3.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_version()
{
    using Field = ublox::message::SecUniqidFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::SecUniqidFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

static QVariantMap createProps_uniqueId()
{
    using Field = ublox::message::SecUniqidFields<>::UniqueId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_uniqueId());
    return props;
}

} // namespace

class SecUniqidImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::SecUniqid<ublox::cc_plugin::Message>,
        SecUniqidImpl
    >
{
public:
    SecUniqidImpl() = default;
    SecUniqidImpl(const SecUniqidImpl&) = delete;
    SecUniqidImpl(SecUniqidImpl&&) = delete;
    virtual ~SecUniqidImpl() = default;
    SecUniqidImpl& operator=(const SecUniqidImpl&) = default;
    SecUniqidImpl& operator=(SecUniqidImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

SecUniqid::SecUniqid() : m_pImpl(new SecUniqidImpl) {}
SecUniqid::~SecUniqid() = default;

SecUniqid& SecUniqid::operator=(const SecUniqid& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecUniqid& SecUniqid::operator=(SecUniqid&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SecUniqid::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& SecUniqid::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void SecUniqid::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void SecUniqid::resetImpl()
{
    m_pImpl->reset();
}

bool SecUniqid::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const SecUniqid*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

SecUniqid::MsgIdParamType SecUniqid::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus SecUniqid::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus SecUniqid::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool SecUniqid::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t SecUniqid::lengthImpl() const
{
    return m_pImpl->length();
}

bool SecUniqid::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


