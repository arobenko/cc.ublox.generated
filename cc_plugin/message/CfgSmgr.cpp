// Generated by commsdsl2comms v3.5.2

#include "CfgSmgr.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgSmgr.h"
#include "cc_plugin/field/Res2.h"

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
    using Field = ublox::message::CfgSmgrFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_minGNSSFix()
{
    using Field = ublox::message::CfgSmgrFields<>::MinGNSSFix;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_maxFreqChangeRate()
{
    using Field = ublox::message::CfgSmgrFields<>::MaxFreqChangeRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_maxPhaseCorrRate()
{
    using Field = ublox::message::CfgSmgrFields<>::MaxPhaseCorrRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgSmgrFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_freqTolerance()
{
    using Field = ublox::message::CfgSmgrFields<>::FreqTolerance;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_timeTolerance()
{
    using Field = ublox::message::CfgSmgrFields<>::TimeTolerance;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_messageCfg()
{
    using Field = ublox::message::CfgSmgrFields<>::MessageCfg;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "measInternal")
            .add(1U, "measGNSS")
            .add(2U, "measEXTINT0")
            .add(3U, "measEXTINT1")
            .asMap();
    
}

static QVariantMap createProps_maxSlewRate()
{
    using Field = ublox::message::CfgSmgrFields<>::MaxSlewRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow()
    {
        using Field = ublox::message::CfgSmgrFields<>::FlagsMembers::BitsLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "disableInternal")
                .add(1U, "disableExternal")
                .add(2U, "preferenceMode")
                .add(3U, "enableGNSS")
                .add(4U, "enableEXTINT0")
                .add(5U, "enableEXTINT1")
                .add(6U, "enableHostMeasInt")
                .add(7U, "enableHostMeasExt")
                .add(10U, "useAnyFix")
                .add(11U, "disableMaxSlewRate")
                .add(12U, "issueFreqWarning")
                .add(13U, "issueTimeWarning")
                .asMap();
        
    }
    
    static QVariantMap createProps_tPCoherent()
    {
        using Field = ublox::message::CfgSmgrFields<>::FlagsMembers::TPCoherent;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Coherent", 0)
                .add("NonCoherent", 1)
                .add("PostInitCoherent", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_bitsHigh()
    {
        using Field = ublox::message::CfgSmgrFields<>::FlagsMembers::BitsHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "disableOffset")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgSmgrFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_bitsLow())
            .add(FlagsMembers::createProps_tPCoherent())
            .add(FlagsMembers::createProps_bitsHigh())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_minGNSSFix());
    props.append(createProps_maxFreqChangeRate());
    props.append(createProps_maxPhaseCorrRate());
    props.append(createProps_reserved1());
    props.append(createProps_freqTolerance());
    props.append(createProps_timeTolerance());
    props.append(createProps_messageCfg());
    props.append(createProps_maxSlewRate());
    props.append(createProps_flags());
    return props;
}

} // namespace

class CfgSmgrImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgSmgr<ublox::cc_plugin::Message>,
        CfgSmgrImpl
    >
{
public:
    CfgSmgrImpl() = default;
    CfgSmgrImpl(const CfgSmgrImpl&) = delete;
    CfgSmgrImpl(CfgSmgrImpl&&) = delete;
    virtual ~CfgSmgrImpl() = default;
    CfgSmgrImpl& operator=(const CfgSmgrImpl&) = default;
    CfgSmgrImpl& operator=(CfgSmgrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgSmgr::CfgSmgr() : m_pImpl(new CfgSmgrImpl) {}
CfgSmgr::~CfgSmgr() = default;

CfgSmgr& CfgSmgr::operator=(const CfgSmgr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgSmgr& CfgSmgr::operator=(CfgSmgr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgSmgr::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgSmgr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgSmgr::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgSmgr::resetImpl()
{
    m_pImpl->reset();
}

bool CfgSmgr::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgSmgr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgSmgr::MsgIdParamType CfgSmgr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgSmgr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgSmgr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgSmgr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgSmgr::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgSmgr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


