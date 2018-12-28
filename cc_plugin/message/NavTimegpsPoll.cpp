#include "NavTimegpsPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimegpsPoll.h"
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

class NavTimegpsPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimegpsPoll<ublox::cc_plugin::Message>,
        NavTimegpsPollImpl
    >
{
public:
    NavTimegpsPollImpl() = default;
    NavTimegpsPollImpl(const NavTimegpsPollImpl&) = delete;
    NavTimegpsPollImpl(NavTimegpsPollImpl&&) = delete;
    virtual ~NavTimegpsPollImpl() = default;
    NavTimegpsPollImpl& operator=(const NavTimegpsPollImpl&) = default;
    NavTimegpsPollImpl& operator=(NavTimegpsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimegpsPoll::NavTimegpsPoll() : m_pImpl(new NavTimegpsPollImpl) {}
NavTimegpsPoll::~NavTimegpsPoll() = default;

NavTimegpsPoll& NavTimegpsPoll::operator=(const NavTimegpsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimegpsPoll& NavTimegpsPoll::operator=(NavTimegpsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimegpsPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimegpsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimegpsPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimegpsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimegpsPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimegpsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimegpsPoll::MsgIdParamType NavTimegpsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimegpsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimegpsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimegpsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimegpsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimegpsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

