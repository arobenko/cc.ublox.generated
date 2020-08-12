// Generated by commsdsl2comms v3.5.0

#include "MgaIniPosLlh.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaIniPosLlh.h"
#include "cc_plugin/field/Lat.h"
#include "cc_plugin/field/Lon.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_lat()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::Lat;
    auto props = cc_plugin::field::createProps_lat(Field::name());
    return props;
    
}

static QVariantMap createProps_lon()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::Lon;
    auto props = cc_plugin::field::createProps_lon(Field::name());
    return props;
    
}

static QVariantMap createProps_alt()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::Alt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_posAcc()
{
    using Field = ublox::message::MgaIniPosLlhFields<>::PosAcc;
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
    props.append(createProps_reserved1());
    props.append(createProps_lat());
    props.append(createProps_lon());
    props.append(createProps_alt());
    props.append(createProps_posAcc());
    return props;
}

} // namespace

class MgaIniPosLlhImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaIniPosLlh<ublox::cc_plugin::Message>,
        MgaIniPosLlhImpl
    >
{
public:
    MgaIniPosLlhImpl() = default;
    MgaIniPosLlhImpl(const MgaIniPosLlhImpl&) = delete;
    MgaIniPosLlhImpl(MgaIniPosLlhImpl&&) = delete;
    virtual ~MgaIniPosLlhImpl() = default;
    MgaIniPosLlhImpl& operator=(const MgaIniPosLlhImpl&) = default;
    MgaIniPosLlhImpl& operator=(MgaIniPosLlhImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniPosLlh::MgaIniPosLlh() : m_pImpl(new MgaIniPosLlhImpl) {}
MgaIniPosLlh::~MgaIniPosLlh() = default;

MgaIniPosLlh& MgaIniPosLlh::operator=(const MgaIniPosLlh& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniPosLlh& MgaIniPosLlh::operator=(MgaIniPosLlh&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniPosLlh::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniPosLlh::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniPosLlh::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniPosLlh::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniPosLlh::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniPosLlh*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniPosLlh::MsgIdParamType MgaIniPosLlh::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniPosLlh::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniPosLlh::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniPosLlh::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniPosLlh::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniPosLlh::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


