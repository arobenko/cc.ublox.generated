#include "InfTest.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/InfTest.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_str()
{
    using Field = ublox::message::InfTestFields<>::Str;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_str());
    return props;
}

} // namespace

class InfTestImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::InfTest<ublox::cc_plugin::Message>,
        InfTestImpl
    >
{
public:
    InfTestImpl() = default;
    InfTestImpl(const InfTestImpl&) = delete;
    InfTestImpl(InfTestImpl&&) = delete;
    virtual ~InfTestImpl() = default;
    InfTestImpl& operator=(const InfTestImpl&) = default;
    InfTestImpl& operator=(InfTestImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfTest::InfTest() : m_pImpl(new InfTestImpl) {}
InfTest::~InfTest() = default;

InfTest& InfTest::operator=(const InfTest& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfTest& InfTest::operator=(InfTest&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* InfTest::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfTest::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfTest::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfTest::resetImpl()
{
    m_pImpl->reset();
}

bool InfTest::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const InfTest*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfTest::MsgIdParamType InfTest::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfTest::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfTest::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfTest::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfTest::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfTest::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox

