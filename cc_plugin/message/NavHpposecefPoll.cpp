#include "NavHpposecefPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavHpposecefPoll.h"
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

class NavHpposecefPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavHpposecefPoll<ublox::cc_plugin::Message>,
        NavHpposecefPollImpl
    >
{
public:
    NavHpposecefPollImpl() = default;
    NavHpposecefPollImpl(const NavHpposecefPollImpl&) = delete;
    NavHpposecefPollImpl(NavHpposecefPollImpl&&) = delete;
    virtual ~NavHpposecefPollImpl() = default;
    NavHpposecefPollImpl& operator=(const NavHpposecefPollImpl&) = default;
    NavHpposecefPollImpl& operator=(NavHpposecefPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavHpposecefPoll::NavHpposecefPoll() : m_pImpl(new NavHpposecefPollImpl) {}
NavHpposecefPoll::~NavHpposecefPoll() = default;

NavHpposecefPoll& NavHpposecefPoll::operator=(const NavHpposecefPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavHpposecefPoll& NavHpposecefPoll::operator=(NavHpposecefPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavHpposecefPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavHpposecefPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavHpposecefPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavHpposecefPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavHpposecefPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavHpposecefPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavHpposecefPoll::MsgIdParamType NavHpposecefPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavHpposecefPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavHpposecefPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavHpposecefPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavHpposecefPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavHpposecefPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

