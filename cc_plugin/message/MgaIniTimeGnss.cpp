#include "MgaIniTimeGnss.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaIniTimeGnss.h"
#include "cc_plugin/field/GnssId.h"
#include "cc_plugin/field/Itow.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct RefMembers
{
    static QVariantMap createProps_source()
    {
        using Field = ublox::message::MgaIniTimeGnssFields<>::RefMembers::Source;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("None", 0)
                .add("EXTINT0", 1)
                .add("EXTINT1", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::MgaIniTimeGnssFields<>::RefMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "fall")
                .add(1U, "last")
                .asMap();
        
    }
    
};

static QVariantMap createProps_ref()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Ref;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(RefMembers::createProps_source())
            .add(RefMembers::createProps_bits())
            .asMap();
    
}

static QVariantMap createProps_gnssId()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::GnssId;
    auto props = cc_plugin::field::createProps_gnssId(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_week()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Week;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tow()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Tow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_ns()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Ns;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAccS()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::TAccS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_tAccNs()
{
    using Field = ublox::message::MgaIniTimeGnssFields<>::TAccNs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_ref());
    props.append(createProps_gnssId());
    props.append(createProps_reserved1());
    props.append(createProps_week());
    props.append(createProps_tow());
    props.append(createProps_ns());
    props.append(createProps_tAccS());
    props.append(createProps_reserved2());
    props.append(createProps_tAccNs());
    return props;
}

} // namespace

class MgaIniTimeGnssImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaIniTimeGnss<ublox::cc_plugin::Message>,
        MgaIniTimeGnssImpl
    >
{
public:
    MgaIniTimeGnssImpl() = default;
    MgaIniTimeGnssImpl(const MgaIniTimeGnssImpl&) = delete;
    MgaIniTimeGnssImpl(MgaIniTimeGnssImpl&&) = delete;
    virtual ~MgaIniTimeGnssImpl() = default;
    MgaIniTimeGnssImpl& operator=(const MgaIniTimeGnssImpl&) = default;
    MgaIniTimeGnssImpl& operator=(MgaIniTimeGnssImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniTimeGnss::MgaIniTimeGnss() : m_pImpl(new MgaIniTimeGnssImpl) {}
MgaIniTimeGnss::~MgaIniTimeGnss() = default;

MgaIniTimeGnss& MgaIniTimeGnss::operator=(const MgaIniTimeGnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniTimeGnss& MgaIniTimeGnss::operator=(MgaIniTimeGnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniTimeGnss::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniTimeGnss::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniTimeGnss::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniTimeGnss::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniTimeGnss::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniTimeGnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniTimeGnss::MsgIdParamType MgaIniTimeGnss::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniTimeGnss::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniTimeGnss::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniTimeGnss::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniTimeGnss::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniTimeGnss::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


