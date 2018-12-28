#include "CfgMsgCurrent.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgMsgCurrent.h"
#include "cc_plugin/field/MsgId.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId()
{
    using Field = ublox::message::CfgMsgCurrentFields<>::MsgId;
    return cc_plugin::field::createProps_msgId(Field::name());
    
}

static QVariantMap createProps_rate()
{
    using Field = ublox::message::CfgMsgCurrentFields<>::Rate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId());
    props.append(createProps_rate());
    return props;
}

} // namespace

class CfgMsgCurrentImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgMsgCurrent<ublox::cc_plugin::Message>,
        CfgMsgCurrentImpl
    >
{
public:
    CfgMsgCurrentImpl() = default;
    CfgMsgCurrentImpl(const CfgMsgCurrentImpl&) = delete;
    CfgMsgCurrentImpl(CfgMsgCurrentImpl&&) = delete;
    virtual ~CfgMsgCurrentImpl() = default;
    CfgMsgCurrentImpl& operator=(const CfgMsgCurrentImpl&) = default;
    CfgMsgCurrentImpl& operator=(CfgMsgCurrentImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgMsgCurrent::CfgMsgCurrent() : m_pImpl(new CfgMsgCurrentImpl) {}
CfgMsgCurrent::~CfgMsgCurrent() = default;

CfgMsgCurrent& CfgMsgCurrent::operator=(const CfgMsgCurrent& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgMsgCurrent& CfgMsgCurrent::operator=(CfgMsgCurrent&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgMsgCurrent::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgMsgCurrent::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgMsgCurrent::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgMsgCurrent::resetImpl()
{
    m_pImpl->reset();
}

bool CfgMsgCurrent::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgMsgCurrent*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgMsgCurrent::MsgIdParamType CfgMsgCurrent::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgMsgCurrent::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgMsgCurrent::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgMsgCurrent::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgMsgCurrent::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgMsgCurrent::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

