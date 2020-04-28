// Generated by commsdsl2comms v3.4.0

#include "AidAlm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAlm.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_svid()
{
    using Field = ublox::message::AidAlmFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_week()
{
    using Field = ublox::message::AidAlmFields<>::Week;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct DwrdMembers
{
    struct ListMembers
    {
        static QVariantMap createProps_element()
        {
            using Field = ublox::message::AidAlmFields<>::DwrdMembers::ListMembers::Element;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_list()
    {
        using Field = ublox::message::AidAlmFields<>::DwrdMembers::List;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ListMembers::createProps_element())
                .serialisedHidden()
                .appendIndexToElementName()
                .asMap();
        
    }
    
};

static QVariantMap createProps_dwrd()
{
    using Field = ublox::message::AidAlmFields<>::Dwrd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(DwrdMembers::createProps_list())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid());
    props.append(createProps_week());
    props.append(createProps_dwrd());
    return props;
}

} // namespace

class AidAlmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAlm<ublox::cc_plugin::Message>,
        AidAlmImpl
    >
{
public:
    AidAlmImpl() = default;
    AidAlmImpl(const AidAlmImpl&) = delete;
    AidAlmImpl(AidAlmImpl&&) = delete;
    virtual ~AidAlmImpl() = default;
    AidAlmImpl& operator=(const AidAlmImpl&) = default;
    AidAlmImpl& operator=(AidAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlm::AidAlm() : m_pImpl(new AidAlmImpl) {}
AidAlm::~AidAlm() = default;

AidAlm& AidAlm::operator=(const AidAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlm& AidAlm::operator=(AidAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlm::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlm::MsgIdParamType AidAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


