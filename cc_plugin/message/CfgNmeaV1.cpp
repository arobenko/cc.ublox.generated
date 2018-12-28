#include "CfgNmeaV1.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNmeaV1.h"
#include "cc_plugin/field/CfgMainTalkerId.h"
#include "cc_plugin/field/CfgNmeaFilter.h"
#include "cc_plugin/field/CfgNmeaFlags.h"
#include "cc_plugin/field/CfgNmeaGnssToFilter.h"
#include "cc_plugin/field/CfgNmeaGsvTalkerId.h"
#include "cc_plugin/field/CfgNmeaNumSV.h"
#include "cc_plugin/field/CfgNmeaSvNumbering.h"
#include "cc_plugin/field/CfgNmeaVersion.h"
#include "cc_plugin/field/Res6.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_filter()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::Filter;
    return cc_plugin::field::createProps_cfgNmeaFilter(Field::name());
    
}

static QVariantMap createProps_nmeaVersion()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::NmeaVersion;
    return cc_plugin::field::createProps_cfgNmeaVersion(Field::name());
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::NumSV;
    return cc_plugin::field::createProps_cfgNmeaNumSV(Field::name());
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::Flags;
    return cc_plugin::field::createProps_cfgNmeaFlags(Field::name());
    
}

static QVariantMap createProps_gnssToFilter()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::GnssToFilter;
    return cc_plugin::field::createProps_cfgNmeaGnssToFilter(Field::name());
    
}

static QVariantMap createProps_svNumbering()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::SvNumbering;
    return cc_plugin::field::createProps_cfgNmeaSvNumbering(Field::name());
    
}

static QVariantMap createProps_mainTalkerId()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::MainTalkerId;
    return cc_plugin::field::createProps_cfgMainTalkerId(Field::name());
    
}

static QVariantMap createProps_gsvTalkerId()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::GsvTalkerId;
    return cc_plugin::field::createProps_cfgNmeaGsvTalkerId(Field::name());
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_bdsTalkerId()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::BdsTalkerId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgNmeaV1Fields<>::Reserved1;
    return cc_plugin::field::createProps_res6(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_filter());
    props.append(createProps_nmeaVersion());
    props.append(createProps_numSV());
    props.append(createProps_flags());
    props.append(createProps_gnssToFilter());
    props.append(createProps_svNumbering());
    props.append(createProps_mainTalkerId());
    props.append(createProps_gsvTalkerId());
    props.append(createProps_version());
    props.append(createProps_bdsTalkerId());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class CfgNmeaV1Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNmeaV1<ublox::cc_plugin::Message>,
        CfgNmeaV1Impl
    >
{
public:
    CfgNmeaV1Impl() = default;
    CfgNmeaV1Impl(const CfgNmeaV1Impl&) = delete;
    CfgNmeaV1Impl(CfgNmeaV1Impl&&) = delete;
    virtual ~CfgNmeaV1Impl() = default;
    CfgNmeaV1Impl& operator=(const CfgNmeaV1Impl&) = default;
    CfgNmeaV1Impl& operator=(CfgNmeaV1Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmeaV1::CfgNmeaV1() : m_pImpl(new CfgNmeaV1Impl) {}
CfgNmeaV1::~CfgNmeaV1() = default;

CfgNmeaV1& CfgNmeaV1::operator=(const CfgNmeaV1& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaV1& CfgNmeaV1::operator=(CfgNmeaV1&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmeaV1::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmeaV1::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmeaV1::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmeaV1::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaV1::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaV1*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmeaV1::MsgIdParamType CfgNmeaV1::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmeaV1::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmeaV1::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmeaV1::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmeaV1::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmeaV1::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

