#include "NavDgps.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavDgps.h"
#include "cc_plugin/field/Itow.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavDgpsFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_age()
{
    using Field = ublox::message::NavDgpsFields<>::Age;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_baseId()
{
    using Field = ublox::message::NavDgpsFields<>::BaseId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_baseHealth()
{
    using Field = ublox::message::NavDgpsFields<>::BaseHealth;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numCh()
{
    using Field = ublox::message::NavDgpsFields<>::NumCh;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_status()
{
    using Field = ublox::message::NavDgpsFields<>::Status;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("None", 0)
            .add("PR + PRR correction", 1)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavDgpsFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_svid()
        {
            using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::Svid;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        struct FlagsMembers
        {
            static QVariantMap createProps_channel()
            {
                using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::FlagsMembers::Channel;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_bits()
            {
                using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::FlagsMembers::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "dgpsUsed")
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_flags()
        {
            using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::Flags;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(FlagsMembers::createProps_channel())
                    .add(FlagsMembers::createProps_bits())
                    .asMap();
            
        }
        
        static QVariantMap createProps_ageC()
        {
            using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::AgeC;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_prc()
        {
            using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::Prc;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_prrc()
        {
            using Field = ublox::message::NavDgpsFields<>::ListMembers::ElementMembers::Prrc;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::NavDgpsFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_svid())
                .add(ElementMembers::createProps_flags())
                .add(ElementMembers::createProps_ageC())
                .add(ElementMembers::createProps_prc())
                .add(ElementMembers::createProps_prrc())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::NavDgpsFields<>::List;
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
    props.append(createProps_itow());
    props.append(createProps_age());
    props.append(createProps_baseId());
    props.append(createProps_baseHealth());
    props.append(createProps_numCh());
    props.append(createProps_status());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class NavDgpsImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavDgps<ublox::cc_plugin::Message>,
        NavDgpsImpl
    >
{
public:
    NavDgpsImpl() = default;
    NavDgpsImpl(const NavDgpsImpl&) = delete;
    NavDgpsImpl(NavDgpsImpl&&) = delete;
    virtual ~NavDgpsImpl() = default;
    NavDgpsImpl& operator=(const NavDgpsImpl&) = default;
    NavDgpsImpl& operator=(NavDgpsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavDgps::NavDgps() : m_pImpl(new NavDgpsImpl) {}
NavDgps::~NavDgps() = default;

NavDgps& NavDgps::operator=(const NavDgps& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavDgps& NavDgps::operator=(NavDgps&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavDgps::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavDgps::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavDgps::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavDgps::resetImpl()
{
    m_pImpl->reset();
}

bool NavDgps::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavDgps*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavDgps::MsgIdParamType NavDgps::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavDgps::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavDgps::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavDgps::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavDgps::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavDgps::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


