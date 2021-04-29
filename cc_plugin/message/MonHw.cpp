// Generated by commsdsl2comms v3.6.2

#include "MonHw.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonHw.h"
#include "cc_plugin/field/MonAntPower.h"
#include "cc_plugin/field/MonAntStatus.h"
#include "cc_plugin/field/MonJammingState.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_pinSel()
{
    using Field = ublox::message::MonHwFields<>::PinSel;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_pinBank()
{
    using Field = ublox::message::MonHwFields<>::PinBank;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_pinDir()
{
    using Field = ublox::message::MonHwFields<>::PinDir;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_pinVal()
{
    using Field = ublox::message::MonHwFields<>::PinVal;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_noisePerMS()
{
    using Field = ublox::message::MonHwFields<>::NoisePerMS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_agcCnt()
{
    using Field = ublox::message::MonHwFields<>::AgcCnt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_aStatus()
{
    using Field = ublox::message::MonHwFields<>::AStatus;
    auto props = cc_plugin::field::createProps_monAntStatus(Field::name());
    return props;
    
}

static QVariantMap createProps_aPower()
{
    using Field = ublox::message::MonHwFields<>::APower;
    auto props = cc_plugin::field::createProps_monAntPower(Field::name());
    return props;
    
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow()
    {
        using Field = ublox::message::MonHwFields<>::FlagsMembers::BitsLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "rtcCalib")
                .add(1U, "safeBoot")
                .asMap();
        
    }
    
    static QVariantMap createProps_jammingState()
    {
        using Field = ublox::message::MonHwFields<>::FlagsMembers::JammingState;
        auto props = cc_plugin::field::createProps_monJammingState(Field::name(), true);
        return props;
        
    }
    
    static QVariantMap createProps_bitsHigh()
    {
        using Field = ublox::message::MonHwFields<>::FlagsMembers::BitsHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "xtalAbsent")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::MonHwFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_bitsLow())
            .add(FlagsMembers::createProps_jammingState())
            .add(FlagsMembers::createProps_bitsHigh())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MonHwFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_usedMask()
{
    using Field = ublox::message::MonHwFields<>::UsedMask;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_vP()
{
    using Field = ublox::message::MonHwFields<>::VP;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_jamInd()
{
    using Field = ublox::message::MonHwFields<>::JamInd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MonHwFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_pinIrq()
{
    using Field = ublox::message::MonHwFields<>::PinIrq;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_pullH()
{
    using Field = ublox::message::MonHwFields<>::PullH;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_pullL()
{
    using Field = ublox::message::MonHwFields<>::PullL;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_pinSel());
    props.append(createProps_pinBank());
    props.append(createProps_pinDir());
    props.append(createProps_pinVal());
    props.append(createProps_noisePerMS());
    props.append(createProps_agcCnt());
    props.append(createProps_aStatus());
    props.append(createProps_aPower());
    props.append(createProps_flags());
    props.append(createProps_reserved1());
    props.append(createProps_usedMask());
    props.append(createProps_vP());
    props.append(createProps_jamInd());
    props.append(createProps_reserved2());
    props.append(createProps_pinIrq());
    props.append(createProps_pullH());
    props.append(createProps_pullL());
    return props;
}

} // namespace

class MonHwImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonHw<ublox::cc_plugin::Message>,
        MonHwImpl
    >
{
public:
    MonHwImpl() = default;
    MonHwImpl(const MonHwImpl&) = delete;
    MonHwImpl(MonHwImpl&&) = delete;
    virtual ~MonHwImpl() = default;
    MonHwImpl& operator=(const MonHwImpl&) = default;
    MonHwImpl& operator=(MonHwImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHw::MonHw() : m_pImpl(new MonHwImpl) {}
MonHw::~MonHw() = default;

MonHw& MonHw::operator=(const MonHw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw& MonHw::operator=(MonHw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHw::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHw::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHw::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHw::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHw::MsgIdParamType MonHw::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHw::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHw::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHw::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHw::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHw::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


