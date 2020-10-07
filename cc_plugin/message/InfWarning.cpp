// Generated by commsdsl2comms v3.5.2

#include "InfWarning.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/InfWarning.h"
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
    using Field = ublox::message::InfWarningFields<>::Str;
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

class InfWarningImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::InfWarning<ublox::cc_plugin::Message>,
        InfWarningImpl
    >
{
public:
    InfWarningImpl() = default;
    InfWarningImpl(const InfWarningImpl&) = delete;
    InfWarningImpl(InfWarningImpl&&) = delete;
    virtual ~InfWarningImpl() = default;
    InfWarningImpl& operator=(const InfWarningImpl&) = default;
    InfWarningImpl& operator=(InfWarningImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfWarning::InfWarning() : m_pImpl(new InfWarningImpl) {}
InfWarning::~InfWarning() = default;

InfWarning& InfWarning::operator=(const InfWarning& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfWarning& InfWarning::operator=(InfWarning&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* InfWarning::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfWarning::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfWarning::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfWarning::resetImpl()
{
    m_pImpl->reset();
}

bool InfWarning::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const InfWarning*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfWarning::MsgIdParamType InfWarning::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfWarning::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfWarning::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfWarning::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfWarning::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfWarning::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


