// Generated by commsdsl2comms v3.4.2

#include "MgaIniPosXyz.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaIniPosXyz.h"
#include "cc_plugin/field/EcefX.h"
#include "cc_plugin/field/EcefY.h"
#include "cc_plugin/field/EcefZ.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_ecefX()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::EcefX;
    auto props = cc_plugin::field::createProps_ecefX(Field::name());
    return props;
    
}

static QVariantMap createProps_ecefY()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::EcefY;
    auto props = cc_plugin::field::createProps_ecefY(Field::name());
    return props;
    
}

static QVariantMap createProps_ecefZ()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::EcefZ;
    auto props = cc_plugin::field::createProps_ecefZ(Field::name());
    return props;
    
}

static QVariantMap createProps_posAcc()
{
    using Field = ublox::message::MgaIniPosXyzFields<>::PosAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_ecefX());
    props.append(createProps_ecefY());
    props.append(createProps_ecefZ());
    props.append(createProps_posAcc());
    return props;
}

} // namespace

class MgaIniPosXyzImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaIniPosXyz<ublox::cc_plugin::Message>,
        MgaIniPosXyzImpl
    >
{
public:
    MgaIniPosXyzImpl() = default;
    MgaIniPosXyzImpl(const MgaIniPosXyzImpl&) = delete;
    MgaIniPosXyzImpl(MgaIniPosXyzImpl&&) = delete;
    virtual ~MgaIniPosXyzImpl() = default;
    MgaIniPosXyzImpl& operator=(const MgaIniPosXyzImpl&) = default;
    MgaIniPosXyzImpl& operator=(MgaIniPosXyzImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniPosXyz::MgaIniPosXyz() : m_pImpl(new MgaIniPosXyzImpl) {}
MgaIniPosXyz::~MgaIniPosXyz() = default;

MgaIniPosXyz& MgaIniPosXyz::operator=(const MgaIniPosXyz& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniPosXyz& MgaIniPosXyz::operator=(MgaIniPosXyz&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniPosXyz::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniPosXyz::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniPosXyz::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniPosXyz::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniPosXyz::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniPosXyz*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniPosXyz::MsgIdParamType MgaIniPosXyz::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniPosXyz::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniPosXyz::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniPosXyz::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniPosXyz::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniPosXyz::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


