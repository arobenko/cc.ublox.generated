// Generated by commsdsl2comms v3.4.0

#include "NavResetodo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavResetodo.h"
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

class NavResetodoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavResetodo<ublox::cc_plugin::Message>,
        NavResetodoImpl
    >
{
public:
    NavResetodoImpl() = default;
    NavResetodoImpl(const NavResetodoImpl&) = delete;
    NavResetodoImpl(NavResetodoImpl&&) = delete;
    virtual ~NavResetodoImpl() = default;
    NavResetodoImpl& operator=(const NavResetodoImpl&) = default;
    NavResetodoImpl& operator=(NavResetodoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavResetodo::NavResetodo() : m_pImpl(new NavResetodoImpl) {}
NavResetodo::~NavResetodo() = default;

NavResetodo& NavResetodo::operator=(const NavResetodo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavResetodo& NavResetodo::operator=(NavResetodo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavResetodo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavResetodo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavResetodo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavResetodo::resetImpl()
{
    m_pImpl->reset();
}

bool NavResetodo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavResetodo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavResetodo::MsgIdParamType NavResetodo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavResetodo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavResetodo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavResetodo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavResetodo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavResetodo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


