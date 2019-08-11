#include "AidAopU8.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAopU8.h"
#include "cc_plugin/field/GnssId.h"
#include "cc_plugin/field/Res2.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_gnssId()
{
    using Field = ublox::message::AidAopU8Fields<>::GnssId;
    auto props = cc_plugin::field::createProps_gnssId(Field::name());
    return props;
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::AidAopU8Fields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::AidAopU8Fields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_data()
{
    using Field = ublox::message::AidAopU8Fields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_gnssId());
    props.append(createProps_svid());
    props.append(createProps_reserved1());
    props.append(createProps_data());
    return props;
}

} // namespace

class AidAopU8Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAopU8<ublox::cc_plugin::Message>,
        AidAopU8Impl
    >
{
public:
    AidAopU8Impl() = default;
    AidAopU8Impl(const AidAopU8Impl&) = delete;
    AidAopU8Impl(AidAopU8Impl&&) = delete;
    virtual ~AidAopU8Impl() = default;
    AidAopU8Impl& operator=(const AidAopU8Impl&) = default;
    AidAopU8Impl& operator=(AidAopU8Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAopU8::AidAopU8() : m_pImpl(new AidAopU8Impl) {}
AidAopU8::~AidAopU8() = default;

AidAopU8& AidAopU8::operator=(const AidAopU8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAopU8& AidAopU8::operator=(AidAopU8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAopU8::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAopU8::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAopU8::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAopU8::resetImpl()
{
    m_pImpl->reset();
}

bool AidAopU8::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAopU8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAopU8::MsgIdParamType AidAopU8::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAopU8::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAopU8::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAopU8::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAopU8::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAopU8::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


