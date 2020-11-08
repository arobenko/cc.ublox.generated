// Generated by commsdsl2comms v3.5.3

#include "CfgTmode.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTmode.h"
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
    using Field = ublox::message::CfgTmodeFields<>::TimeMode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Disabled", 0)
            .add("Survey In", 1)
            .add("Fixed Mode", 2)
            .asMap();
    
}

static QVariantMap createProps_fixedPosX()
{
    using Field = ublox::message::CfgTmodeFields<>::FixedPosX;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fixedPosY()
{
    using Field = ublox::message::CfgTmodeFields<>::FixedPosY;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fixedPosZ()
{
    using Field = ublox::message::CfgTmodeFields<>::FixedPosZ;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fixedPosVar()
{
    using Field = ublox::message::CfgTmodeFields<>::FixedPosVar;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svinMinDur()
{
    using Field = ublox::message::CfgTmodeFields<>::SvinMinDur;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svinVarLimit()
{
    using Field = ublox::message::CfgTmodeFields<>::SvinVarLimit;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_timeMode());
    props.append(createProps_fixedPosX());
    props.append(createProps_fixedPosY());
    props.append(createProps_fixedPosZ());
    props.append(createProps_fixedPosVar());
    props.append(createProps_svinMinDur());
    props.append(createProps_svinVarLimit());
    return props;
}

} // namespace

class CfgTmodeImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTmode<ublox::cc_plugin::Message>,
        CfgTmodeImpl
    >
{
public:
    CfgTmodeImpl() = default;
    CfgTmodeImpl(const CfgTmodeImpl&) = delete;
    CfgTmodeImpl(CfgTmodeImpl&&) = delete;
    virtual ~CfgTmodeImpl() = default;
    CfgTmodeImpl& operator=(const CfgTmodeImpl&) = default;
    CfgTmodeImpl& operator=(CfgTmodeImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTmode::CfgTmode() : m_pImpl(new CfgTmodeImpl) {}
CfgTmode::~CfgTmode() = default;

CfgTmode& CfgTmode::operator=(const CfgTmode& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode& CfgTmode::operator=(CfgTmode&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTmode::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTmode::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTmode::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTmode::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTmode::MsgIdParamType CfgTmode::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTmode::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTmode::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTmode::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTmode::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTmode::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


