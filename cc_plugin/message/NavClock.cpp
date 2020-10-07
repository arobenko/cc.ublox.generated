// Generated by commsdsl2comms v3.5.2

#include "NavClock.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavClock.h"
#include "cc_plugin/field/Itow.h"

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
    using Field = ublox::message::NavClockFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_clkB()
{
    using Field = ublox::message::NavClockFields<>::ClkB;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_clkD()
{
    using Field = ublox::message::NavClockFields<>::ClkD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::NavClockFields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fAcc()
{
    using Field = ublox::message::NavClockFields<>::FAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_clkB());
    props.append(createProps_clkD());
    props.append(createProps_tAcc());
    props.append(createProps_fAcc());
    return props;
}

} // namespace

class NavClockImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavClock<ublox::cc_plugin::Message>,
        NavClockImpl
    >
{
public:
    NavClockImpl() = default;
    NavClockImpl(const NavClockImpl&) = delete;
    NavClockImpl(NavClockImpl&&) = delete;
    virtual ~NavClockImpl() = default;
    NavClockImpl& operator=(const NavClockImpl&) = default;
    NavClockImpl& operator=(NavClockImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavClock::NavClock() : m_pImpl(new NavClockImpl) {}
NavClock::~NavClock() = default;

NavClock& NavClock::operator=(const NavClock& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavClock& NavClock::operator=(NavClock&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavClock::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavClock::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavClock::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavClock::resetImpl()
{
    m_pImpl->reset();
}

bool NavClock::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavClock*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavClock::MsgIdParamType NavClock::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavClock::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavClock::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavClock::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavClock::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavClock::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


