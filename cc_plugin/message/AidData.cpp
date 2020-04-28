// Generated by commsdsl2comms v3.4.0

#include "AidData.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidData.h"
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

class AidDataImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidData<ublox::cc_plugin::Message>,
        AidDataImpl
    >
{
public:
    AidDataImpl() = default;
    AidDataImpl(const AidDataImpl&) = delete;
    AidDataImpl(AidDataImpl&&) = delete;
    virtual ~AidDataImpl() = default;
    AidDataImpl& operator=(const AidDataImpl&) = default;
    AidDataImpl& operator=(AidDataImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidData::AidData() : m_pImpl(new AidDataImpl) {}
AidData::~AidData() = default;

AidData& AidData::operator=(const AidData& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidData& AidData::operator=(AidData&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidData::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidData::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidData::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidData::resetImpl()
{
    m_pImpl->reset();
}

bool AidData::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidData*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidData::MsgIdParamType AidData::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidData::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidData::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidData::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidData::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidData::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


