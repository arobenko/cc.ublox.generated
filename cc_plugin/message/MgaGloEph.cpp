// Generated by commsdsl2comms v3.6.2

#include "MgaGloEph.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGloEph.h"
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
    using Field = ublox::message::MgaGloEphFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGloEphFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaGloEphFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGloEphFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_fT()
{
    using Field = ublox::message::MgaGloEphFields<>::FT;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_b()
{
    using Field = ublox::message::MgaGloEphFields<>::B;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_m()
{
    using Field = ublox::message::MgaGloEphFields<>::M;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_h()
{
    using Field = ublox::message::MgaGloEphFields<>::H;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_x()
{
    using Field = ublox::message::MgaGloEphFields<>::X;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_y()
{
    using Field = ublox::message::MgaGloEphFields<>::Y;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_z()
{
    using Field = ublox::message::MgaGloEphFields<>::Z;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dx()
{
    using Field = ublox::message::MgaGloEphFields<>::Dx;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dy()
{
    using Field = ublox::message::MgaGloEphFields<>::Dy;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dz()
{
    using Field = ublox::message::MgaGloEphFields<>::Dz;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ddx()
{
    using Field = ublox::message::MgaGloEphFields<>::Ddx;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ddy()
{
    using Field = ublox::message::MgaGloEphFields<>::Ddy;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ddz()
{
    using Field = ublox::message::MgaGloEphFields<>::Ddz;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tb()
{
    using Field = ublox::message::MgaGloEphFields<>::Tb;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_gamma()
{
    using Field = ublox::message::MgaGloEphFields<>::Gamma;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_e()
{
    using Field = ublox::message::MgaGloEphFields<>::E;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaTau()
{
    using Field = ublox::message::MgaGloEphFields<>::DeltaTau;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tau()
{
    using Field = ublox::message::MgaGloEphFields<>::Tau;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaGloEphFields<>::Reserved2;
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
    props.append(createProps_fT());
    props.append(createProps_b());
    props.append(createProps_m());
    props.append(createProps_h());
    props.append(createProps_x());
    props.append(createProps_y());
    props.append(createProps_z());
    props.append(createProps_dx());
    props.append(createProps_dy());
    props.append(createProps_dz());
    props.append(createProps_ddx());
    props.append(createProps_ddy());
    props.append(createProps_ddz());
    props.append(createProps_tb());
    props.append(createProps_gamma());
    props.append(createProps_e());
    props.append(createProps_deltaTau());
    props.append(createProps_tau());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaGloEphImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGloEph<ublox::cc_plugin::Message>,
        MgaGloEphImpl
    >
{
public:
    MgaGloEphImpl() = default;
    MgaGloEphImpl(const MgaGloEphImpl&) = delete;
    MgaGloEphImpl(MgaGloEphImpl&&) = delete;
    virtual ~MgaGloEphImpl() = default;
    MgaGloEphImpl& operator=(const MgaGloEphImpl&) = default;
    MgaGloEphImpl& operator=(MgaGloEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGloEph::MgaGloEph() : m_pImpl(new MgaGloEphImpl) {}
MgaGloEph::~MgaGloEph() = default;

MgaGloEph& MgaGloEph::operator=(const MgaGloEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGloEph& MgaGloEph::operator=(MgaGloEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGloEph::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGloEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGloEph::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGloEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGloEph::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGloEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGloEph::MsgIdParamType MgaGloEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGloEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGloEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGloEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGloEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGloEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


