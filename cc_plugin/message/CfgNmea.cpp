#include "CfgNmea.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNmea.h"
#include "cc_plugin/field/CfgNmeaFilter.h"
#include "cc_plugin/field/CfgNmeaFlags.h"
#include "cc_plugin/field/CfgNmeaNumSV.h"
#include "cc_plugin/field/CfgNmeaVersion.h"

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
    using Field = ublox::message::CfgNmeaFields<>::Filter;
    auto props = cc_plugin::field::createProps_cfgNmeaFilter(Field::name());
    return props;
    
}

static QVariantMap createProps_nmeaVersion()
{
    using Field = ublox::message::CfgNmeaFields<>::NmeaVersion;
    auto props = cc_plugin::field::createProps_cfgNmeaVersion(Field::name());
    return props;
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::CfgNmeaFields<>::NumSV;
    auto props = cc_plugin::field::createProps_cfgNmeaNumSV(Field::name());
    return props;
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgNmeaFields<>::Flags;
    auto props = cc_plugin::field::createProps_cfgNmeaFlags(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_filter());
    props.append(createProps_nmeaVersion());
    props.append(createProps_numSV());
    props.append(createProps_flags());
    return props;
}

} // namespace

class CfgNmeaImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNmea<ublox::cc_plugin::Message>,
        CfgNmeaImpl
    >
{
public:
    CfgNmeaImpl() = default;
    CfgNmeaImpl(const CfgNmeaImpl&) = delete;
    CfgNmeaImpl(CfgNmeaImpl&&) = delete;
    virtual ~CfgNmeaImpl() = default;
    CfgNmeaImpl& operator=(const CfgNmeaImpl&) = default;
    CfgNmeaImpl& operator=(CfgNmeaImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmea::CfgNmea() : m_pImpl(new CfgNmeaImpl) {}
CfgNmea::~CfgNmea() = default;

CfgNmea& CfgNmea::operator=(const CfgNmea& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmea& CfgNmea::operator=(CfgNmea&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmea::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmea::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmea::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmea::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmea::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmea*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmea::MsgIdParamType CfgNmea::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmea::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmea::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmea::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmea::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmea::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


