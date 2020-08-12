// Generated by commsdsl2comms v3.5.0

#include "CfgTxslot.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTxslot.h"
#include "cc_plugin/field/Res1.h"

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
    using Field = ublox::message::CfgTxslotFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_enable()
{
    using Field = ublox::message::CfgTxslotFields<>::Enable;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "DDC")
            .add(1U, "UART1")
            .add(2U, "UART2")
            .add(3U, "USB")
            .add(4U, "SPI")
            .asMap();
    
}

static QVariantMap createProps_refTp()
{
    using Field = ublox::message::CfgTxslotFields<>::RefTp;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Timepulse", 0)
            .add("Timepulse2", 1)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgTxslotFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

struct EndMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgTxslotFields<>::EndMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_end()
{
    using Field = ublox::message::CfgTxslotFields<>::End;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(EndMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_enable());
    props.append(createProps_refTp());
    props.append(createProps_reserved1());
    props.append(createProps_end());
    return props;
}

} // namespace

class CfgTxslotImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTxslot<ublox::cc_plugin::Message>,
        CfgTxslotImpl
    >
{
public:
    CfgTxslotImpl() = default;
    CfgTxslotImpl(const CfgTxslotImpl&) = delete;
    CfgTxslotImpl(CfgTxslotImpl&&) = delete;
    virtual ~CfgTxslotImpl() = default;
    CfgTxslotImpl& operator=(const CfgTxslotImpl&) = default;
    CfgTxslotImpl& operator=(CfgTxslotImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTxslot::CfgTxslot() : m_pImpl(new CfgTxslotImpl) {}
CfgTxslot::~CfgTxslot() = default;

CfgTxslot& CfgTxslot::operator=(const CfgTxslot& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTxslot& CfgTxslot::operator=(CfgTxslot&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTxslot::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTxslot::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTxslot::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTxslot::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTxslot::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTxslot*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTxslot::MsgIdParamType CfgTxslot::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTxslot::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTxslot::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTxslot::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTxslot::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTxslot::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


