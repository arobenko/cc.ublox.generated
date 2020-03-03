// Generated by commsdsl2comms v3.3.3

#include "NavSvinfoPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSvinfoPoll.h"
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

class NavSvinfoPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSvinfoPoll<ublox::cc_plugin::Message>,
        NavSvinfoPollImpl
    >
{
public:
    NavSvinfoPollImpl() = default;
    NavSvinfoPollImpl(const NavSvinfoPollImpl&) = delete;
    NavSvinfoPollImpl(NavSvinfoPollImpl&&) = delete;
    virtual ~NavSvinfoPollImpl() = default;
    NavSvinfoPollImpl& operator=(const NavSvinfoPollImpl&) = default;
    NavSvinfoPollImpl& operator=(NavSvinfoPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSvinfoPoll::NavSvinfoPoll() : m_pImpl(new NavSvinfoPollImpl) {}
NavSvinfoPoll::~NavSvinfoPoll() = default;

NavSvinfoPoll& NavSvinfoPoll::operator=(const NavSvinfoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvinfoPoll& NavSvinfoPoll::operator=(NavSvinfoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSvinfoPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSvinfoPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSvinfoPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSvinfoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvinfoPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSvinfoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSvinfoPoll::MsgIdParamType NavSvinfoPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSvinfoPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSvinfoPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSvinfoPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSvinfoPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSvinfoPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


