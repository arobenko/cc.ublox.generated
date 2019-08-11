#include "NavAtt.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavAtt.h"
#include "cc_plugin/field/Itow.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavAttFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::NavAttFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavAttFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

static QVariantMap createProps_roll()
{
    using Field = ublox::message::NavAttFields<>::Roll;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

static QVariantMap createProps_pitch()
{
    using Field = ublox::message::NavAttFields<>::Pitch;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

static QVariantMap createProps_heading()
{
    using Field = ublox::message::NavAttFields<>::Heading;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

static QVariantMap createProps_accRoll()
{
    using Field = ublox::message::NavAttFields<>::AccRoll;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

static QVariantMap createProps_accPitch()
{
    using Field = ublox::message::NavAttFields<>::AccPitch;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

static QVariantMap createProps_accHeading()
{
    using Field = ublox::message::NavAttFields<>::AccHeading;
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
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_roll());
    props.append(createProps_pitch());
    props.append(createProps_heading());
    props.append(createProps_accRoll());
    props.append(createProps_accPitch());
    props.append(createProps_accHeading());
    return props;
}

} // namespace

class NavAttImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavAtt<ublox::cc_plugin::Message>,
        NavAttImpl
    >
{
public:
    NavAttImpl() = default;
    NavAttImpl(const NavAttImpl&) = delete;
    NavAttImpl(NavAttImpl&&) = delete;
    virtual ~NavAttImpl() = default;
    NavAttImpl& operator=(const NavAttImpl&) = default;
    NavAttImpl& operator=(NavAttImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAtt::NavAtt() : m_pImpl(new NavAttImpl) {}
NavAtt::~NavAtt() = default;

NavAtt& NavAtt::operator=(const NavAtt& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAtt& NavAtt::operator=(NavAtt&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAtt::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAtt::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAtt::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAtt::resetImpl()
{
    m_pImpl->reset();
}

bool NavAtt::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAtt*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAtt::MsgIdParamType NavAtt::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAtt::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAtt::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAtt::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAtt::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAtt::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


