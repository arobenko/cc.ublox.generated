// Generated by commsdsl2comms v3.5.1

#include "NavTimelsPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimelsPoll.h"
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

class NavTimelsPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimelsPoll<ublox::cc_plugin::Message>,
        NavTimelsPollImpl
    >
{
public:
    NavTimelsPollImpl() = default;
    NavTimelsPollImpl(const NavTimelsPollImpl&) = delete;
    NavTimelsPollImpl(NavTimelsPollImpl&&) = delete;
    virtual ~NavTimelsPollImpl() = default;
    NavTimelsPollImpl& operator=(const NavTimelsPollImpl&) = default;
    NavTimelsPollImpl& operator=(NavTimelsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimelsPoll::NavTimelsPoll() : m_pImpl(new NavTimelsPollImpl) {}
NavTimelsPoll::~NavTimelsPoll() = default;

NavTimelsPoll& NavTimelsPoll::operator=(const NavTimelsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimelsPoll& NavTimelsPoll::operator=(NavTimelsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimelsPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimelsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimelsPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimelsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimelsPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimelsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimelsPoll::MsgIdParamType NavTimelsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimelsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimelsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimelsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimelsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimelsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


