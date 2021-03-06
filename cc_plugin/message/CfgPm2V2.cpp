// Generated by commsdsl2comms v3.6.2

#include "CfgPm2V2.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPm2V2.h"
#include "cc_plugin/field/CfgPm2Flags.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_version()
{
    using Field = ublox::message::CfgPm2V2Fields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgPm2V2Fields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_maxStartupStateDur()
{
    using Field = ublox::message::CfgPm2V2Fields<>::MaxStartupStateDur;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgPm2V2Fields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgPm2V2Fields<>::Flags;
    auto props = cc_plugin::field::createProps_cfgPm2Flags(Field::name());
    return props;
    
}

static QVariantMap createProps_updatePeriod()
{
    using Field = ublox::message::CfgPm2V2Fields<>::UpdatePeriod;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_searchPeriod()
{
    using Field = ublox::message::CfgPm2V2Fields<>::SearchPeriod;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_gridOffset()
{
    using Field = ublox::message::CfgPm2V2Fields<>::GridOffset;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_onTime()
{
    using Field = ublox::message::CfgPm2V2Fields<>::OnTime;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_minAcqTime()
{
    using Field = ublox::message::CfgPm2V2Fields<>::MinAcqTime;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct Reserved3Members
{
    static QVariantMap createProps_reserved3()
    {
        using Field = ublox::message::CfgPm2V2Fields<>::Reserved3Members::Reserved3;
        auto props = cc_plugin::field::createProps_res4(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::CfgPm2V2Fields<>::Reserved3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(Reserved3Members::createProps_reserved3())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

static QVariantMap createProps_extintInactivityMs()
{
    using Field = ublox::message::CfgPm2V2Fields<>::ExtintInactivityMs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_maxStartupStateDur());
    props.append(createProps_reserved2());
    props.append(createProps_flags());
    props.append(createProps_updatePeriod());
    props.append(createProps_searchPeriod());
    props.append(createProps_gridOffset());
    props.append(createProps_onTime());
    props.append(createProps_minAcqTime());
    props.append(createProps_reserved3());
    props.append(createProps_extintInactivityMs());
    return props;
}

} // namespace

class CfgPm2V2Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPm2V2<ublox::cc_plugin::Message>,
        CfgPm2V2Impl
    >
{
public:
    CfgPm2V2Impl() = default;
    CfgPm2V2Impl(const CfgPm2V2Impl&) = delete;
    CfgPm2V2Impl(CfgPm2V2Impl&&) = delete;
    virtual ~CfgPm2V2Impl() = default;
    CfgPm2V2Impl& operator=(const CfgPm2V2Impl&) = default;
    CfgPm2V2Impl& operator=(CfgPm2V2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPm2V2::CfgPm2V2() : m_pImpl(new CfgPm2V2Impl) {}
CfgPm2V2::~CfgPm2V2() = default;

CfgPm2V2& CfgPm2V2::operator=(const CfgPm2V2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPm2V2& CfgPm2V2::operator=(CfgPm2V2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPm2V2::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPm2V2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPm2V2::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPm2V2::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPm2V2::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPm2V2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPm2V2::MsgIdParamType CfgPm2V2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPm2V2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPm2V2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPm2V2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPm2V2::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPm2V2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


