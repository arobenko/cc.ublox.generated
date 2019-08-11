#include "MonSmgr.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonSmgr.h"
#include "cc_plugin/field/Itow.h"
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
    using Field = ublox::message::MonSmgrFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MonSmgrFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

static QVariantMap createProps_itow()
{
    using Field = ublox::message::MonSmgrFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

struct IntOscMembers
{
    static QVariantMap createProps_intOscState()
    {
        using Field = ublox::message::MonSmgrFields<>::IntOscMembers::IntOscState;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Autonomous", 0)
                .add("Ongoing", 1)
                .add("Steered", 2)
                .add("Idle", 4)
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::MonSmgrFields<>::IntOscMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "intOscCalib")
                .add(1U, "intOscDisc")
                .asMap();
        
    }
    
};

static QVariantMap createProps_intOsc()
{
    using Field = ublox::message::MonSmgrFields<>::IntOsc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(IntOscMembers::createProps_intOscState())
            .add(IntOscMembers::createProps_bits())
            .asMap();
    
}

struct ExtOscMembers
{
    static QVariantMap createProps_extOscState()
    {
        using Field = ublox::message::MonSmgrFields<>::ExtOscMembers::ExtOscState;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Autonomous", 0)
                .add("Ongoing", 1)
                .add("Steered", 2)
                .add("Idle", 4)
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::MonSmgrFields<>::ExtOscMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "extOscCalib")
                .add(1U, "extOscDisc")
                .asMap();
        
    }
    
};

static QVariantMap createProps_extOsc()
{
    using Field = ublox::message::MonSmgrFields<>::ExtOsc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ExtOscMembers::createProps_extOscState())
            .add(ExtOscMembers::createProps_bits())
            .asMap();
    
}

static QVariantMap createProps_discSrc()
{
    using Field = ublox::message::MonSmgrFields<>::DiscSrc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Internal", 0)
            .add("GNSS", 1)
            .add("EXTINT0", 2)
            .add("EXTINT1", 3)
            .add("HostInternal", 4)
            .add("HostExternal", 5)
            .asMap();
    
}

static QVariantMap createProps_gnss()
{
    using Field = ublox::message::MonSmgrFields<>::Gnss;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "gnssAvail")
            .asMap();
    
}

static QVariantMap createProps_extInt0()
{
    using Field = ublox::message::MonSmgrFields<>::ExtInt0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "extInt0Avail")
            .add(1U, "extInt0Type")
            .add(2U, "extInt0FeedBack")
            .asMap();
    
}

static QVariantMap createProps_extInt1()
{
    using Field = ublox::message::MonSmgrFields<>::ExtInt1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "extInt1Avail")
            .add(1U, "extInt1Type")
            .add(2U, "extInt1FeedBack")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_itow());
    props.append(createProps_intOsc());
    props.append(createProps_extOsc());
    props.append(createProps_discSrc());
    props.append(createProps_gnss());
    props.append(createProps_extInt0());
    props.append(createProps_extInt1());
    return props;
}

} // namespace

class MonSmgrImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonSmgr<ublox::cc_plugin::Message>,
        MonSmgrImpl
    >
{
public:
    MonSmgrImpl() = default;
    MonSmgrImpl(const MonSmgrImpl&) = delete;
    MonSmgrImpl(MonSmgrImpl&&) = delete;
    virtual ~MonSmgrImpl() = default;
    MonSmgrImpl& operator=(const MonSmgrImpl&) = default;
    MonSmgrImpl& operator=(MonSmgrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonSmgr::MonSmgr() : m_pImpl(new MonSmgrImpl) {}
MonSmgr::~MonSmgr() = default;

MonSmgr& MonSmgr::operator=(const MonSmgr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonSmgr& MonSmgr::operator=(MonSmgr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonSmgr::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonSmgr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonSmgr::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonSmgr::resetImpl()
{
    m_pImpl->reset();
}

bool MonSmgr::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonSmgr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonSmgr::MsgIdParamType MonSmgr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonSmgr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonSmgr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonSmgr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonSmgr::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonSmgr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


