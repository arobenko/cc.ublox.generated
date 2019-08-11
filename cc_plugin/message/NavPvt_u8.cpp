#include "NavPvt_u8.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavPvt_u8.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/Dop.h"
#include "cc_plugin/field/GpsFix.h"
#include "cc_plugin/field/HAcc.h"
#include "cc_plugin/field/HMSL.h"
#include "cc_plugin/field/Heading.h"
#include "cc_plugin/field/HeadingAcc.h"
#include "cc_plugin/field/Height.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Lat.h"
#include "cc_plugin/field/Lon.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res4.h"
#include "cc_plugin/field/Sec.h"
#include "cc_plugin/field/VAcc.h"
#include "cc_plugin/field/Vel.h"
#include "cc_plugin/field/Year.h"

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
    using Field = ublox::message::NavPvt_u8Fields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Year;
    auto props = cc_plugin::field::createProps_year(Field::name());
    return props;
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Month;
    auto props = cc_plugin::field::createProps_month(Field::name());
    return props;
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Day;
    auto props = cc_plugin::field::createProps_day(Field::name());
    return props;
    
}

static QVariantMap createProps_hour()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Hour;
    auto props = cc_plugin::field::createProps_hour(Field::name());
    return props;
    
}

static QVariantMap createProps_min()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Min;
    auto props = cc_plugin::field::createProps_min(Field::name());
    return props;
    
}

static QVariantMap createProps_sec()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Sec;
    auto props = cc_plugin::field::createProps_sec(Field::name());
    return props;
    
}

static QVariantMap createProps_valid()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "validDate")
            .add(1U, "validTime")
            .add(2U, "fullyResolved")
            .asMap();
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::NavPvt_u8Fields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_nano()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Nano;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fixType()
{
    using Field = ublox::message::NavPvt_u8Fields<>::FixType;
    auto props = cc_plugin::field::createProps_gpsFix(Field::name());
    return props;
    
}

struct FlagsMembers
{
    static QVariantMap createProps_lowBits()
    {
        using Field = ublox::message::NavPvt_u8Fields<>::FlagsMembers::LowBits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "gnssFixOK")
                .add(1U, "diffSoln")
                .asMap();
        
    }
    
    static QVariantMap createProps_psmState()
    {
        using Field = ublox::message::NavPvt_u8Fields<>::FlagsMembers::PsmState;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("N/A", 0)
                .add("ENABLED", 1)
                .add("ACQUISITION", 2)
                .add("TRACKING", 3)
                .add("POWER OPTIMIZED TRACKING", 4)
                .add("INACTIVE", 5)
                .asMap();
        
    }
    
    static QVariantMap createProps_midBits()
    {
        using Field = ublox::message::NavPvt_u8Fields<>::FlagsMembers::MidBits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "headVehValid")
                .asMap();
        
    }
    
    static QVariantMap createProps_carrSoln()
    {
        using Field = ublox::message::NavPvt_u8Fields<>::FlagsMembers::CarrSoln;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("No carrier", 0)
                .add("Float solution", 1)
                .add("Fixed solution", 2)
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_lowBits())
            .add(FlagsMembers::createProps_psmState())
            .add(FlagsMembers::createProps_midBits())
            .add(FlagsMembers::createProps_carrSoln())
            .asMap();
    
}

static QVariantMap createProps_flags2()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Flags2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(5U, "confirmedAvai")
            .add(6U, "confirmedDate")
            .add(7U, "confirmedTime")
            .asMap();
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::NavPvt_u8Fields<>::NumSV;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_lon()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Lon;
    auto props = cc_plugin::field::createProps_lon(Field::name());
    return props;
    
}

static QVariantMap createProps_lat()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Lat;
    auto props = cc_plugin::field::createProps_lat(Field::name());
    return props;
    
}

static QVariantMap createProps_height()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Height;
    auto props = cc_plugin::field::createProps_height(Field::name());
    return props;
    
}

static QVariantMap createProps_hMSL()
{
    using Field = ublox::message::NavPvt_u8Fields<>::HMSL;
    auto props = cc_plugin::field::createProps_hMSL(Field::name());
    return props;
    
}

static QVariantMap createProps_hAcc()
{
    using Field = ublox::message::NavPvt_u8Fields<>::HAcc;
    auto props = cc_plugin::field::createProps_hAcc(Field::name());
    return props;
    
}

