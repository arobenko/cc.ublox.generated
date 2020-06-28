// Generated by commsdsl2comms v3.4.2

#include "MgaFlashEph.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaFlashEph.h"
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
    using Field = ublox::message::MgaFlashEphFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaFlashEphFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_sequence()
{
    using Field = ublox::message::MgaFlashEphFields<>::Sequence;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_size()
{
    using Field = ublox::message::MgaFlashEphFields<>::Size;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_data()
{
    using Field = ublox::message::MgaFlashEphFields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_sequence());
    props.append(createProps_size());
    props.append(createProps_data());
    return props;
}

} // namespace

class MgaFlashEphImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaFlashEph<ublox::cc_plugin::Message>,
        MgaFlashEphImpl
    >
{
public:
    MgaFlashEphImpl() = default;
    MgaFlashEphImpl(const MgaFlashEphImpl&) = delete;
    MgaFlashEphImpl(MgaFlashEphImpl&&) = delete;
    virtual ~MgaFlashEphImpl() = default;
    MgaFlashEphImpl& operator=(const MgaFlashEphImpl&) = default;
    MgaFlashEphImpl& operator=(MgaFlashEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaFlashEph::MgaFlashEph() : m_pImpl(new MgaFlashEphImpl) {}
MgaFlashEph::~MgaFlashEph() = default;

MgaFlashEph& MgaFlashEph::operator=(const MgaFlashEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaFlashEph& MgaFlashEph::operator=(MgaFlashEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaFlashEph::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaFlashEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaFlashEph::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaFlashEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaFlashEph::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaFlashEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaFlashEph::MsgIdParamType MgaFlashEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaFlashEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaFlashEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaFlashEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaFlashEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaFlashEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


