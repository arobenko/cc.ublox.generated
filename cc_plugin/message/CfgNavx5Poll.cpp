// Generated by commsdsl2comms v3.4.0

#include "CfgNavx5Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNavx5Poll.h"
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

class CfgNavx5PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNavx5Poll<ublox::cc_plugin::Message>,
        CfgNavx5PollImpl
    >
{
public:
    CfgNavx5PollImpl() = default;
    CfgNavx5PollImpl(const CfgNavx5PollImpl&) = delete;
    CfgNavx5PollImpl(CfgNavx5PollImpl&&) = delete;
    virtual ~CfgNavx5PollImpl() = default;
    CfgNavx5PollImpl& operator=(const CfgNavx5PollImpl&) = default;
    CfgNavx5PollImpl& operator=(CfgNavx5PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNavx5Poll::CfgNavx5Poll() : m_pImpl(new CfgNavx5PollImpl) {}
CfgNavx5Poll::~CfgNavx5Poll() = default;

CfgNavx5Poll& CfgNavx5Poll::operator=(const CfgNavx5Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNavx5Poll& CfgNavx5Poll::operator=(CfgNavx5Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNavx5Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNavx5Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNavx5Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNavx5Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNavx5Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNavx5Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNavx5Poll::MsgIdParamType CfgNavx5Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNavx5Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNavx5Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNavx5Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNavx5Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNavx5Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


