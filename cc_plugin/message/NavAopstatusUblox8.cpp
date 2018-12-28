#include "NavAopstatusUblox8.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavAopstatusUblox8.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res2.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavAopstatusUblox8Fields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_aopCfg()
{
    using Field = ublox::message::NavAopstatusUblox8Fields<>::AopCfg;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "useAOP")
            .asMap();
    
}

static QVariantMap createProps_status()
{
    using Field = ublox::message::NavAopstatusUblox8Fields<>::Status;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavAopstatusUblox8Fields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavAopstatusUblox8Fields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::NavAopstatusUblox8Fields<>::Reserved3;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_aopCfg());
    props.append(createProps_status());
    props.append(createProps_reserved1());
    props.append(createProps_reserved2());
    props.append(createProps_reserved3());
    return props;
}

} // namespace

class NavAopstatusUblox8Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavAopstatusUblox8<ublox::cc_plugin::Message>,
        NavAopstatusUblox8Impl
    >
{
public:
    NavAopstatusUblox8Impl() = default;
    NavAopstatusUblox8Impl(const NavAopstatusUblox8Impl&) = delete;
    NavAopstatusUblox8Impl(NavAopstatusUblox8Impl&&) = delete;
    virtual ~NavAopstatusUblox8Impl() = default;
    NavAopstatusUblox8Impl& operator=(const NavAopstatusUblox8Impl&) = default;
    NavAopstatusUblox8Impl& operator=(NavAopstatusUblox8Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAopstatusUblox8::NavAopstatusUblox8() : m_pImpl(new NavAopstatusUblox8Impl) {}
NavAopstatusUblox8::~NavAopstatusUblox8() = default;

NavAopstatusUblox8& NavAopstatusUblox8::operator=(const NavAopstatusUblox8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAopstatusUblox8& NavAopstatusUblox8::operator=(NavAopstatusUblox8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAopstatusUblox8::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAopstatusUblox8::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAopstatusUblox8::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAopstatusUblox8::resetImpl()
{
    m_pImpl->reset();
}

bool NavAopstatusUblox8::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAopstatusUblox8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAopstatusUblox8::MsgIdParamType NavAopstatusUblox8::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAopstatusUblox8::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAopstatusUblox8::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAopstatusUblox8::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAopstatusUblox8::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAopstatusUblox8::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

