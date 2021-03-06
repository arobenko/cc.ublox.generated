// Generated by commsdsl2comms v3.6.2

#include "AidAlpsrv.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAlpsrv.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_idSize()
{
    using Field = ublox::message::AidAlpsrvFields<>::IdSize;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_type()
{
    using Field = ublox::message::AidAlpsrvFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ofs()
{
    using Field = ublox::message::AidAlpsrvFields<>::Ofs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_size()
{
    using Field = ublox::message::AidAlpsrvFields<>::Size;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fileId()
{
    using Field = ublox::message::AidAlpsrvFields<>::FileId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dataSize()
{
    using Field = ublox::message::AidAlpsrvFields<>::DataSize;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_id1()
{
    using Field = ublox::message::AidAlpsrvFields<>::Id1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_id2()
{
    using Field = ublox::message::AidAlpsrvFields<>::Id2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_id3()
{
    using Field = ublox::message::AidAlpsrvFields<>::Id3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_data()
{
    using Field = ublox::message::AidAlpsrvFields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_idSize());
    props.append(createProps_type());
    props.append(createProps_ofs());
    props.append(createProps_size());
    props.append(createProps_fileId());
    props.append(createProps_dataSize());
    props.append(createProps_id1());
    props.append(createProps_id2());
    props.append(createProps_id3());
    props.append(createProps_data());
    return props;
}

} // namespace

class AidAlpsrvImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAlpsrv<ublox::cc_plugin::Message>,
        AidAlpsrvImpl
    >
{
public:
    AidAlpsrvImpl() = default;
    AidAlpsrvImpl(const AidAlpsrvImpl&) = delete;
    AidAlpsrvImpl(AidAlpsrvImpl&&) = delete;
    virtual ~AidAlpsrvImpl() = default;
    AidAlpsrvImpl& operator=(const AidAlpsrvImpl&) = default;
    AidAlpsrvImpl& operator=(AidAlpsrvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlpsrv::AidAlpsrv() : m_pImpl(new AidAlpsrvImpl) {}
AidAlpsrv::~AidAlpsrv() = default;

AidAlpsrv& AidAlpsrv::operator=(const AidAlpsrv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlpsrv& AidAlpsrv::operator=(AidAlpsrv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlpsrv::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlpsrv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlpsrv::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlpsrv::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlpsrv::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlpsrv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlpsrv::MsgIdParamType AidAlpsrv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlpsrv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlpsrv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlpsrv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlpsrv::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlpsrv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


