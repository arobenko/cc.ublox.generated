#include "CfgNavx5V2.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNavx5V2.h"
#include "cc_plugin/field/CfgNavx5AopCfg.h"
#include "cc_plugin/field/CfgNavx5AopOrbMaxErr.h"
#include "cc_plugin/field/CfgNavx5Mask1.h"
#include "cc_plugin/field/CfgNavx5Mask2.h"
#include "cc_plugin/field/CfgNavx5SigAttenCompMode.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res3.h"
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
    using Field = ublox::message::CfgNavx5V2Fields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_mask1()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Mask1;
    return cc_plugin::field::createProps_cfgNavx5Mask1(Field::name());
    
}

static QVariantMap createProps_mask2()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Mask2;
    return cc_plugin::field::createProps_cfgNavx5Mask2(Field::name());
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_minSVs()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::MinSVs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_maxSVs()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::MaxSVs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_minCNO()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::MinCNO;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved2;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_iniFix3D()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::IniFix3D;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved3;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_ackAiding()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::AckAiding;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_wknRollover()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::WknRollover;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_sigAttenCompMode()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::SigAttenCompMode;
    return cc_plugin::field::createProps_cfgNavx5SigAttenCompMode(Field::name());
    
}

static QVariantMap createProps_reserved4()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved4;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_reserved5()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved5;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_reserved6()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved6;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_usePPP()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::UsePPP;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_aopCfg()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::AopCfg;
    return cc_plugin::field::createProps_cfgNavx5AopCfg(Field::name());
    
}

static QVariantMap createProps_reserved7()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved7;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_aopOrbMaxErr()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::AopOrbMaxErr;
    return cc_plugin::field::createProps_cfgNavx5AopOrbMaxErr(Field::name());
    
}

static QVariantMap createProps_reserved8()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved8;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

static QVariantMap createProps_reserved9()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::Reserved9;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_useAdr()
{
    using Field = ublox::message::CfgNavx5V2Fields<>::UseAdr;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_mask1());
    props.append(createProps_mask2());
    props.append(createProps_reserved1());
    props.append(createProps_minSVs());
    props.append(createProps_maxSVs());
    props.append(createProps_minCNO());
    props.append(createProps_reserved2());
    props.append(createProps_iniFix3D());
    props.append(createProps_reserved3());
    props.append(createProps_ackAiding());
    props.append(createProps_wknRollover());
    props.append(createProps_sigAttenCompMode());
    props.append(createProps_reserved4());
    props.append(createProps_reserved5());
    props.append(createProps_reserved6());
    props.append(createProps_usePPP());
    props.append(createProps_aopCfg());
    props.append(createProps_reserved7());
    props.append(createProps_aopOrbMaxErr());
    props.append(createProps_reserved8());
    props.append(createProps_reserved9());
    props.append(createProps_useAdr());
    return props;
}

} // namespace

class CfgNavx5V2Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNavx5V2<ublox::cc_plugin::Message>,
        CfgNavx5V2Impl
    >
{
public:
    CfgNavx5V2Impl() = default;
    CfgNavx5V2Impl(const CfgNavx5V2Impl&) = delete;
    CfgNavx5V2Impl(CfgNavx5V2Impl&&) = delete;
    virtual ~CfgNavx5V2Impl() = default;
    CfgNavx5V2Impl& operator=(const CfgNavx5V2Impl&) = default;
    CfgNavx5V2Impl& operator=(CfgNavx5V2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNavx5V2::CfgNavx5V2() : m_pImpl(new CfgNavx5V2Impl) {}
CfgNavx5V2::~CfgNavx5V2() = default;

CfgNavx5V2& CfgNavx5V2::operator=(const CfgNavx5V2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNavx5V2& CfgNavx5V2::operator=(CfgNavx5V2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNavx5V2::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNavx5V2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNavx5V2::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNavx5V2::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNavx5V2::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNavx5V2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNavx5V2::MsgIdParamType CfgNavx5V2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNavx5V2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNavx5V2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNavx5V2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNavx5V2::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNavx5V2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

