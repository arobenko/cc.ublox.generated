#include "MgaIniEop.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaIniEop.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res4.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaIniEopFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaIniEopFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaIniEopFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_d2kRef()
{
    using Field = ublox::message::MgaIniEopFields<>::D2kRef;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_d2kMax()
{
    using Field = ublox::message::MgaIniEopFields<>::D2kMax;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_xpP0()
{
    using Field = ublox::message::MgaIniEopFields<>::XpP0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_xpP1()
{
    using Field = ublox::message::MgaIniEopFields<>::XpP1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ypP0()
{
    using Field = ublox::message::MgaIniEopFields<>::YpP0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ypP1()
{
    using Field = ublox::message::MgaIniEopFields<>::YpP1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dUT1()
{
    using Field = ublox::message::MgaIniEopFields<>::DUT1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ddUT1()
{
    using Field = ublox::message::MgaIniEopFields<>::DdUT1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct Reserved2Members
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::MgaIniEopFields<>::Reserved2Members::Element;
        return cc_plugin::field::createProps_res4(Field::name());
        
    }
    
};

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaIniEopFields<>::Reserved2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(Reserved2Members::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_d2kRef());
    props.append(createProps_d2kMax());
    props.append(createProps_xpP0());
    props.append(createProps_xpP1());
    props.append(createProps_ypP0());
    props.append(createProps_ypP1());
    props.append(createProps_dUT1());
    props.append(createProps_ddUT1());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaIniEopImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaIniEop<ublox::cc_plugin::Message>,
        MgaIniEopImpl
    >
{
public:
    MgaIniEopImpl() = default;
    MgaIniEopImpl(const MgaIniEopImpl&) = delete;
    MgaIniEopImpl(MgaIniEopImpl&&) = delete;
    virtual ~MgaIniEopImpl() = default;
    MgaIniEopImpl& operator=(const MgaIniEopImpl&) = default;
    MgaIniEopImpl& operator=(MgaIniEopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniEop::MgaIniEop() : m_pImpl(new MgaIniEopImpl) {}
MgaIniEop::~MgaIniEop() = default;

MgaIniEop& MgaIniEop::operator=(const MgaIniEop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniEop& MgaIniEop::operator=(MgaIniEop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniEop::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniEop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniEop::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniEop::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniEop::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniEop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniEop::MsgIdParamType MgaIniEop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniEop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniEop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniEop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniEop::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniEop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

