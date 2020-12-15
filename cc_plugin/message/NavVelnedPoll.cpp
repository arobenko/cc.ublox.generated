// Generated by commsdsl2comms v3.6.0

#include "NavVelnedPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavVelnedPoll.h"
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

class NavVelnedPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavVelnedPoll<ublox::cc_plugin::Message>,
        NavVelnedPollImpl
    >
{
public:
    NavVelnedPollImpl() = default;
    NavVelnedPollImpl(const NavVelnedPollImpl&) = delete;
    NavVelnedPollImpl(NavVelnedPollImpl&&) = delete;
    virtual ~NavVelnedPollImpl() = default;
    NavVelnedPollImpl& operator=(const NavVelnedPollImpl&) = default;
    NavVelnedPollImpl& operator=(NavVelnedPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavVelnedPoll::NavVelnedPoll() : m_pImpl(new NavVelnedPollImpl) {}
NavVelnedPoll::~NavVelnedPoll() = default;

NavVelnedPoll& NavVelnedPoll::operator=(const NavVelnedPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelnedPoll& NavVelnedPoll::operator=(NavVelnedPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavVelnedPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavVelnedPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavVelnedPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavVelnedPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelnedPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavVelnedPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavVelnedPoll::MsgIdParamType NavVelnedPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavVelnedPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavVelnedPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavVelnedPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavVelnedPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavVelnedPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


