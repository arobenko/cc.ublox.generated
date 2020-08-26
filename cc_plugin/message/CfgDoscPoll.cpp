// Generated by commsdsl2comms v3.5.1

#include "CfgDoscPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgDoscPoll.h"
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

class CfgDoscPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgDoscPoll<ublox::cc_plugin::Message>,
        CfgDoscPollImpl
    >
{
public:
    CfgDoscPollImpl() = default;
    CfgDoscPollImpl(const CfgDoscPollImpl&) = delete;
    CfgDoscPollImpl(CfgDoscPollImpl&&) = delete;
    virtual ~CfgDoscPollImpl() = default;
    CfgDoscPollImpl& operator=(const CfgDoscPollImpl&) = default;
    CfgDoscPollImpl& operator=(CfgDoscPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDoscPoll::CfgDoscPoll() : m_pImpl(new CfgDoscPollImpl) {}
CfgDoscPoll::~CfgDoscPoll() = default;

CfgDoscPoll& CfgDoscPoll::operator=(const CfgDoscPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDoscPoll& CfgDoscPoll::operator=(CfgDoscPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDoscPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDoscPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDoscPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDoscPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDoscPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDoscPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDoscPoll::MsgIdParamType CfgDoscPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDoscPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDoscPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDoscPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDoscPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDoscPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


