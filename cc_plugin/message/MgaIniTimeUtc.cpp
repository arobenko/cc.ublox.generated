// Generated by commsdsl2comms v3.5.0

#include "MgaIniTimeUtc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaIniTimeUtc.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Sec.h"
#include "cc_plugin/field/Year.h"

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
    using Field = ublox::message::MgaIniTimeUtcFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct RefMembers
{
    static QVariantMap createProps_source()
    {
        using Field = ublox::message::MgaIniTimeUtcFields<>::RefMembers::Source;
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
        using Field = ublox::message::MgaIniTimeUtcFields<>::RefMembers::Bits;
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
    using Field = ublox::message::MgaIniTimeUtcFields<>::Ref;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(RefMembers::createProps_source())
            .add(RefMembers::createProps_bits())
            .asMap();
    
}

static QVariantMap createProps_leapSecs()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::LeapSecs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Year;
    auto props = cc_plugin::field::createProps_year(Field::name());
    return props;
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Month;
    auto props = cc_plugin::field::createProps_month(Field::name());
    return props;
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Day;
    auto props = cc_plugin::field::createProps_day(Field::name());
    return props;
    
}

static QVariantMap createProps_hour()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Hour;
    auto props = cc_plugin::field::createProps_hour(Field::name());
    return props;
    
}

static QVariantMap createProps_minute()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Minute;
    auto props = cc_plugin::field::createProps_min(Field::name());
    return props;
    
}

static QVariantMap createProps_second()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Second;
    auto props = cc_plugin::field::createProps_sec(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_ns()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Ns;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAccS()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::TAccS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_tAccNs()
{
    using Field = ublox::message::MgaIniTimeUtcFields<>::TAccNs;
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
    props.append(createProps_leapSecs());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_hour());
    props.append(createProps_minute());
    props.append(createProps_second());
    props.append(createProps_reserved1());
    props.append(createProps_ns());
    props.append(createProps_tAccS());
    props.append(createProps_reserved2());
    props.append(createProps_tAccNs());
    return props;
}

} // namespace

class MgaIniTimeUtcImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaIniTimeUtc<ublox::cc_plugin::Message>,
        MgaIniTimeUtcImpl
    >
{
public:
    MgaIniTimeUtcImpl() = default;
    MgaIniTimeUtcImpl(const MgaIniTimeUtcImpl&) = delete;
    MgaIniTimeUtcImpl(MgaIniTimeUtcImpl&&) = delete;
    virtual ~MgaIniTimeUtcImpl() = default;
    MgaIniTimeUtcImpl& operator=(const MgaIniTimeUtcImpl&) = default;
    MgaIniTimeUtcImpl& operator=(MgaIniTimeUtcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniTimeUtc::MgaIniTimeUtc() : m_pImpl(new MgaIniTimeUtcImpl) {}
MgaIniTimeUtc::~MgaIniTimeUtc() = default;

MgaIniTimeUtc& MgaIniTimeUtc::operator=(const MgaIniTimeUtc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniTimeUtc& MgaIniTimeUtc::operator=(MgaIniTimeUtc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniTimeUtc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniTimeUtc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniTimeUtc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniTimeUtc::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniTimeUtc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniTimeUtc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniTimeUtc::MsgIdParamType MgaIniTimeUtc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniTimeUtc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniTimeUtc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniTimeUtc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniTimeUtc::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniTimeUtc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


