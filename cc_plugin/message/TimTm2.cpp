// Generated by commsdsl2comms v3.6.0

#include "TimTm2.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimTm2.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_ch()
{
    using Field = ublox::message::TimTm2Fields<>::Ch;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow()
    {
        using Field = ublox::message::TimTm2Fields<>::FlagsMembers::BitsLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "mode")
                .add(1U, "run")
                .add(2U, "newFallingEdge")
                .asMap();
        
    }
    
    static QVariantMap createProps_timeBase()
    {
        using Field = ublox::message::TimTm2Fields<>::FlagsMembers::TimeBase;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Receiver", 0)
                .add("GNSS", 1)
                .add("UTC", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_bitsHigh()
    {
        using Field = ublox::message::TimTm2Fields<>::FlagsMembers::BitsHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "utc")
                .add(1U, "time")
                .add(2U, "newRisingEdge")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::TimTm2Fields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_bitsLow())
            .add(FlagsMembers::createProps_timeBase())
            .add(FlagsMembers::createProps_bitsHigh())
            .asMap();
    
}

static QVariantMap createProps_count()
{
    using Field = ublox::message::TimTm2Fields<>::Count;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_wnR()
{
    using Field = ublox::message::TimTm2Fields<>::WnR;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_wnF()
{
    using Field = ublox::message::TimTm2Fields<>::WnF;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_towMsR()
{
    using Field = ublox::message::TimTm2Fields<>::TowMsR;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_towSubMsR()
{
    using Field = ublox::message::TimTm2Fields<>::TowSubMsR;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_towMsF()
{
    using Field = ublox::message::TimTm2Fields<>::TowMsF;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_towSubMsF()
{
    using Field = ublox::message::TimTm2Fields<>::TowSubMsF;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_accEst()
{
    using Field = ublox::message::TimTm2Fields<>::AccEst;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_ch());
    props.append(createProps_flags());
    props.append(createProps_count());
    props.append(createProps_wnR());
    props.append(createProps_wnF());
    props.append(createProps_towMsR());
    props.append(createProps_towSubMsR());
    props.append(createProps_towMsF());
    props.append(createProps_towSubMsF());
    props.append(createProps_accEst());
    return props;
}

} // namespace

class TimTm2Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimTm2<ublox::cc_plugin::Message>,
        TimTm2Impl
    >
{
public:
    TimTm2Impl() = default;
    TimTm2Impl(const TimTm2Impl&) = delete;
    TimTm2Impl(TimTm2Impl&&) = delete;
    virtual ~TimTm2Impl() = default;
    TimTm2Impl& operator=(const TimTm2Impl&) = default;
    TimTm2Impl& operator=(TimTm2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimTm2::TimTm2() : m_pImpl(new TimTm2Impl) {}
TimTm2::~TimTm2() = default;

TimTm2& TimTm2::operator=(const TimTm2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTm2& TimTm2::operator=(TimTm2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTm2::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimTm2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimTm2::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimTm2::resetImpl()
{
    m_pImpl->reset();
}

bool TimTm2::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimTm2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimTm2::MsgIdParamType TimTm2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimTm2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimTm2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimTm2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimTm2::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimTm2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


