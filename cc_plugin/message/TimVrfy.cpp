#include "TimVrfy.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimVrfy.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res1.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_itow()
{
    using Field = ublox::message::TimVrfyFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_frac()
{
    using Field = ublox::message::TimVrfyFields<>::Frac;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaMs()
{
    using Field = ublox::message::TimVrfyFields<>::DeltaMs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaNs()
{
    using Field = ublox::message::TimVrfyFields<>::DeltaNs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_wno()
{
    using Field = ublox::message::TimVrfyFields<>::Wno;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_src()
    {
        using Field = ublox::message::TimVrfyFields<>::FlagsMembers::Src;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("NoAiding", 0)
                .add("RTC", 1)
                .add("AidIni", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_reserved()
    {
        using Field = ublox::message::TimVrfyFields<>::FlagsMembers::Reserved;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::TimVrfyFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_src())
            .add(FlagsMembers::createProps_reserved())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::TimVrfyFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_frac());
    props.append(createProps_deltaMs());
    props.append(createProps_deltaNs());
    props.append(createProps_wno());
    props.append(createProps_flags());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class TimVrfyImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimVrfy<ublox::cc_plugin::Message>,
        TimVrfyImpl
    >
{
public:
    TimVrfyImpl() = default;
    TimVrfyImpl(const TimVrfyImpl&) = delete;
    TimVrfyImpl(TimVrfyImpl&&) = delete;
    virtual ~TimVrfyImpl() = default;
    TimVrfyImpl& operator=(const TimVrfyImpl&) = default;
    TimVrfyImpl& operator=(TimVrfyImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVrfy::TimVrfy() : m_pImpl(new TimVrfyImpl) {}
TimVrfy::~TimVrfy() = default;

TimVrfy& TimVrfy::operator=(const TimVrfy& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVrfy& TimVrfy::operator=(TimVrfy&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimVrfy::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVrfy::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVrfy::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVrfy::resetImpl()
{
    m_pImpl->reset();
}

bool TimVrfy::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVrfy*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVrfy::MsgIdParamType TimVrfy::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVrfy::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVrfy::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVrfy::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVrfy::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVrfy::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


