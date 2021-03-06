// Generated by commsdsl2comms v3.6.2

#include "MonMsgpp.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonMsgpp.h"
#include "cc_plugin/field/MonMsgppCount.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msg1()
{
    using Field = ublox::message::MonMsgppFields<>::Msg1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_monMsgppCount(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

static QVariantMap createProps_msg2()
{
    using Field = ublox::message::MonMsgppFields<>::Msg2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_monMsgppCount(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

static QVariantMap createProps_msg3()
{
    using Field = ublox::message::MonMsgppFields<>::Msg3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_monMsgppCount(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

static QVariantMap createProps_msg4()
{
    using Field = ublox::message::MonMsgppFields<>::Msg4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_monMsgppCount(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

static QVariantMap createProps_msg5()
{
    using Field = ublox::message::MonMsgppFields<>::Msg5;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_monMsgppCount(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

static QVariantMap createProps_msg6()
{
    using Field = ublox::message::MonMsgppFields<>::Msg6;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_monMsgppCount(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

struct SkippedMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::MonMsgppFields<>::SkippedMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_skipped()
{
    using Field = ublox::message::MonMsgppFields<>::Skipped;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(SkippedMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msg1());
    props.append(createProps_msg2());
    props.append(createProps_msg3());
    props.append(createProps_msg4());
    props.append(createProps_msg5());
    props.append(createProps_msg6());
    props.append(createProps_skipped());
    return props;
}

} // namespace

class MonMsgppImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonMsgpp<ublox::cc_plugin::Message>,
        MonMsgppImpl
    >
{
public:
    MonMsgppImpl() = default;
    MonMsgppImpl(const MonMsgppImpl&) = delete;
    MonMsgppImpl(MonMsgppImpl&&) = delete;
    virtual ~MonMsgppImpl() = default;
    MonMsgppImpl& operator=(const MonMsgppImpl&) = default;
    MonMsgppImpl& operator=(MonMsgppImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonMsgpp::MonMsgpp() : m_pImpl(new MonMsgppImpl) {}
MonMsgpp::~MonMsgpp() = default;

MonMsgpp& MonMsgpp::operator=(const MonMsgpp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonMsgpp& MonMsgpp::operator=(MonMsgpp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonMsgpp::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonMsgpp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonMsgpp::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonMsgpp::resetImpl()
{
    m_pImpl->reset();
}

bool MonMsgpp::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonMsgpp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonMsgpp::MsgIdParamType MonMsgpp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonMsgpp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonMsgpp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonMsgpp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonMsgpp::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonMsgpp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


