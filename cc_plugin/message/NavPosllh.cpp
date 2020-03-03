// Generated by commsdsl2comms v3.3.3

#include "NavPosllh.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavPosllh.h"
#include "cc_plugin/field/HAcc.h"
#include "cc_plugin/field/HMSL.h"
#include "cc_plugin/field/Height.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Lat.h"
#include "cc_plugin/field/Lon.h"
#include "cc_plugin/field/VAcc.h"

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
    using Field = ublox::message::NavPosllhFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_lon()
{
    using Field = ublox::message::NavPosllhFields<>::Lon;
    auto props = cc_plugin::field::createProps_lon(Field::name());
    return props;
    
}

static QVariantMap createProps_lat()
{
    using Field = ublox::message::NavPosllhFields<>::Lat;
    auto props = cc_plugin::field::createProps_lat(Field::name());
    return props;
    
}

static QVariantMap createProps_height()
{
    using Field = ublox::message::NavPosllhFields<>::Height;
    auto props = cc_plugin::field::createProps_height(Field::name());
    return props;
    
}

static QVariantMap createProps_hMSL()
{
    using Field = ublox::message::NavPosllhFields<>::HMSL;
    auto props = cc_plugin::field::createProps_hMSL(Field::name());
    return props;
    
}

static QVariantMap createProps_hAcc()
{
    using Field = ublox::message::NavPosllhFields<>::HAcc;
    auto props = cc_plugin::field::createProps_hAcc(Field::name());
    return props;
    
}

static QVariantMap createProps_vAcc()
{
    using Field = ublox::message::NavPosllhFields<>::VAcc;
    auto props = cc_plugin::field::createProps_vAcc(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_lon());
    props.append(createProps_lat());
    props.append(createProps_height());
    props.append(createProps_hMSL());
    props.append(createProps_hAcc());
    props.append(createProps_vAcc());
    return props;
}

} // namespace

class NavPosllhImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavPosllh<ublox::cc_plugin::Message>,
        NavPosllhImpl
    >
{
public:
    NavPosllhImpl() = default;
    NavPosllhImpl(const NavPosllhImpl&) = delete;
    NavPosllhImpl(NavPosllhImpl&&) = delete;
    virtual ~NavPosllhImpl() = default;
    NavPosllhImpl& operator=(const NavPosllhImpl&) = default;
    NavPosllhImpl& operator=(NavPosllhImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPosllh::NavPosllh() : m_pImpl(new NavPosllhImpl) {}
NavPosllh::~NavPosllh() = default;

NavPosllh& NavPosllh::operator=(const NavPosllh& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPosllh& NavPosllh::operator=(NavPosllh&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavPosllh::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPosllh::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPosllh::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPosllh::resetImpl()
{
    m_pImpl->reset();
}

bool NavPosllh::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPosllh*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPosllh::MsgIdParamType NavPosllh::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPosllh::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPosllh::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPosllh::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPosllh::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPosllh::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


