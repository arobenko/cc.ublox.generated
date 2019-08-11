#include "CfgPrtPortPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPrtPortPoll.h"
#include "cc_plugin/field/CfgPrtPortId.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_portId()
{
    using Field = ublox::message::CfgPrtPortPollFields<>::PortId;
    auto props = cc_plugin::field::createProps_cfgPrtPortId(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_portId());
    return props;
}

} // namespace

class CfgPrtPortPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPrtPortPoll<ublox::cc_plugin::Message>,
        CfgPrtPortPollImpl
    >
{
public:
    CfgPrtPortPollImpl() = default;
    CfgPrtPortPollImpl(const CfgPrtPortPollImpl&) = delete;
    CfgPrtPortPollImpl(CfgPrtPortPollImpl&&) = delete;
    virtual ~CfgPrtPortPollImpl() = default;
    CfgPrtPortPollImpl& operator=(const CfgPrtPortPollImpl&) = default;
    CfgPrtPortPollImpl& operator=(CfgPrtPortPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtPortPoll::CfgPrtPortPoll() : m_pImpl(new CfgPrtPortPollImpl) {}
CfgPrtPortPoll::~CfgPrtPortPoll() = default;

CfgPrtPortPoll& CfgPrtPortPoll::operator=(const CfgPrtPortPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtPortPoll& CfgPrtPortPoll::operator=(CfgPrtPortPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtPortPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtPortPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtPortPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtPortPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtPortPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtPortPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtPortPoll::MsgIdParamType CfgPrtPortPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtPortPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtPortPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtPortPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtPortPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtPortPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


