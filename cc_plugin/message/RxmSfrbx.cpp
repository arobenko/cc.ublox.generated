// Generated by commsdsl2comms v3.5.2

#include "RxmSfrbx.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmSfrbx.h"
#include "cc_plugin/field/GnssId.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_gnssId()
{
    using Field = ublox::message::RxmSfrbxFields<>::GnssId;
    auto props = cc_plugin::field::createProps_gnssId(Field::name());
    return props;
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::RxmSfrbxFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::RxmSfrbxFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_freqId()
{
    using Field = ublox::message::RxmSfrbxFields<>::FreqId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numWords()
{
    using Field = ublox::message::RxmSfrbxFields<>::NumWords;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::RxmSfrbxFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::RxmSfrbxFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::RxmSfrbxFields<>::Reserved3;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

struct DwrdMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::RxmSfrbxFields<>::DwrdMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_dwrd()
{
    using Field = ublox::message::RxmSfrbxFields<>::Dwrd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(DwrdMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_gnssId());
    props.append(createProps_svid());
    props.append(createProps_reserved1());
    props.append(createProps_freqId());
    props.append(createProps_numWords());
    props.append(createProps_reserved2());
    props.append(createProps_version());
    props.append(createProps_reserved3());
    props.append(createProps_dwrd());
    return props;
}

} // namespace

class RxmSfrbxImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmSfrbx<ublox::cc_plugin::Message>,
        RxmSfrbxImpl
    >
{
public:
    RxmSfrbxImpl() = default;
    RxmSfrbxImpl(const RxmSfrbxImpl&) = delete;
    RxmSfrbxImpl(RxmSfrbxImpl&&) = delete;
    virtual ~RxmSfrbxImpl() = default;
    RxmSfrbxImpl& operator=(const RxmSfrbxImpl&) = default;
    RxmSfrbxImpl& operator=(RxmSfrbxImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmSfrbx::RxmSfrbx() : m_pImpl(new RxmSfrbxImpl) {}
RxmSfrbx::~RxmSfrbx() = default;

RxmSfrbx& RxmSfrbx::operator=(const RxmSfrbx& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmSfrbx& RxmSfrbx::operator=(RxmSfrbx&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmSfrbx::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmSfrbx::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmSfrbx::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmSfrbx::resetImpl()
{
    m_pImpl->reset();
}

bool RxmSfrbx::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmSfrbx*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmSfrbx::MsgIdParamType RxmSfrbx::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmSfrbx::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmSfrbx::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmSfrbx::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmSfrbx::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmSfrbx::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


