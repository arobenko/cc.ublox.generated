#include "NavSolPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSolPoll.h"
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

class NavSolPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSolPoll<ublox::cc_plugin::Message>,
        NavSolPollImpl
    >
{
public:
    NavSolPollImpl() = default;
    NavSolPollImpl(const NavSolPollImpl&) = delete;
    NavSolPollImpl(NavSolPollImpl&&) = delete;
    virtual ~NavSolPollImpl() = default;
    NavSolPollImpl& operator=(const NavSolPollImpl&) = default;
    NavSolPollImpl& operator=(NavSolPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSolPoll::NavSolPoll() : m_pImpl(new NavSolPollImpl) {}
NavSolPoll::~NavSolPoll() = default;

NavSolPoll& NavSolPoll::operator=(const NavSolPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSolPoll& NavSolPoll::operator=(NavSolPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSolPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSolPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSolPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSolPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSolPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSolPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSolPoll::MsgIdParamType NavSolPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSolPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSolPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSolPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSolPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSolPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

