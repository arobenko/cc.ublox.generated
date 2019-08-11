#include "CfgNav5.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNav5.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res5.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_mask()
{
    using Field = ublox::message::CfgNav5Fields<>::Mask;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "dyn")
            .add(1U, "minEl")
            .add(2U, "posFixMode")
            .add(3U, "drLim")
            .add(4U, "posMask")
            .add(5U, "timeMask")
            .add(6U, "staticHoldMask")
            .add(7U, "dgpsMask")
            .add(8U, "cnoThreshold")
            .add(10U, "utc")
            .asMap();
    
}

static QVariantMap createProps_dynModel()
{
    using Field = ublox::message::CfgNav5Fields<>::DynModel;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Portable", 0)
            .add("Stationary", 2)
            .add("Pedestrian", 3)
            .add("Automotive", 4)
            .add("Sea", 5)
            .add("Airborne <1g accel", 6)
            .add("Airborne <2g accel", 7)
            .add("Airborne <4g accel", 8)
            .add("Wrist watch", 9)
            .asMap();
    
}

static QVariantMap createProps_fixMode()
{
    using Field = ublox::message::CfgNav5Fields<>::FixMode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("2D Only", 1)
            .add("2D Only", 2)
            .add("Auto 2D/3D", 3)
            .asMap();
    
}

static QVariantMap createProps_fixedAlt()
{
    using Field = ublox::message::CfgNav5Fields<>::FixedAlt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(2U)
            .asMap();
    
}

static QVariantMap createProps_fixedAltVar()
{
    using Field = ublox::message::CfgNav5Fields<>::FixedAltVar;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(4U)
            .asMap();
    
}

static QVariantMap createProps_minElev()
{
    using Field = ublox::message::CfgNav5Fields<>::MinElev;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_drLimit()
{
    using Field = ublox::message::CfgNav5Fields<>::DrLimit;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_pDop()
{
    using Field = ublox::message::CfgNav5Fields<>::PDop;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_tDop()
{
    using Field = ublox::message::CfgNav5Fields<>::TDop;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_pAcc()
{
    using Field = ublox::message::CfgNav5Fields<>::PAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::CfgNav5Fields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_staticHoldThresh()
{
    using Field = ublox::message::CfgNav5Fields<>::StaticHoldThresh;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dgnssTimeout()
{
    using Field = ublox::message::CfgNav5Fields<>::DgnssTimeout;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_cnoThreshNumSVs()
{
    using Field = ublox::message::CfgNav5Fields<>::CnoThreshNumSVs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_cnoThresh()
{
    using Field = ublox::message::CfgNav5Fields<>::CnoThresh;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgNav5Fields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_staticHoldMaxDist()
{
    using Field = ublox::message::CfgNav5Fields<>::StaticHoldMaxDist;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcStandard()
{
    using Field = ublox::message::CfgNav5Fields<>::UtcStandard;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Automatic", 0)
            .add("GPS", 3)
            .add("GLONASS", 6)
            .add("BeiDou", 7)
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgNav5Fields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res5(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_mask());
    props.append(createProps_dynModel());
    props.append(createProps_fixMode());
    props.append(createProps_fixedAlt());
    props.append(createProps_fixedAltVar());
    props.append(createProps_minElev());
    props.append(createProps_drLimit());
    props.append(createProps_pDop());
    props.append(createProps_tDop());
    props.append(createProps_pAcc());
    props.append(createProps_tAcc());
    props.append(createProps_staticHoldThresh());
    props.append(createProps_dgnssTimeout());
    props.append(createProps_cnoThreshNumSVs());
    props.append(createProps_cnoThresh());
    props.append(createProps_reserved1());
    props.append(createProps_staticHoldMaxDist());
    props.append(createProps_utcStandard());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class CfgNav5Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNav5<ublox::cc_plugin::Message>,
        CfgNav5Impl
    >
{
public:
    CfgNav5Impl() = default;
    CfgNav5Impl(const CfgNav5Impl&) = delete;
    CfgNav5Impl(CfgNav5Impl&&) = delete;
    virtual ~CfgNav5Impl() = default;
    CfgNav5Impl& operator=(const CfgNav5Impl&) = default;
    CfgNav5Impl& operator=(CfgNav5Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNav5::CfgNav5() : m_pImpl(new CfgNav5Impl) {}
CfgNav5::~CfgNav5() = default;

CfgNav5& CfgNav5::operator=(const CfgNav5& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNav5& CfgNav5::operator=(CfgNav5&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNav5::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNav5::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNav5::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNav5::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNav5::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNav5*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNav5::MsgIdParamType CfgNav5::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNav5::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNav5::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNav5::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNav5::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNav5::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


