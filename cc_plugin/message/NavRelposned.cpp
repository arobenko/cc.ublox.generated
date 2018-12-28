#include "NavRelposned.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavRelposned.h"
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

static QVariantMap createProps_version()
{
    using Field = ublox::message::NavRelposnedFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavRelposnedFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_refStationId()
{
    using Field = ublox::message::NavRelposnedFields<>::RefStationId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavRelposnedFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_relPosN()
{
    using Field = ublox::message::NavRelposnedFields<>::RelPosN;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_relPosE()
{
    using Field = ublox::message::NavRelposnedFields<>::RelPosE;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_relPosD()
{
    using Field = ublox::message::NavRelposnedFields<>::RelPosD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_relPosHPN()
{
    using Field = ublox::message::NavRelposnedFields<>::RelPosHPN;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_relPosHPE()
{
    using Field = ublox::message::NavRelposnedFields<>::RelPosHPE;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_relPosHPD()
{
    using Field = ublox::message::NavRelposnedFields<>::RelPosHPD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavRelposnedFields<>::Reserved2;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_accN()
{
    using Field = ublox::message::NavRelposnedFields<>::AccN;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_accE()
{
    using Field = ublox::message::NavRelposnedFields<>::AccE;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_accD()
{
    using Field = ublox::message::NavRelposnedFields<>::AccD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow()
    {
        using Field = ublox::message::NavRelposnedFields<>::FlagsMembers::BitsLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "gnssFixOK")
                .add(1U, "diffSoln")
                .add(2U, "relPosValid")
                .asMap();
        
    }
    
    static QVariantMap createProps_carrSoln()
    {
        using Field = ublox::message::NavRelposnedFields<>::FlagsMembers::CarrSoln;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("No carrier", 0)
                .add("Float solution", 1)
                .add("Fixed solution", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_bitsHigh()
    {
        using Field = ublox::message::NavRelposnedFields<>::FlagsMembers::BitsHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "isMoving")
                .add(1U, "refPosMiss")
                .add(2U, "refObsMiss")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::NavRelposnedFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_bitsLow())
            .add(FlagsMembers::createProps_carrSoln())
            .add(FlagsMembers::createProps_bitsHigh())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_refStationId());
    props.append(createProps_itow());
    props.append(createProps_relPosN());
    props.append(createProps_relPosE());
    props.append(createProps_relPosD());
    props.append(createProps_relPosHPN());
    props.append(createProps_relPosHPE());
    props.append(createProps_relPosHPD());
    props.append(createProps_reserved2());
    props.append(createProps_accN());
    props.append(createProps_accE());
    props.append(createProps_accD());
    props.append(createProps_flags());
    return props;
}

} // namespace

class NavRelposnedImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavRelposned<ublox::cc_plugin::Message>,
        NavRelposnedImpl
    >
{
public:
    NavRelposnedImpl() = default;
    NavRelposnedImpl(const NavRelposnedImpl&) = delete;
    NavRelposnedImpl(NavRelposnedImpl&&) = delete;
    virtual ~NavRelposnedImpl() = default;
    NavRelposnedImpl& operator=(const NavRelposnedImpl&) = default;
    NavRelposnedImpl& operator=(NavRelposnedImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavRelposned::NavRelposned() : m_pImpl(new NavRelposnedImpl) {}
NavRelposned::~NavRelposned() = default;

NavRelposned& NavRelposned::operator=(const NavRelposned& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavRelposned& NavRelposned::operator=(NavRelposned&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavRelposned::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavRelposned::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavRelposned::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavRelposned::resetImpl()
{
    m_pImpl->reset();
}

bool NavRelposned::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavRelposned*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavRelposned::MsgIdParamType NavRelposned::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavRelposned::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavRelposned::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavRelposned::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavRelposned::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavRelposned::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

