// Generated by commsdsl2comms v3.6.2

#include "NavAopstatusPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavAopstatusPoll.h"
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

class NavAopstatusPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavAopstatusPoll<ublox::cc_plugin::Message>,
        NavAopstatusPollImpl
    >
{
public:
    NavAopstatusPollImpl() = default;
    NavAopstatusPollImpl(const NavAopstatusPollImpl&) = delete;
    NavAopstatusPollImpl(NavAopstatusPollImpl&&) = delete;
    virtual ~NavAopstatusPollImpl() = default;
    NavAopstatusPollImpl& operator=(const NavAopstatusPollImpl&) = default;
    NavAopstatusPollImpl& operator=(NavAopstatusPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAopstatusPoll::NavAopstatusPoll() : m_pImpl(new NavAopstatusPollImpl) {}
NavAopstatusPoll::~NavAopstatusPoll() = default;

NavAopstatusPoll& NavAopstatusPoll::operator=(const NavAopstatusPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAopstatusPoll& NavAopstatusPoll::operator=(NavAopstatusPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAopstatusPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAopstatusPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAopstatusPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAopstatusPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavAopstatusPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAopstatusPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAopstatusPoll::MsgIdParamType NavAopstatusPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAopstatusPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAopstatusPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAopstatusPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAopstatusPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAopstatusPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


