// Generated by commsdsl2comms v3.6.2

#include "NavHpposllhPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavHpposllhPoll.h"
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

class NavHpposllhPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavHpposllhPoll<ublox::cc_plugin::Message>,
        NavHpposllhPollImpl
    >
{
public:
    NavHpposllhPollImpl() = default;
    NavHpposllhPollImpl(const NavHpposllhPollImpl&) = delete;
    NavHpposllhPollImpl(NavHpposllhPollImpl&&) = delete;
    virtual ~NavHpposllhPollImpl() = default;
    NavHpposllhPollImpl& operator=(const NavHpposllhPollImpl&) = default;
    NavHpposllhPollImpl& operator=(NavHpposllhPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavHpposllhPoll::NavHpposllhPoll() : m_pImpl(new NavHpposllhPollImpl) {}
NavHpposllhPoll::~NavHpposllhPoll() = default;

NavHpposllhPoll& NavHpposllhPoll::operator=(const NavHpposllhPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavHpposllhPoll& NavHpposllhPoll::operator=(NavHpposllhPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavHpposllhPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavHpposllhPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavHpposllhPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavHpposllhPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavHpposllhPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavHpposllhPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavHpposllhPoll::MsgIdParamType NavHpposllhPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavHpposllhPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavHpposllhPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavHpposllhPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavHpposllhPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavHpposllhPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