static QVariantMap createProps_vAcc()
{
    using Field = ublox::message::NavPvt_u8Fields<>::VAcc;
    auto props = cc_plugin::field::createProps_vAcc(Field::name());
    return props;
    
}

static QVariantMap createProps_velN()
{
    using Field = ublox::message::NavPvt_u8Fields<>::VelN;
    auto props = cc_plugin::field::createProps_vel(Field::name());
    return props;
    
}

static QVariantMap createProps_velE()
{
    using Field = ublox::message::NavPvt_u8Fields<>::VelE;
    auto props = cc_plugin::field::createProps_vel(Field::name());
    return props;
    
}

static QVariantMap createProps_velD()
{
    using Field = ublox::message::NavPvt_u8Fields<>::VelD;
    auto props = cc_plugin::field::createProps_vel(Field::name());
    return props;
    
}

static QVariantMap createProps_gSpeed()
{
    using Field = ublox::message::NavPvt_u8Fields<>::GSpeed;
    auto props = cc_plugin::field::createProps_vel(Field::name());
    return props;
    
}

static QVariantMap createProps_heading()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Heading;
    auto props = cc_plugin::field::createProps_heading(Field::name());
    return props;
    
}

static QVariantMap createProps_sAcc()
{
    using Field = ublox::message::NavPvt_u8Fields<>::SAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_headingAcc()
{
    using Field = ublox::message::NavPvt_u8Fields<>::HeadingAcc;
    auto props = cc_plugin::field::createProps_headingAcc(Field::name());
    return props;
    
}

static QVariantMap createProps_pDop()
{
    using Field = ublox::message::NavPvt_u8Fields<>::PDop;
    auto props = cc_plugin::field::createProps_dop(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::NavPvt_u8Fields<>::Reserved3;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

static QVariantMap createProps_headVeh()
{
    using Field = ublox::message::NavPvt_u8Fields<>::HeadVeh;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(5U)
            .asMap();
    
}

static QVariantMap createProps_magDec()
{
    using Field = ublox::message::NavPvt_u8Fields<>::MagDec;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(2U)
            .asMap();
    
}

static QVariantMap createProps_magAcc()
{
    using Field = ublox::message::NavPvt_u8Fields<>::MagAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(2U)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_hour());
    props.append(createProps_min());
    props.append(createProps_sec());
    props.append(createProps_valid());
    props.append(createProps_tAcc());
    props.append(createProps_nano());
    props.append(createProps_fixType());
    props.append(createProps_flags());
    props.append(createProps_flags2());
    props.append(createProps_numSV());
    props.append(createProps_lon());
    props.append(createProps_lat());
    props.append(createProps_height());
    props.append(createProps_hMSL());
    props.append(createProps_hAcc());
    props.append(createProps_vAcc());
    props.append(createProps_velN());
    props.append(createProps_velE());
    props.append(createProps_velD());
    props.append(createProps_gSpeed());
    props.append(createProps_heading());
    props.append(createProps_sAcc());
    props.append(createProps_headingAcc());
    props.append(createProps_pDop());
    props.append(createProps_reserved2());
    props.append(createProps_reserved3());
    props.append(createProps_headVeh());
    props.append(createProps_magDec());
    props.append(createProps_magAcc());
    return props;
}

} // namespace

class NavPvt_u8Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavPvt_u8<ublox::cc_plugin::Message>,
        NavPvt_u8Impl
    >
{
public:
    NavPvt_u8Impl() = default;
    NavPvt_u8Impl(const NavPvt_u8Impl&) = delete;
    NavPvt_u8Impl(NavPvt_u8Impl&&) = delete;
    virtual ~NavPvt_u8Impl() = default;
    NavPvt_u8Impl& operator=(const NavPvt_u8Impl&) = default;
    NavPvt_u8Impl& operator=(NavPvt_u8Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPvt_u8::NavPvt_u8() : m_pImpl(new NavPvt_u8Impl) {}
NavPvt_u8::~NavPvt_u8() = default;

NavPvt_u8& NavPvt_u8::operator=(const NavPvt_u8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPvt_u8& NavPvt_u8::operator=(NavPvt_u8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavPvt_u8::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPvt_u8::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPvt_u8::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPvt_u8::resetImpl()
{
    m_pImpl->reset();
}

bool NavPvt_u8::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPvt_u8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPvt_u8::MsgIdParamType NavPvt_u8::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPvt_u8::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPvt_u8::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPvt_u8::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPvt_u8::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPvt_u8::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


