#include "MgaAno.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaAno.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/GnssId.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaAnoFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaAnoFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaAnoFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_gnssId()
{
    using Field = ublox::message::MgaAnoFields<>::GnssId;
    auto props = cc_plugin::field::createProps_gnssId(Field::name());
    return props;
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::MgaAnoFields<>::Year;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::MgaAnoFields<>::Month;
    auto props = cc_plugin::field::createProps_month(Field::name());
    return props;
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::MgaAnoFields<>::Day;
    auto props = cc_plugin::field::createProps_day(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaAnoFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_data()
{
    using Field = ublox::message::MgaAnoFields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaAnoFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_svid());
    props.append(createProps_gnssId());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_reserved1());
    props.append(createProps_data());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaAnoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaAno<ublox::cc_plugin::Message>,
        MgaAnoImpl
    >
{
public:
    MgaAnoImpl() = default;
    MgaAnoImpl(const MgaAnoImpl&) = delete;
    MgaAnoImpl(MgaAnoImpl&&) = delete;
    virtual ~MgaAnoImpl() = default;
    MgaAnoImpl& operator=(const MgaAnoImpl&) = default;
    MgaAnoImpl& operator=(MgaAnoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaAno::MgaAno() : m_pImpl(new MgaAnoImpl) {}
MgaAno::~MgaAno() = default;

MgaAno& MgaAno::operator=(const MgaAno& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaAno& MgaAno::operator=(MgaAno&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaAno::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaAno::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaAno::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaAno::resetImpl()
{
    m_pImpl->reset();
}

bool MgaAno::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaAno*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaAno::MsgIdParamType MgaAno::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaAno::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaAno::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaAno::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaAno::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaAno::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


