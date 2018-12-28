#include "NavDgpsPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavDgpsPoll.h"
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

class NavDgpsPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavDgpsPoll<ublox::cc_plugin::Message>,
        NavDgpsPollImpl
    >
{
public:
    NavDgpsPollImpl() = default;
    NavDgpsPollImpl(const NavDgpsPollImpl&) = delete;
    NavDgpsPollImpl(NavDgpsPollImpl&&) = delete;
    virtual ~NavDgpsPollImpl() = default;
    NavDgpsPollImpl& operator=(const NavDgpsPollImpl&) = default;
    NavDgpsPollImpl& operator=(NavDgpsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavDgpsPoll::NavDgpsPoll() : m_pImpl(new NavDgpsPollImpl) {}
NavDgpsPoll::~NavDgpsPoll() = default;

NavDgpsPoll& NavDgpsPoll::operator=(const NavDgpsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavDgpsPoll& NavDgpsPoll::operator=(NavDgpsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavDgpsPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavDgpsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavDgpsPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavDgpsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavDgpsPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavDgpsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavDgpsPoll::MsgIdParamType NavDgpsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavDgpsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavDgpsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavDgpsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavDgpsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavDgpsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

