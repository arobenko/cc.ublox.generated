#include "TimSvin.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimSvin.h"
#include "cc_plugin/field/Res2.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_dur()
{
    using Field = ublox::message::TimSvinFields<>::Dur;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_meanX()
{
    using Field = ublox::message::TimSvinFields<>::MeanX;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_meanY()
{
    using Field = ublox::message::TimSvinFields<>::MeanY;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_meanZ()
{
    using Field = ublox::message::TimSvinFields<>::MeanZ;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_meanV()
{
    using Field = ublox::message::TimSvinFields<>::MeanV;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_obs()
{
    using Field = ublox::message::TimSvinFields<>::Obs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_valid()
{
    using Field = ublox::message::TimSvinFields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_active()
{
    using Field = ublox::message::TimSvinFields<>::Active;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::TimSvinFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_dur());
    props.append(createProps_meanX());
    props.append(createProps_meanY());
    props.append(createProps_meanZ());
    props.append(createProps_meanV());
    props.append(createProps_obs());
    props.append(createProps_valid());
    props.append(createProps_active());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class TimSvinImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimSvin<ublox::cc_plugin::Message>,
        TimSvinImpl
    >
{
public:
    TimSvinImpl() = default;
    TimSvinImpl(const TimSvinImpl&) = delete;
    TimSvinImpl(TimSvinImpl&&) = delete;
    virtual ~TimSvinImpl() = default;
    TimSvinImpl& operator=(const TimSvinImpl&) = default;
    TimSvinImpl& operator=(TimSvinImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimSvin::TimSvin() : m_pImpl(new TimSvinImpl) {}
TimSvin::~TimSvin() = default;

TimSvin& TimSvin::operator=(const TimSvin& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimSvin& TimSvin::operator=(TimSvin&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimSvin::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimSvin::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimSvin::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimSvin::resetImpl()
{
    m_pImpl->reset();
}

bool TimSvin::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimSvin*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimSvin::MsgIdParamType TimSvin::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimSvin::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimSvin::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimSvin::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimSvin::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimSvin::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


