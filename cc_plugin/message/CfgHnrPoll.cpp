#include "CfgHnrPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgHnrPoll.h"
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

class CfgHnrPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgHnrPoll<ublox::cc_plugin::Message>,
        CfgHnrPollImpl
    >
{
public:
    CfgHnrPollImpl() = default;
    CfgHnrPollImpl(const CfgHnrPollImpl&) = delete;
    CfgHnrPollImpl(CfgHnrPollImpl&&) = delete;
    virtual ~CfgHnrPollImpl() = default;
    CfgHnrPollImpl& operator=(const CfgHnrPollImpl&) = default;
    CfgHnrPollImpl& operator=(CfgHnrPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgHnrPoll::CfgHnrPoll() : m_pImpl(new CfgHnrPollImpl) {}
CfgHnrPoll::~CfgHnrPoll() = default;

CfgHnrPoll& CfgHnrPoll::operator=(const CfgHnrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgHnrPoll& CfgHnrPoll::operator=(CfgHnrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgHnrPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgHnrPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgHnrPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgHnrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgHnrPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgHnrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgHnrPoll::MsgIdParamType CfgHnrPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgHnrPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgHnrPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgHnrPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgHnrPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgHnrPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

