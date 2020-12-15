// Generated by commsdsl2comms v3.6.0

#include "CfgPmPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPmPoll.h"
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

class CfgPmPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPmPoll<ublox::cc_plugin::Message>,
        CfgPmPollImpl
    >
{
public:
    CfgPmPollImpl() = default;
    CfgPmPollImpl(const CfgPmPollImpl&) = delete;
    CfgPmPollImpl(CfgPmPollImpl&&) = delete;
    virtual ~CfgPmPollImpl() = default;
    CfgPmPollImpl& operator=(const CfgPmPollImpl&) = default;
    CfgPmPollImpl& operator=(CfgPmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPmPoll::CfgPmPoll() : m_pImpl(new CfgPmPollImpl) {}
CfgPmPoll::~CfgPmPoll() = default;

CfgPmPoll& CfgPmPoll::operator=(const CfgPmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPmPoll& CfgPmPoll::operator=(CfgPmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPmPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPmPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPmPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPmPoll::MsgIdParamType CfgPmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


