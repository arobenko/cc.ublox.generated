#include "NavTimebdsPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimebdsPoll.h"
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

class NavTimebdsPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimebdsPoll<ublox::cc_plugin::Message>,
        NavTimebdsPollImpl
    >
{
public:
    NavTimebdsPollImpl() = default;
    NavTimebdsPollImpl(const NavTimebdsPollImpl&) = delete;
    NavTimebdsPollImpl(NavTimebdsPollImpl&&) = delete;
    virtual ~NavTimebdsPollImpl() = default;
    NavTimebdsPollImpl& operator=(const NavTimebdsPollImpl&) = default;
    NavTimebdsPollImpl& operator=(NavTimebdsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimebdsPoll::NavTimebdsPoll() : m_pImpl(new NavTimebdsPollImpl) {}
NavTimebdsPoll::~NavTimebdsPoll() = default;

NavTimebdsPoll& NavTimebdsPoll::operator=(const NavTimebdsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimebdsPoll& NavTimebdsPoll::operator=(NavTimebdsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimebdsPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimebdsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimebdsPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimebdsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimebdsPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimebdsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimebdsPoll::MsgIdParamType NavTimebdsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimebdsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimebdsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimebdsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimebdsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimebdsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

