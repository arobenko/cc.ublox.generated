#include "CfgDosc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgDosc.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
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
    using Field = ublox::message::CfgDoscFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numOsc()
{
    using Field = ublox::message::CfgDoscFields<>::NumOsc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgDoscFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_oscId()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::OscId;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add("Internal", 0)
                    .add("External", 1)
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved2()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_plugin::field::createProps_res1(Field::name());
            return props;
            
        }
        
        struct FlagsMembers
        {
            static QVariantMap createProps_bits()
            {
                using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::FlagsMembers::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "isCalibrated")
                        .asMap();
                
            }
            
            static QVariantMap createProps_controlIf()
            {
                using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::FlagsMembers::ControlIf;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Custom", 0)
                        .add("Microchip", 1)
                        .add("TI", 2)
                        .add("DAC_12bit", 13)
                        .add("DAC_14bit", 14)
                        .add("DAC_16bit", 15)
                        .asMap();
                
            }
            
            static QVariantMap createProps_reserved()
            {
                using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::FlagsMembers::Reserved;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_flags()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::Flags;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(FlagsMembers::createProps_bits())
                    .add(FlagsMembers::createProps_controlIf())
                    .add(FlagsMembers::createProps_reserved())
                    .asMap();
            
        }
        
        static QVariantMap createProps_freq()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::Freq;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(2U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_phaseOffset()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::PhaseOffset;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_withTemp()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::WithTemp;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(8U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_withAge()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::WithAge;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(8U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_timeToTemp()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::TimeToTemp;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved3()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::Reserved3;
            auto props = cc_plugin::field::createProps_res2(Field::name());
            return props;
            
        }
        
        static QVariantMap createProps_gainVco()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::GainVco;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(9U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_gainUncertainty()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::GainUncertainty;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(8U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved4()
        {
            using Field = ublox::message::CfgDoscFields<>::ListMembers::ElementMembers::Reserved4;
            auto props = cc_plugin::field::createProps_res3(Field::name());
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgDoscFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_oscId())
                .add(ElementMembers::createProps_reserved2())
                .add(ElementMembers::createProps_flags())
                .add(ElementMembers::createProps_freq())
                .add(ElementMembers::createProps_phaseOffset())
                .add(ElementMembers::createProps_withTemp())
                .add(ElementMembers::createProps_withAge())
                .add(ElementMembers::createProps_timeToTemp())
                .add(ElementMembers::createProps_reserved3())
                .add(ElementMembers::createProps_gainVco())
                .add(ElementMembers::createProps_gainUncertainty())
                .add(ElementMembers::createProps_reserved4())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::CfgDoscFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_numOsc());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class CfgDoscImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgDosc<ublox::cc_plugin::Message>,
        CfgDoscImpl
    >
{
public:
    CfgDoscImpl() = default;
    CfgDoscImpl(const CfgDoscImpl&) = delete;
    CfgDoscImpl(CfgDoscImpl&&) = delete;
    virtual ~CfgDoscImpl() = default;
    CfgDoscImpl& operator=(const CfgDoscImpl&) = default;
    CfgDoscImpl& operator=(CfgDoscImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDosc::CfgDosc() : m_pImpl(new CfgDoscImpl) {}
CfgDosc::~CfgDosc() = default;

CfgDosc& CfgDosc::operator=(const CfgDosc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDosc& CfgDosc::operator=(CfgDosc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDosc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDosc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDosc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDosc::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDosc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDosc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDosc::MsgIdParamType CfgDosc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDosc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDosc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDosc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDosc::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDosc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


