#include "AidHui.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidHui.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_health()
{
    using Field = ublox::message::AidHuiFields<>::Health;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcA0()
{
    using Field = ublox::message::AidHuiFields<>::UtcA0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcA1()
{
    using Field = ublox::message::AidHuiFields<>::UtcA1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcTOW()
{
    using Field = ublox::message::AidHuiFields<>::UtcTOW;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcWNT()
{
    using Field = ublox::message::AidHuiFields<>::UtcWNT;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcLS()
{
    using Field = ublox::message::AidHuiFields<>::UtcLS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcWNF()
{
    using Field = ublox::message::AidHuiFields<>::UtcWNF;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcDN()
{
    using Field = ublox::message::AidHuiFields<>::UtcDN;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcLSF()
{
    using Field = ublox::message::AidHuiFields<>::UtcLSF;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcSpare()
{
    using Field = ublox::message::AidHuiFields<>::UtcSpare;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobA0()
{
    using Field = ublox::message::AidHuiFields<>::KlobA0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobA1()
{
    using Field = ublox::message::AidHuiFields<>::KlobA1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobA2()
{
    using Field = ublox::message::AidHuiFields<>::KlobA2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobA3()
{
    using Field = ublox::message::AidHuiFields<>::KlobA3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobB0()
{
    using Field = ublox::message::AidHuiFields<>::KlobB0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobB1()
{
    using Field = ublox::message::AidHuiFields<>::KlobB1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobB2()
{
    using Field = ublox::message::AidHuiFields<>::KlobB2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_klobB3()
{
    using Field = ublox::message::AidHuiFields<>::KlobB3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::AidHuiFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "healthValid")
            .add(1U, "utcValid")
            .add(2U, "klobValid")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_health());
    props.append(createProps_utcA0());
    props.append(createProps_utcA1());
    props.append(createProps_utcTOW());
    props.append(createProps_utcWNT());
    props.append(createProps_utcLS());
    props.append(createProps_utcWNF());
    props.append(createProps_utcDN());
    props.append(createProps_utcLSF());
    props.append(createProps_utcSpare());
    props.append(createProps_klobA0());
    props.append(createProps_klobA1());
    props.append(createProps_klobA2());
    props.append(createProps_klobA3());
    props.append(createProps_klobB0());
    props.append(createProps_klobB1());
    props.append(createProps_klobB2());
    props.append(createProps_klobB3());
    props.append(createProps_flags());
    return props;
}

} // namespace

class AidHuiImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidHui<ublox::cc_plugin::Message>,
        AidHuiImpl
    >
{
public:
    AidHuiImpl() = default;
    AidHuiImpl(const AidHuiImpl&) = delete;
    AidHuiImpl(AidHuiImpl&&) = delete;
    virtual ~AidHuiImpl() = default;
    AidHuiImpl& operator=(const AidHuiImpl&) = default;
    AidHuiImpl& operator=(AidHuiImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidHui::AidHui() : m_pImpl(new AidHuiImpl) {}
AidHui::~AidHui() = default;

AidHui& AidHui::operator=(const AidHui& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidHui& AidHui::operator=(AidHui&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidHui::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidHui::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidHui::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidHui::resetImpl()
{
    m_pImpl->reset();
}

bool AidHui::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidHui*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidHui::MsgIdParamType AidHui::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidHui::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidHui::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidHui::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidHui::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidHui::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

