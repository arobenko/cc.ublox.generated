// Generated by commsdsl2comms v3.5.2

#include "NavDop.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavDop.h"
#include "cc_plugin/field/Dop.h"
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
    using Field = ublox::message::NavDopFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_gDOP()
{
    using Field = ublox::message::NavDopFields<>::GDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_pDOP()
{
    using Field = ublox::message::NavDopFields<>::PDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_tDOP()
{
    using Field = ublox::message::NavDopFields<>::TDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_vDOP()
{
    using Field = ublox::message::NavDopFields<>::VDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_hDOP()
{
    using Field = ublox::message::NavDopFields<>::HDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_nDOP()
{
    using Field = ublox::message::NavDopFields<>::NDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_eDOP()
{
    using Field = ublox::message::NavDopFields<>::EDOP;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_gDOP());
    props.append(createProps_pDOP());
    props.append(createProps_tDOP());
    props.append(createProps_vDOP());
    props.append(createProps_hDOP());
    props.append(createProps_nDOP());
    props.append(createProps_eDOP());
    return props;
}

} // namespace

class NavDopImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavDop<ublox::cc_plugin::Message>,
        NavDopImpl
    >
{
public:
    NavDopImpl() = default;
    NavDopImpl(const NavDopImpl&) = delete;
    NavDopImpl(NavDopImpl&&) = delete;
    virtual ~NavDopImpl() = default;
    NavDopImpl& operator=(const NavDopImpl&) = default;
    NavDopImpl& operator=(NavDopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavDop::NavDop() : m_pImpl(new NavDopImpl) {}
NavDop::~NavDop() = default;

NavDop& NavDop::operator=(const NavDop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavDop& NavDop::operator=(NavDop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavDop::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavDop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavDop::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavDop::resetImpl()
{
    m_pImpl->reset();
}

bool NavDop::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavDop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavDop::MsgIdParamType NavDop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavDop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavDop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavDop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavDop::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavDop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


