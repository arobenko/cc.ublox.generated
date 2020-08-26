// Generated by commsdsl2comms v3.5.1

#include "NavTimeutc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimeutc.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavTimeutcFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::NavTimeutcFields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_nano()
{
    using Field = ublox::message::NavTimeutcFields<>::Nano;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::NavTimeutcFields<>::Year;
    auto props = cc_plugin::field::createProps_year(Field::name());
    return props;
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::NavTimeutcFields<>::Month;
    auto props = cc_plugin::field::createProps_month(Field::name());
    return props;
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::NavTimeutcFields<>::Day;
    auto props = cc_plugin::field::createProps_day(Field::name());
    return props;
    
}

static QVariantMap createProps_hour()
{
    using Field = ublox::message::NavTimeutcFields<>::Hour;
    auto props = cc_plugin::field::createProps_hour(Field::name());
    return props;
    
}

static QVariantMap createProps_min()
{
    using Field = ublox::message::NavTimeutcFields<>::Min;
    auto props = cc_plugin::field::createProps_min(Field::name());
    return props;
    
}

static QVariantMap createProps_sec()
{
    using Field = ublox::message::NavTimeutcFields<>::Sec;
    auto props = cc_plugin::field::createProps_sec(Field::name());
    return props;
    
}

struct ValidMembers
{
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::NavTimeutcFields<>::ValidMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "validTOW")
                .add(1U, "validWKN")
                .add(2U, "validUTC")
                .asMap();
        
    }
    
    static QVariantMap createProps_utcStandard()
    {
        using Field = ublox::message::NavTimeutcFields<>::ValidMembers::UtcStandard;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Not Available", 0)
                .add("CRL", 1)
                .add("NIST", 2)
                .add("USNO", 3)
                .add("BIPM", 4)
                .add("EuLab", 5)
                .add("SU", 6)
                .add("NTSC", 7)
                .add("Unknown", 15)
                .asMap();
        
    }
    
};

static QVariantMap createProps_valid()
{
    using Field = ublox::message::NavTimeutcFields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ValidMembers::createProps_bits())
            .add(ValidMembers::createProps_utcStandard())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_tAcc());
    props.append(createProps_nano());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_hour());
    props.append(createProps_min());
    props.append(createProps_sec());
    props.append(createProps_valid());
    return props;
}

} // namespace

class NavTimeutcImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimeutc<ublox::cc_plugin::Message>,
        NavTimeutcImpl
    >
{
public:
    NavTimeutcImpl() = default;
    NavTimeutcImpl(const NavTimeutcImpl&) = delete;
    NavTimeutcImpl(NavTimeutcImpl&&) = delete;
    virtual ~NavTimeutcImpl() = default;
    NavTimeutcImpl& operator=(const NavTimeutcImpl&) = default;
    NavTimeutcImpl& operator=(NavTimeutcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimeutc::NavTimeutc() : m_pImpl(new NavTimeutcImpl) {}
NavTimeutc::~NavTimeutc() = default;

NavTimeutc& NavTimeutc::operator=(const NavTimeutc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimeutc& NavTimeutc::operator=(NavTimeutc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimeutc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimeutc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimeutc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimeutc::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimeutc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimeutc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimeutc::MsgIdParamType NavTimeutc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimeutc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimeutc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimeutc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimeutc::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimeutc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


