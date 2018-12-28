#include "MgaBdsHealth.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaBdsHealth.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaBdsHealthFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaBdsHealthFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaBdsHealthFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

struct HealthCodeMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::MgaBdsHealthFields<>::HealthCodeMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_healthCode()
{
    using Field = ublox::message::MgaBdsHealthFields<>::HealthCode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(HealthCodeMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaBdsHealthFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_healthCode());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaBdsHealthImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaBdsHealth<ublox::cc_plugin::Message>,
        MgaBdsHealthImpl
    >
{
public:
    MgaBdsHealthImpl() = default;
    MgaBdsHealthImpl(const MgaBdsHealthImpl&) = delete;
    MgaBdsHealthImpl(MgaBdsHealthImpl&&) = delete;
    virtual ~MgaBdsHealthImpl() = default;
    MgaBdsHealthImpl& operator=(const MgaBdsHealthImpl&) = default;
    MgaBdsHealthImpl& operator=(MgaBdsHealthImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaBdsHealth::MgaBdsHealth() : m_pImpl(new MgaBdsHealthImpl) {}
MgaBdsHealth::~MgaBdsHealth() = default;

MgaBdsHealth& MgaBdsHealth::operator=(const MgaBdsHealth& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsHealth& MgaBdsHealth::operator=(MgaBdsHealth&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaBdsHealth::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaBdsHealth::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaBdsHealth::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaBdsHealth::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsHealth::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsHealth*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaBdsHealth::MsgIdParamType MgaBdsHealth::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaBdsHealth::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaBdsHealth::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaBdsHealth::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaBdsHealth::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaBdsHealth::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

