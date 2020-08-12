// Generated by commsdsl2comms v3.5.0

#include "AidAlp.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAlp.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res4.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_predTow()
{
    using Field = ublox::message::AidAlpFields<>::PredTow;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_predDur()
{
    using Field = ublox::message::AidAlpFields<>::PredDur;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_age()
{
    using Field = ublox::message::AidAlpFields<>::Age;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_predWno()
{
    using Field = ublox::message::AidAlpFields<>::PredWno;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_almWno()
{
    using Field = ublox::message::AidAlpFields<>::AlmWno;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::AidAlpFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

static QVariantMap createProps_svs()
{
    using Field = ublox::message::AidAlpFields<>::Svs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::AidAlpFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::AidAlpFields<>::Reserved3;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_predTow());
    props.append(createProps_predDur());
    props.append(createProps_age());
    props.append(createProps_predWno());
    props.append(createProps_almWno());
    props.append(createProps_reserved1());
    props.append(createProps_svs());
    props.append(createProps_reserved2());
    props.append(createProps_reserved3());
    return props;
}

} // namespace

class AidAlpImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAlp<ublox::cc_plugin::Message>,
        AidAlpImpl
    >
{
public:
    AidAlpImpl() = default;
    AidAlpImpl(const AidAlpImpl&) = delete;
    AidAlpImpl(AidAlpImpl&&) = delete;
    virtual ~AidAlpImpl() = default;
    AidAlpImpl& operator=(const AidAlpImpl&) = default;
    AidAlpImpl& operator=(AidAlpImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlp::AidAlp() : m_pImpl(new AidAlpImpl) {}
AidAlp::~AidAlp() = default;

AidAlp& AidAlp::operator=(const AidAlp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlp& AidAlp::operator=(AidAlp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlp::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlp::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlp::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlp::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlp::MsgIdParamType AidAlp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlp::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


