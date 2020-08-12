// Generated by commsdsl2comms v3.5.0

#include "MgaFlashStop.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaFlashStop.h"
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
    using Field = ublox::message::MgaFlashStopFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaFlashStopFields<>::Version;
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
    return props;
}

} // namespace

class MgaFlashStopImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaFlashStop<ublox::cc_plugin::Message>,
        MgaFlashStopImpl
    >
{
public:
    MgaFlashStopImpl() = default;
    MgaFlashStopImpl(const MgaFlashStopImpl&) = delete;
    MgaFlashStopImpl(MgaFlashStopImpl&&) = delete;
    virtual ~MgaFlashStopImpl() = default;
    MgaFlashStopImpl& operator=(const MgaFlashStopImpl&) = default;
    MgaFlashStopImpl& operator=(MgaFlashStopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaFlashStop::MgaFlashStop() : m_pImpl(new MgaFlashStopImpl) {}
MgaFlashStop::~MgaFlashStop() = default;

MgaFlashStop& MgaFlashStop::operator=(const MgaFlashStop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaFlashStop& MgaFlashStop::operator=(MgaFlashStop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaFlashStop::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaFlashStop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaFlashStop::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaFlashStop::resetImpl()
{
    m_pImpl->reset();
}

bool MgaFlashStop::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaFlashStop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaFlashStop::MsgIdParamType MgaFlashStop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaFlashStop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaFlashStop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaFlashStop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaFlashStop::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaFlashStop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


