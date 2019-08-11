#include "TimDosc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimDosc.h"
#include "cc_plugin/field/Res3.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_version()
{
    using Field = ublox::message::TimDoscFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::TimDoscFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

static QVariantMap createProps_value()
{
    using Field = ublox::message::TimDoscFields<>::Value;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_value());
    return props;
}

} // namespace

class TimDoscImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimDosc<ublox::cc_plugin::Message>,
        TimDoscImpl
    >
{
public:
    TimDoscImpl() = default;
    TimDoscImpl(const TimDoscImpl&) = delete;
    TimDoscImpl(TimDoscImpl&&) = delete;
    virtual ~TimDoscImpl() = default;
    TimDoscImpl& operator=(const TimDoscImpl&) = default;
    TimDoscImpl& operator=(TimDoscImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimDosc::TimDosc() : m_pImpl(new TimDoscImpl) {}
TimDosc::~TimDosc() = default;

TimDosc& TimDosc::operator=(const TimDosc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimDosc& TimDosc::operator=(TimDosc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimDosc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimDosc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimDosc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimDosc::resetImpl()
{
    m_pImpl->reset();
}

bool TimDosc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimDosc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimDosc::MsgIdParamType TimDosc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimDosc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimDosc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimDosc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimDosc::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimDosc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


