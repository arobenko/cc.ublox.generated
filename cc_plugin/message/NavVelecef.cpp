#include "NavVelecef.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavVelecef.h"
#include "cc_plugin/field/EcefVX.h"
#include "cc_plugin/field/EcefVY.h"
#include "cc_plugin/field/EcefVZ.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/SAcc.h"

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
    using Field = ublox::message::NavVelecefFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_ecefVX()
{
    using Field = ublox::message::NavVelecefFields<>::EcefVX;
    return cc_plugin::field::createProps_ecefVX(Field::name());
    
}

static QVariantMap createProps_ecefVY()
{
    using Field = ublox::message::NavVelecefFields<>::EcefVY;
    return cc_plugin::field::createProps_ecefVY(Field::name());
    
}

static QVariantMap createProps_ecefVZ()
{
    using Field = ublox::message::NavVelecefFields<>::EcefVZ;
    return cc_plugin::field::createProps_ecefVZ(Field::name());
    
}

static QVariantMap createProps_sAcc()
{
    using Field = ublox::message::NavVelecefFields<>::SAcc;
    return cc_plugin::field::createProps_sAcc(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_ecefVX());
    props.append(createProps_ecefVY());
    props.append(createProps_ecefVZ());
    props.append(createProps_sAcc());
    return props;
}

} // namespace

class NavVelecefImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavVelecef<ublox::cc_plugin::Message>,
        NavVelecefImpl
    >
{
public:
    NavVelecefImpl() = default;
    NavVelecefImpl(const NavVelecefImpl&) = delete;
    NavVelecefImpl(NavVelecefImpl&&) = delete;
    virtual ~NavVelecefImpl() = default;
    NavVelecefImpl& operator=(const NavVelecefImpl&) = default;
    NavVelecefImpl& operator=(NavVelecefImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavVelecef::NavVelecef() : m_pImpl(new NavVelecefImpl) {}
NavVelecef::~NavVelecef() = default;

NavVelecef& NavVelecef::operator=(const NavVelecef& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelecef& NavVelecef::operator=(NavVelecef&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavVelecef::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavVelecef::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavVelecef::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavVelecef::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelecef::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavVelecef*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavVelecef::MsgIdParamType NavVelecef::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavVelecef::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavVelecef::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavVelecef::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavVelecef::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavVelecef::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

