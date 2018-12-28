#include "InfNotice.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/InfNotice.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_str()
{
    using Field = ublox::message::InfNoticeFields<>::Str;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_str());
    return props;
}

} // namespace

class InfNoticeImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::InfNotice<ublox::cc_plugin::Message>,
        InfNoticeImpl
    >
{
public:
    InfNoticeImpl() = default;
    InfNoticeImpl(const InfNoticeImpl&) = delete;
    InfNoticeImpl(InfNoticeImpl&&) = delete;
    virtual ~InfNoticeImpl() = default;
    InfNoticeImpl& operator=(const InfNoticeImpl&) = default;
    InfNoticeImpl& operator=(InfNoticeImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfNotice::InfNotice() : m_pImpl(new InfNoticeImpl) {}
InfNotice::~InfNotice() = default;

InfNotice& InfNotice::operator=(const InfNotice& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfNotice& InfNotice::operator=(InfNotice&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* InfNotice::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfNotice::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfNotice::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfNotice::resetImpl()
{
    m_pImpl->reset();
}

bool InfNotice::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const InfNotice*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfNotice::MsgIdParamType InfNotice::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfNotice::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfNotice::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfNotice::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfNotice::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfNotice::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

