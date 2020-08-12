// Generated by commsdsl2comms v3.5.0

#include "CfgDatPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgDatPoll.h"
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

class CfgDatPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgDatPoll<ublox::cc_plugin::Message>,
        CfgDatPollImpl
    >
{
public:
    CfgDatPollImpl() = default;
    CfgDatPollImpl(const CfgDatPollImpl&) = delete;
    CfgDatPollImpl(CfgDatPollImpl&&) = delete;
    virtual ~CfgDatPollImpl() = default;
    CfgDatPollImpl& operator=(const CfgDatPollImpl&) = default;
    CfgDatPollImpl& operator=(CfgDatPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDatPoll::CfgDatPoll() : m_pImpl(new CfgDatPollImpl) {}
CfgDatPoll::~CfgDatPoll() = default;

CfgDatPoll& CfgDatPoll::operator=(const CfgDatPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatPoll& CfgDatPoll::operator=(CfgDatPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDatPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDatPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDatPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDatPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDatPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDatPoll::MsgIdParamType CfgDatPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDatPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDatPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDatPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDatPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDatPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


