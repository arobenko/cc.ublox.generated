// Generated by commsdsl2comms v3.6.2

#include "NavSlasPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSlasPoll.h"
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

class NavSlasPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSlasPoll<ublox::cc_plugin::Message>,
        NavSlasPollImpl
    >
{
public:
    NavSlasPollImpl() = default;
    NavSlasPollImpl(const NavSlasPollImpl&) = delete;
    NavSlasPollImpl(NavSlasPollImpl&&) = delete;
    virtual ~NavSlasPollImpl() = default;
    NavSlasPollImpl& operator=(const NavSlasPollImpl&) = default;
    NavSlasPollImpl& operator=(NavSlasPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSlasPoll::NavSlasPoll() : m_pImpl(new NavSlasPollImpl) {}
NavSlasPoll::~NavSlasPoll() = default;

NavSlasPoll& NavSlasPoll::operator=(const NavSlasPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSlasPoll& NavSlasPoll::operator=(NavSlasPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSlasPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSlasPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSlasPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSlasPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSlasPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSlasPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSlasPoll::MsgIdParamType NavSlasPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSlasPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSlasPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSlasPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSlasPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSlasPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


