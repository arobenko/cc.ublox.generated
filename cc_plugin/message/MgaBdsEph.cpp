// Generated by commsdsl2comms v3.5.0

#include "MgaBdsEph.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaBdsEph.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaBdsEphFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaBdsEphFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaBdsEphFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaBdsEphFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_satH1()
{
    using Field = ublox::message::MgaBdsEphFields<>::SatH1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_iODC()
{
    using Field = ublox::message::MgaBdsEphFields<>::IODC;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_a2()
{
    using Field = ublox::message::MgaBdsEphFields<>::A2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_a1()
{
    using Field = ublox::message::MgaBdsEphFields<>::A1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_a0()
{
    using Field = ublox::message::MgaBdsEphFields<>::A0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_toc()
{
    using Field = ublox::message::MgaBdsEphFields<>::Toc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tGD1()
{
    using Field = ublox::message::MgaBdsEphFields<>::TGD1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_uRAI()
{
    using Field = ublox::message::MgaBdsEphFields<>::URAI;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_iODE()
{
    using Field = ublox::message::MgaBdsEphFields<>::IODE;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_toe()
{
    using Field = ublox::message::MgaBdsEphFields<>::Toe;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_sqrtA()
{
    using Field = ublox::message::MgaBdsEphFields<>::SqrtA;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_e()
{
    using Field = ublox::message::MgaBdsEphFields<>::E;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega()
{
    using Field = ublox::message::MgaBdsEphFields<>::Omega;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltan()
{
    using Field = ublox::message::MgaBdsEphFields<>::Deltan;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_iDOT()
{
    using Field = ublox::message::MgaBdsEphFields<>::IDOT;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_m0()
{
    using Field = ublox::message::MgaBdsEphFields<>::M0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega0()
{
    using Field = ublox::message::MgaBdsEphFields<>::Omega0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omegaDot()
{
    using Field = ublox::message::MgaBdsEphFields<>::OmegaDot;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_i0()
{
    using Field = ublox::message::MgaBdsEphFields<>::I0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_cuc()
{
    using Field = ublox::message::MgaBdsEphFields<>::Cuc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_cus()
{
    using Field = ublox::message::MgaBdsEphFields<>::Cus;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_crc()
{
    using Field = ublox::message::MgaBdsEphFields<>::Crc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_crs()
{
    using Field = ublox::message::MgaBdsEphFields<>::Crs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_cic()
{
    using Field = ublox::message::MgaBdsEphFields<>::Cic;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_cis()
{
    using Field = ublox::message::MgaBdsEphFields<>::Cis;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaBdsEphFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_svid());
    props.append(createProps_reserved1());
    props.append(createProps_satH1());
    props.append(createProps_iODC());
    props.append(createProps_a2());
    props.append(createProps_a1());
    props.append(createProps_a0());
    props.append(createProps_toc());
    props.append(createProps_tGD1());
    props.append(createProps_uRAI());
    props.append(createProps_iODE());
    props.append(createProps_toe());
    props.append(createProps_sqrtA());
    props.append(createProps_e());
    props.append(createProps_omega());
    props.append(createProps_deltan());
    props.append(createProps_iDOT());
    props.append(createProps_m0());
    props.append(createProps_omega0());
    props.append(createProps_omegaDot());
    props.append(createProps_i0());
    props.append(createProps_cuc());
    props.append(createProps_cus());
    props.append(createProps_crc());
    props.append(createProps_crs());
    props.append(createProps_cic());
    props.append(createProps_cis());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaBdsEphImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaBdsEph<ublox::cc_plugin::Message>,
        MgaBdsEphImpl
    >
{
public:
    MgaBdsEphImpl() = default;
    MgaBdsEphImpl(const MgaBdsEphImpl&) = delete;
    MgaBdsEphImpl(MgaBdsEphImpl&&) = delete;
    virtual ~MgaBdsEphImpl() = default;
    MgaBdsEphImpl& operator=(const MgaBdsEphImpl&) = default;
    MgaBdsEphImpl& operator=(MgaBdsEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaBdsEph::MgaBdsEph() : m_pImpl(new MgaBdsEphImpl) {}
MgaBdsEph::~MgaBdsEph() = default;

MgaBdsEph& MgaBdsEph::operator=(const MgaBdsEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsEph& MgaBdsEph::operator=(MgaBdsEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaBdsEph::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaBdsEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaBdsEph::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaBdsEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsEph::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaBdsEph::MsgIdParamType MgaBdsEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaBdsEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaBdsEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaBdsEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaBdsEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaBdsEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


