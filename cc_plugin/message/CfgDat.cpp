// Generated by commsdsl2comms v3.6.2

#include "CfgDat.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgDat.h"
#include "cc_plugin/field/CfgDatD.h"
#include "cc_plugin/field/CfgDatDatumNum.h"
#include "cc_plugin/field/CfgDatFlat.h"
#include "cc_plugin/field/CfgDatMajA.h"
#include "cc_plugin/field/CfgDatRot.h"
#include "cc_plugin/field/CfgDatScale.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_datumNum()
{
    using Field = ublox::message::CfgDatFields<>::DatumNum;
    auto props = cc_plugin::field::createProps_cfgDatDatumNum(Field::name());
    return props;
    
}

static QVariantMap createProps_datumName()
{
    using Field = ublox::message::CfgDatFields<>::DatumName;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_majA()
{
    using Field = ublox::message::CfgDatFields<>::MajA;
    auto props = cc_plugin::field::createProps_cfgDatMajA(Field::name());
    return props;
    
}

static QVariantMap createProps_flat()
{
    using Field = ublox::message::CfgDatFields<>::Flat;
    auto props = cc_plugin::field::createProps_cfgDatFlat(Field::name());
    return props;
    
}

static QVariantMap createProps_dX()
{
    using Field = ublox::message::CfgDatFields<>::DX;
    auto props = cc_plugin::field::createProps_cfgDatD(Field::name());
    return props;
    
}

static QVariantMap createProps_dY()
{
    using Field = ublox::message::CfgDatFields<>::DY;
    auto props = cc_plugin::field::createProps_cfgDatD(Field::name());
    return props;
    
}

static QVariantMap createProps_dZ()
{
    using Field = ublox::message::CfgDatFields<>::DZ;
    auto props = cc_plugin::field::createProps_cfgDatD(Field::name());
    return props;
    
}

static QVariantMap createProps_rotX()
{
    using Field = ublox::message::CfgDatFields<>::RotX;
    auto props = cc_plugin::field::createProps_cfgDatRot(Field::name());
    return props;
    
}

static QVariantMap createProps_rotY()
{
    using Field = ublox::message::CfgDatFields<>::RotY;
    auto props = cc_plugin::field::createProps_cfgDatRot(Field::name());
    return props;
    
}

static QVariantMap createProps_rotZ()
{
    using Field = ublox::message::CfgDatFields<>::RotZ;
    auto props = cc_plugin::field::createProps_cfgDatRot(Field::name());
    return props;
    
}

static QVariantMap createProps_scale()
{
    using Field = ublox::message::CfgDatFields<>::Scale;
    auto props = cc_plugin::field::createProps_cfgDatScale(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_datumNum());
    props.append(createProps_datumName());
    props.append(createProps_majA());
    props.append(createProps_flat());
    props.append(createProps_dX());
    props.append(createProps_dY());
    props.append(createProps_dZ());
    props.append(createProps_rotX());
    props.append(createProps_rotY());
    props.append(createProps_rotZ());
    props.append(createProps_scale());
    return props;
}

} // namespace

class CfgDatImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgDat<ublox::cc_plugin::Message>,
        CfgDatImpl
    >
{
public:
    CfgDatImpl() = default;
    CfgDatImpl(const CfgDatImpl&) = delete;
    CfgDatImpl(CfgDatImpl&&) = delete;
    virtual ~CfgDatImpl() = default;
    CfgDatImpl& operator=(const CfgDatImpl&) = default;
    CfgDatImpl& operator=(CfgDatImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDat::CfgDat() : m_pImpl(new CfgDatImpl) {}
CfgDat::~CfgDat() = default;

CfgDat& CfgDat::operator=(const CfgDat& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDat& CfgDat::operator=(CfgDat&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDat::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDat::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDat::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDat::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDat::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDat*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDat::MsgIdParamType CfgDat::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDat::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDat::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDat::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDat::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDat::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


