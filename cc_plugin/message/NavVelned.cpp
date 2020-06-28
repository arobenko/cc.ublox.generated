// Generated by commsdsl2comms v3.4.2

#include "NavVelned.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavVelned.h"
#include "cc_plugin/field/Heading.h"
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
    using Field = ublox::message::NavVelnedFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_velN()
{
    using Field = ublox::message::NavVelnedFields<>::VelN;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_velE()
{
    using Field = ublox::message::NavVelnedFields<>::VelE;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_velD()
{
    using Field = ublox::message::NavVelnedFields<>::VelD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_speed()
{
    using Field = ublox::message::NavVelnedFields<>::Speed;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_gSpeed()
{
    using Field = ublox::message::NavVelnedFields<>::GSpeed;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_heading()
{
    using Field = ublox::message::NavVelnedFields<>::Heading;
    auto props = cc_plugin::field::createProps_heading(Field::name());
    return props;
    
}

static QVariantMap createProps_sAcc()
{
    using Field = ublox::message::NavVelnedFields<>::SAcc;
    auto props = cc_plugin::field::createProps_sAcc(Field::name());
    return props;
    
}

static QVariantMap createProps_cAcc()
{
    using Field = ublox::message::NavVelnedFields<>::CAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_velN());
    props.append(createProps_velE());
    props.append(createProps_velD());
    props.append(createProps_speed());
    props.append(createProps_gSpeed());
    props.append(createProps_heading());
    props.append(createProps_sAcc());
    props.append(createProps_cAcc());
    return props;
}

} // namespace

class NavVelnedImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavVelned<ublox::cc_plugin::Message>,
        NavVelnedImpl
    >
{
public:
    NavVelnedImpl() = default;
    NavVelnedImpl(const NavVelnedImpl&) = delete;
    NavVelnedImpl(NavVelnedImpl&&) = delete;
    virtual ~NavVelnedImpl() = default;
    NavVelnedImpl& operator=(const NavVelnedImpl&) = default;
    NavVelnedImpl& operator=(NavVelnedImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavVelned::NavVelned() : m_pImpl(new NavVelnedImpl) {}
NavVelned::~NavVelned() = default;

NavVelned& NavVelned::operator=(const NavVelned& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelned& NavVelned::operator=(NavVelned&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavVelned::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavVelned::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavVelned::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavVelned::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelned::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavVelned*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavVelned::MsgIdParamType NavVelned::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavVelned::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavVelned::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavVelned::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavVelned::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavVelned::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


