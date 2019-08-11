#include "CfgTmode2.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTmode2.h"
#include "cc_plugin/field/Res1.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_timeMode()
{
    using Field = ublox::message::CfgTmode2Fields<>::TimeMode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Disabled", 0)
            .add("Survey In", 1)
            .add("Fixed Mode", 2)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgTmode2Fields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgTmode2Fields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "lla")
            .add(1U, "altInv")
            .asMap();
    
}

struct EcefXMembers
{
    static QVariantMap createProps_ecefX()
    {
        using Field = ublox::message::CfgTmode2Fields<>::EcefXMembers::EcefX;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecefX()
{
    using Field = ublox::message::CfgTmode2Fields<>::EcefX;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(EcefXMembers::createProps_ecefX())
            .asMap();
    
}

struct LatMembers
{
    static QVariantMap createProps_lat()
    {
        using Field = ublox::message::CfgTmode2Fields<>::LatMembers::Lat;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .scaledDecimals(7U)
                .asMap();
        
    }
    
};

static QVariantMap createProps_lat()
{
    using Field = ublox::message::CfgTmode2Fields<>::Lat;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(LatMembers::createProps_lat())
            .asMap();
    
}

struct EcefYMembers
{
    static QVariantMap createProps_ecefY()
    {
        using Field = ublox::message::CfgTmode2Fields<>::EcefYMembers::EcefY;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecefY()
{
    using Field = ublox::message::CfgTmode2Fields<>::EcefY;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(EcefYMembers::createProps_ecefY())
            .asMap();
    
}

struct LonMembers
{
    static QVariantMap createProps_lon()
    {
        using Field = ublox::message::CfgTmode2Fields<>::LonMembers::Lon;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .scaledDecimals(7U)
                .asMap();
        
    }
    
};

static QVariantMap createProps_lon()
{
    using Field = ublox::message::CfgTmode2Fields<>::Lon;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(LonMembers::createProps_lon())
            .asMap();
    
}

struct EcefZMembers
{
    static QVariantMap createProps_ecefZ()
    {
        using Field = ublox::message::CfgTmode2Fields<>::EcefZMembers::EcefZ;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecefZ()
{
    using Field = ublox::message::CfgTmode2Fields<>::EcefZ;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(EcefZMembers::createProps_ecefZ())
            .asMap();
    
}

struct AltMembers
{
    static QVariantMap createProps_alt()
    {
        using Field = ublox::message::CfgTmode2Fields<>::AltMembers::Alt;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_alt()
{
    using Field = ublox::message::CfgTmode2Fields<>::Alt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(AltMembers::createProps_alt())
            .asMap();
    
}

static QVariantMap createProps_fixedPosAcc()
{
    using Field = ublox::message::CfgTmode2Fields<>::FixedPosAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svinMinDur()
{
    using Field = ublox::message::CfgTmode2Fields<>::SvinMinDur;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svinVarLimit()
{
    using Field = ublox::message::CfgTmode2Fields<>::SvinVarLimit;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_timeMode());
    props.append(createProps_reserved1());
    props.append(createProps_flags());
    props.append(createProps_ecefX());
    props.append(createProps_lat());
    props.append(createProps_ecefY());
    props.append(createProps_lon());
    props.append(createProps_ecefZ());
    props.append(createProps_alt());
    props.append(createProps_fixedPosAcc());
    props.append(createProps_svinMinDur());
    props.append(createProps_svinVarLimit());
    return props;
}

} // namespace

class CfgTmode2Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTmode2<ublox::cc_plugin::Message>,
        CfgTmode2Impl
    >
{
public:
    CfgTmode2Impl() = default;
    CfgTmode2Impl(const CfgTmode2Impl&) = delete;
    CfgTmode2Impl(CfgTmode2Impl&&) = delete;
    virtual ~CfgTmode2Impl() = default;
    CfgTmode2Impl& operator=(const CfgTmode2Impl&) = default;
    CfgTmode2Impl& operator=(CfgTmode2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTmode2::CfgTmode2() : m_pImpl(new CfgTmode2Impl) {}
CfgTmode2::~CfgTmode2() = default;

CfgTmode2& CfgTmode2::operator=(const CfgTmode2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode2& CfgTmode2::operator=(CfgTmode2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTmode2::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTmode2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTmode2::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTmode2::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode2::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTmode2::MsgIdParamType CfgTmode2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTmode2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTmode2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTmode2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTmode2::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTmode2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


