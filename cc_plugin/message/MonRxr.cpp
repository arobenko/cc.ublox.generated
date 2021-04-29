// Generated by commsdsl2comms v3.6.2

#include "MonRxr.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonRxr.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_flags()
{
    using Field = ublox::message::MonRxrFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "awake")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    return props;
}

} // namespace

class MonRxrImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonRxr<ublox::cc_plugin::Message>,
        MonRxrImpl
    >
{
public:
    MonRxrImpl() = default;
    MonRxrImpl(const MonRxrImpl&) = delete;
    MonRxrImpl(MonRxrImpl&&) = delete;
    virtual ~MonRxrImpl() = default;
    MonRxrImpl& operator=(const MonRxrImpl&) = default;
    MonRxrImpl& operator=(MonRxrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonRxr::MonRxr() : m_pImpl(new MonRxrImpl) {}
MonRxr::~MonRxr() = default;

MonRxr& MonRxr::operator=(const MonRxr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxr& MonRxr::operator=(MonRxr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonRxr::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonRxr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonRxr::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonRxr::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxr::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonRxr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonRxr::MsgIdParamType MonRxr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonRxr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonRxr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonRxr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonRxr::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonRxr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


