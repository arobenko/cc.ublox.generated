#include "CfgNvs.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNvs.h"
#include "cc_plugin/field/CfgNvsMask.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_clearMask()
{
    using Field = ublox::message::CfgNvsFields<>::ClearMask;
    auto props = cc_plugin::field::createProps_cfgNvsMask(Field::name());
    return props;
    
}

static QVariantMap createProps_saveMask()
{
    using Field = ublox::message::CfgNvsFields<>::SaveMask;
    auto props = cc_plugin::field::createProps_cfgNvsMask(Field::name());
    return props;
    
}

static QVariantMap createProps_loadMask()
{
    using Field = ublox::message::CfgNvsFields<>::LoadMask;
    auto props = cc_plugin::field::createProps_cfgNvsMask(Field::name());
    return props;
    
}

static QVariantMap createProps_deviceMask()
{
    using Field = ublox::message::CfgNvsFields<>::DeviceMask;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "devBBR")
            .add(1U, "devFlash")
            .add(2U, "devEEPROM")
            .add(4U, "devSpiFlash")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_clearMask());
    props.append(createProps_saveMask());
    props.append(createProps_loadMask());
    props.append(createProps_deviceMask());
    return props;
}

} // namespace

class CfgNvsImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNvs<ublox::cc_plugin::Message>,
        CfgNvsImpl
    >
{
public:
    CfgNvsImpl() = default;
    CfgNvsImpl(const CfgNvsImpl&) = delete;
    CfgNvsImpl(CfgNvsImpl&&) = delete;
    virtual ~CfgNvsImpl() = default;
    CfgNvsImpl& operator=(const CfgNvsImpl&) = default;
    CfgNvsImpl& operator=(CfgNvsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNvs::CfgNvs() : m_pImpl(new CfgNvsImpl) {}
CfgNvs::~CfgNvs() = default;

CfgNvs& CfgNvs::operator=(const CfgNvs& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNvs& CfgNvs::operator=(CfgNvs&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNvs::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNvs::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNvs::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNvs::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNvs::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNvs*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNvs::MsgIdParamType CfgNvs::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNvs::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNvs::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNvs::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNvs::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNvs::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


