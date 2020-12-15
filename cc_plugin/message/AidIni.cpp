// Generated by commsdsl2comms v3.6.0

#include "AidIni.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidIni.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

struct EcefXMembers
{
    static QVariantMap createProps_ecefX()
    {
        using Field = ublox::message::AidIniFields<>::EcefXMembers::EcefX;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecefX()
{
    using Field = ublox::message::AidIniFields<>::EcefX;
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
        using Field = ublox::message::AidIniFields<>::LatMembers::Lat;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .scaledDecimals(7U)
                .asMap();
        
    }
    
};

static QVariantMap createProps_lat()
{
    using Field = ublox::message::AidIniFields<>::Lat;
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
        using Field = ublox::message::AidIniFields<>::EcefYMembers::EcefY;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecefY()
{
    using Field = ublox::message::AidIniFields<>::EcefY;
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
        using Field = ublox::message::AidIniFields<>::LonMembers::Lon;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .scaledDecimals(7U)
                .asMap();
        
    }
    
};

static QVariantMap createProps_lon()
{
    using Field = ublox::message::AidIniFields<>::Lon;
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
        using Field = ublox::message::AidIniFields<>::EcefZMembers::EcefZ;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecefZ()
{
    using Field = ublox::message::AidIniFields<>::EcefZ;
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
        using Field = ublox::message::AidIniFields<>::AltMembers::Alt;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_alt()
{
    using Field = ublox::message::AidIniFields<>::Alt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(AltMembers::createProps_alt())
            .asMap();
    
}

static QVariantMap createProps_posAcc()
{
    using Field = ublox::message::AidIniFields<>::PosAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tmCfg()
{
    using Field = ublox::message::AidIniFields<>::TmCfg;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(1U, "fEdge")
            .add(4U, "tm1")
            .add(6U, "f1")
            .asMap();
    
}

struct WnoMembers
{
    static QVariantMap createProps_wno()
    {
        using Field = ublox::message::AidIniFields<>::WnoMembers::Wno;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_wno()
{
    using Field = ublox::message::AidIniFields<>::Wno;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(WnoMembers::createProps_wno())
            .asMap();
    
}

struct DateMembers
{
    struct DateBundleMembers
    {
        static QVariantMap createProps_year()
        {
            using Field = ublox::message::AidIniFields<>::DateMembers::DateBundleMembers::Year;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_month()
        {
            using Field = ublox::message::AidIniFields<>::DateMembers::DateBundleMembers::Month;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_dateBundle()
    {
        using Field = ublox::message::AidIniFields<>::DateMembers::DateBundle;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(DateBundleMembers::createProps_year())
                .add(DateBundleMembers::createProps_month())
                .asMap();
        
    }
    
};

static QVariantMap createProps_date()
{
    using Field = ublox::message::AidIniFields<>::Date;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(DateMembers::createProps_dateBundle())
            .asMap();
    
}

struct TowMembers
{
    static QVariantMap createProps_tow()
    {
        using Field = ublox::message::AidIniFields<>::TowMembers::Tow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_tow()
{
    using Field = ublox::message::AidIniFields<>::Tow;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(TowMembers::createProps_tow())
            .asMap();
    
}

struct TimeMembers
{
    struct TimeBundleMembers
    {
        static QVariantMap createProps_day()
        {
            using Field = ublox::message::AidIniFields<>::TimeMembers::TimeBundleMembers::Day;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_hour()
        {
            using Field = ublox::message::AidIniFields<>::TimeMembers::TimeBundleMembers::Hour;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_min()
        {
            using Field = ublox::message::AidIniFields<>::TimeMembers::TimeBundleMembers::Min;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_sec()
        {
            using Field = ublox::message::AidIniFields<>::TimeMembers::TimeBundleMembers::Sec;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_timeBundle()
    {
        using Field = ublox::message::AidIniFields<>::TimeMembers::TimeBundle;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(TimeBundleMembers::createProps_day())
                .add(TimeBundleMembers::createProps_hour())
                .add(TimeBundleMembers::createProps_min())
                .add(TimeBundleMembers::createProps_sec())
                .asMap();
        
    }
    
};

static QVariantMap createProps_time()
{
    using Field = ublox::message::AidIniFields<>::Time;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(TimeMembers::createProps_timeBundle())
            .asMap();
    
}

static QVariantMap createProps_towNs()
{
    using Field = ublox::message::AidIniFields<>::TowNs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAccMs()
{
    using Field = ublox::message::AidIniFields<>::TAccMs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAccNs()
{
    using Field = ublox::message::AidIniFields<>::TAccNs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct ClkDMembers
{
    static QVariantMap createProps_clkD()
    {
        using Field = ublox::message::AidIniFields<>::ClkDMembers::ClkD;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_clkD()
{
    using Field = ublox::message::AidIniFields<>::ClkD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(ClkDMembers::createProps_clkD())
            .asMap();
    
}

struct FreqMembers
{
    static QVariantMap createProps_freq()
    {
        using Field = ublox::message::AidIniFields<>::FreqMembers::Freq;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .scaledDecimals(2U)
                .asMap();
        
    }
    
};

static QVariantMap createProps_freq()
{
    using Field = ublox::message::AidIniFields<>::Freq;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(FreqMembers::createProps_freq())
            .asMap();
    
}

struct ClkDAccMembers
{
    static QVariantMap createProps_clkDAcc()
    {
        using Field = ublox::message::AidIniFields<>::ClkDAccMembers::ClkDAcc;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_clkDAcc()
{
    using Field = ublox::message::AidIniFields<>::ClkDAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(ClkDAccMembers::createProps_clkDAcc())
            .asMap();
    
}

struct FreqAccMembers
{
    static QVariantMap createProps_freqAcc()
    {
        using Field = ublox::message::AidIniFields<>::FreqAccMembers::FreqAcc;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_freqAcc()
{
    using Field = ublox::message::AidIniFields<>::FreqAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(FreqAccMembers::createProps_freqAcc())
            .asMap();
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::AidIniFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "pos")
            .add(1U, "time")
            .add(2U, "clockD")
            .add(3U, "tp")
            .add(4U, "clockF")
            .add(5U, "lla")
            .add(6U, "altInv")
            .add(7U, "prevTm")
            .add(10U, "utc")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_ecefX());
    props.append(createProps_lat());
    props.append(createProps_ecefY());
    props.append(createProps_lon());
    props.append(createProps_ecefZ());
    props.append(createProps_alt());
    props.append(createProps_posAcc());
    props.append(createProps_tmCfg());
    props.append(createProps_wno());
    props.append(createProps_date());
    props.append(createProps_tow());
    props.append(createProps_time());
    props.append(createProps_towNs());
    props.append(createProps_tAccMs());
    props.append(createProps_tAccNs());
    props.append(createProps_clkD());
    props.append(createProps_freq());
    props.append(createProps_clkDAcc());
    props.append(createProps_freqAcc());
    props.append(createProps_flags());
    return props;
}

} // namespace

class AidIniImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidIni<ublox::cc_plugin::Message>,
        AidIniImpl
    >
{
public:
    AidIniImpl() = default;
    AidIniImpl(const AidIniImpl&) = delete;
    AidIniImpl(AidIniImpl&&) = delete;
    virtual ~AidIniImpl() = default;
    AidIniImpl& operator=(const AidIniImpl&) = default;
    AidIniImpl& operator=(AidIniImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidIni::AidIni() : m_pImpl(new AidIniImpl) {}
AidIni::~AidIni() = default;

AidIni& AidIni::operator=(const AidIni& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidIni& AidIni::operator=(AidIni&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidIni::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidIni::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidIni::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidIni::resetImpl()
{
    m_pImpl->reset();
}

bool AidIni::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidIni*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidIni::MsgIdParamType AidIni::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidIni::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidIni::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidIni::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidIni::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidIni::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


