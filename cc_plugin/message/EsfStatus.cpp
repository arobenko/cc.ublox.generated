// Generated by commsdsl2comms v3.5.0

#include "EsfStatus.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/EsfStatus.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res7.h"

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
    using Field = ublox::message::EsfStatusFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::EsfStatusFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::EsfStatusFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res7(Field::name());
    return props;
    
}

static QVariantMap createProps_fusionMode()
{
    using Field = ublox::message::EsfStatusFields<>::FusionMode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Initialization", 0)
            .add("Fusion", 1)
            .add("Suspended", 2)
            .add("Disabled", 3)
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::EsfStatusFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_numSens()
{
    using Field = ublox::message::EsfStatusFields<>::NumSens;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

struct ListMembers
{
    struct ElementMembers
    {
        struct SensStatus1Members
        {
            static QVariantMap createProps_type()
            {
                using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus1Members::Type;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_bits()
            {
                using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus1Members::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "used")
                        .add(1U, "ready")
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_sensStatus1()
        {
            using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(SensStatus1Members::createProps_type())
                    .add(SensStatus1Members::createProps_bits())
                    .asMap();
            
        }
        
        struct SensStatus2Members
        {
            static QVariantMap createProps_calibStatus()
            {
                using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus2Members::CalibStatus;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("NotCalibrated", 0)
                        .add("Calibrating", 1)
                        .add("Calibrated", 2)
                        .add("Calibrated2", 3)
                        .asMap();
                
            }
            
            static QVariantMap createProps_timeStatus()
            {
                using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus2Members::TimeStatus;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("NoData", 0)
                        .add("FirstByte", 1)
                        .add("EventInput", 2)
                        .add("TimeTag", 3)
                        .asMap();
                
            }
            
            static QVariantMap createProps_reserved()
            {
                using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus2Members::Reserved;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .hidden()
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_sensStatus2()
        {
            using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::SensStatus2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(SensStatus2Members::createProps_calibStatus())
                    .add(SensStatus2Members::createProps_timeStatus())
                    .add(SensStatus2Members::createProps_reserved())
                    .asMap();
            
        }
        
        static QVariantMap createProps_freq()
        {
            using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::Freq;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_faults()
        {
            using Field = ublox::message::EsfStatusFields<>::ListMembers::ElementMembers::Faults;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(0U, "badMeas")
                    .add(1U, "badTTag")
                    .add(2U, "missingMeas")
                    .add(3U, "noisyMeas")
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::EsfStatusFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_sensStatus1())
                .add(ElementMembers::createProps_sensStatus2())
                .add(ElementMembers::createProps_freq())
                .add(ElementMembers::createProps_faults())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::EsfStatusFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_fusionMode());
    props.append(createProps_reserved2());
    props.append(createProps_numSens());
    props.append(createProps_list());
    return props;
}

} // namespace

class EsfStatusImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::EsfStatus<ublox::cc_plugin::Message>,
        EsfStatusImpl
    >
{
public:
    EsfStatusImpl() = default;
    EsfStatusImpl(const EsfStatusImpl&) = delete;
    EsfStatusImpl(EsfStatusImpl&&) = delete;
    virtual ~EsfStatusImpl() = default;
    EsfStatusImpl& operator=(const EsfStatusImpl&) = default;
    EsfStatusImpl& operator=(EsfStatusImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfStatus::EsfStatus() : m_pImpl(new EsfStatusImpl) {}
EsfStatus::~EsfStatus() = default;

EsfStatus& EsfStatus::operator=(const EsfStatus& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfStatus& EsfStatus::operator=(EsfStatus&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfStatus::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfStatus::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfStatus::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfStatus::resetImpl()
{
    m_pImpl->reset();
}

bool EsfStatus::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfStatus*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfStatus::MsgIdParamType EsfStatus::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfStatus::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfStatus::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfStatus::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfStatus::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfStatus::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


