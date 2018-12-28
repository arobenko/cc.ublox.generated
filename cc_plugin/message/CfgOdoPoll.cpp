#include "CfgOdoPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgOdoPoll.h"
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

class CfgOdoPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgOdoPoll<ublox::cc_plugin::Message>,
        CfgOdoPollImpl
    >
{
public:
    CfgOdoPollImpl() = default;
    CfgOdoPollImpl(const CfgOdoPollImpl&) = delete;
    CfgOdoPollImpl(CfgOdoPollImpl&&) = delete;
    virtual ~CfgOdoPollImpl() = default;
    CfgOdoPollImpl& operator=(const CfgOdoPollImpl&) = default;
    CfgOdoPollImpl& operator=(CfgOdoPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgOdoPoll::CfgOdoPoll() : m_pImpl(new CfgOdoPollImpl) {}
CfgOdoPoll::~CfgOdoPoll() = default;

CfgOdoPoll& CfgOdoPoll::operator=(const CfgOdoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgOdoPoll& CfgOdoPoll::operator=(CfgOdoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgOdoPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgOdoPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgOdoPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgOdoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgOdoPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgOdoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgOdoPoll::MsgIdParamType CfgOdoPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgOdoPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgOdoPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgOdoPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgOdoPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgOdoPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

