// Generated by commsdsl2comms v3.4.0

#include "NavRelposnedPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavRelposnedPoll.h"
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

class NavRelposnedPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavRelposnedPoll<ublox::cc_plugin::Message>,
        NavRelposnedPollImpl
    >
{
public:
    NavRelposnedPollImpl() = default;
    NavRelposnedPollImpl(const NavRelposnedPollImpl&) = delete;
    NavRelposnedPollImpl(NavRelposnedPollImpl&&) = delete;
    virtual ~NavRelposnedPollImpl() = default;
    NavRelposnedPollImpl& operator=(const NavRelposnedPollImpl&) = default;
    NavRelposnedPollImpl& operator=(NavRelposnedPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavRelposnedPoll::NavRelposnedPoll() : m_pImpl(new NavRelposnedPollImpl) {}
NavRelposnedPoll::~NavRelposnedPoll() = default;

NavRelposnedPoll& NavRelposnedPoll::operator=(const NavRelposnedPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavRelposnedPoll& NavRelposnedPoll::operator=(NavRelposnedPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavRelposnedPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavRelposnedPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavRelposnedPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavRelposnedPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavRelposnedPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavRelposnedPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavRelposnedPoll::MsgIdParamType NavRelposnedPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavRelposnedPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavRelposnedPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavRelposnedPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavRelposnedPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavRelposnedPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


