// Generated by commsdsl2comms v3.6.2

#include "CfgItfmPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgItfmPoll.h"
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

class CfgItfmPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgItfmPoll<ublox::cc_plugin::Message>,
        CfgItfmPollImpl
    >
{
public:
    CfgItfmPollImpl() = default;
    CfgItfmPollImpl(const CfgItfmPollImpl&) = delete;
    CfgItfmPollImpl(CfgItfmPollImpl&&) = delete;
    virtual ~CfgItfmPollImpl() = default;
    CfgItfmPollImpl& operator=(const CfgItfmPollImpl&) = default;
    CfgItfmPollImpl& operator=(CfgItfmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgItfmPoll::CfgItfmPoll() : m_pImpl(new CfgItfmPollImpl) {}
CfgItfmPoll::~CfgItfmPoll() = default;

CfgItfmPoll& CfgItfmPoll::operator=(const CfgItfmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgItfmPoll& CfgItfmPoll::operator=(CfgItfmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgItfmPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgItfmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgItfmPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgItfmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgItfmPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgItfmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgItfmPoll::MsgIdParamType CfgItfmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgItfmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgItfmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgItfmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgItfmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgItfmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


