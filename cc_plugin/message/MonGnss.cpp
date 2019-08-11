#include "MonGnss.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonGnss.h"
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
    using Field = ublox::message::MonGnssFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_supported()
{
    using Field = ublox::message::MonGnssFields<>::Supported;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "GPSSup")
            .add(1U, "GlonassSup")
            .add(2U, "BeidouSup")
            .add(3U, "GalileoSup")
            .asMap();
    
}

static QVariantMap createProps_defaultGnss()
{
    using Field = ublox::message::MonGnssFields<>::DefaultGnss;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "GPSDef")
            .add(1U, "GlonassDef")
            .add(2U, "BeidouDef")
            .add(3U, "GalileoDef")
            .asMap();
    
}

static QVariantMap createProps_enabled()
{
    using Field = ublox::message::MonGnssFields<>::Enabled;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "GPSEna")
            .add(1U, "GlonassEna")
            .add(2U, "BeidouEna")
            .add(3U, "GalileoEna")
            .asMap();
    
}

static QVariantMap createProps_simultaneous()
{
    using Field = ublox::message::MonGnssFields<>::Simultaneous;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MonGnssFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_supported());
    props.append(createProps_defaultGnss());
    props.append(createProps_enabled());
    props.append(createProps_simultaneous());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class MonGnssImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonGnss<ublox::cc_plugin::Message>,
        MonGnssImpl
    >
{
public:
    MonGnssImpl() = default;
    MonGnssImpl(const MonGnssImpl&) = delete;
    MonGnssImpl(MonGnssImpl&&) = delete;
    virtual ~MonGnssImpl() = default;
    MonGnssImpl& operator=(const MonGnssImpl&) = default;
    MonGnssImpl& operator=(MonGnssImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonGnss::MonGnss() : m_pImpl(new MonGnssImpl) {}
MonGnss::~MonGnss() = default;

MonGnss& MonGnss::operator=(const MonGnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonGnss& MonGnss::operator=(MonGnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonGnss::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonGnss::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonGnss::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonGnss::resetImpl()
{
    m_pImpl->reset();
}

bool MonGnss::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonGnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonGnss::MsgIdParamType MonGnss::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonGnss::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonGnss::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonGnss::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonGnss::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonGnss::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


