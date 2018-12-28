#include "AidReq.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidReq.h"
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

class AidReqImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidReq<ublox::cc_plugin::Message>,
        AidReqImpl
    >
{
public:
    AidReqImpl() = default;
    AidReqImpl(const AidReqImpl&) = delete;
    AidReqImpl(AidReqImpl&&) = delete;
    virtual ~AidReqImpl() = default;
    AidReqImpl& operator=(const AidReqImpl&) = default;
    AidReqImpl& operator=(AidReqImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidReq::AidReq() : m_pImpl(new AidReqImpl) {}
AidReq::~AidReq() = default;

AidReq& AidReq::operator=(const AidReq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidReq& AidReq::operator=(AidReq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidReq::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidReq::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidReq::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidReq::resetImpl()
{
    m_pImpl->reset();
}

bool AidReq::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidReq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidReq::MsgIdParamType AidReq::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidReq::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidReq::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidReq::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidReq::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidReq::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

