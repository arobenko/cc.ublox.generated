// Generated by commsdsl2comms v3.5.1

#include "CfgRxmPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgRxmPoll.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgRxmPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgRxmPoll<ublox::cc_plugin::Message>,
        CfgRxmPollImpl
    >
{
public:
    CfgRxmPollImpl() = default;
    CfgRxmPollImpl(const CfgRxmPollImpl&) = delete;
    CfgRxmPollImpl(CfgRxmPollImpl&&) = delete;
    virtual ~CfgRxmPollImpl() = default;
    CfgRxmPollImpl& operator=(const CfgRxmPollImpl&) = default;
    CfgRxmPollImpl& operator=(CfgRxmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRxmPoll::CfgRxmPoll() : m_pImpl(new CfgRxmPollImpl) {}
CfgRxmPoll::~CfgRxmPoll() = default;

CfgRxmPoll& CfgRxmPoll::operator=(const CfgRxmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRxmPoll& CfgRxmPoll::operator=(CfgRxmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRxmPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRxmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRxmPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRxmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRxmPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRxmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRxmPoll::MsgIdParamType CfgRxmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRxmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRxmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRxmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRxmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRxmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


