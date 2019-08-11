#include "LogFindtime.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogFindtime.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Sec.h"
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

static QVariantMap createProps_version()
{
    using Field = ublox::message::LogFindtimeFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_type()
{
    using Field = ublox::message::LogFindtimeFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::LogFindtimeFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::LogFindtimeFields<>::Year;
    auto props = cc_plugin::field::createProps_year(Field::name());
    return props;
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::LogFindtimeFields<>::Month;
    auto props = cc_plugin::field::createProps_month(Field::name());
    return props;
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::LogFindtimeFields<>::Day;
    auto props = cc_plugin::field::createProps_day(Field::name());
    return props;
    
}

static QVariantMap createProps_hour()
{
    using Field = ublox::message::LogFindtimeFields<>::Hour;
    auto props = cc_plugin::field::createProps_hour(Field::name());
    return props;
    
}

static QVariantMap createProps_minute()
{
    using Field = ublox::message::LogFindtimeFields<>::Minute;
    auto props = cc_plugin::field::createProps_min(Field::name());
    return props;
    
}

static QVariantMap createProps_second()
{
    using Field = ublox::message::LogFindtimeFields<>::Second;
    auto props = cc_plugin::field::createProps_sec(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::LogFindtimeFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_type());
    props.append(createProps_reserved1());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_hour());
    props.append(createProps_minute());
    props.append(createProps_second());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class LogFindtimeImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogFindtime<ublox::cc_plugin::Message>,
        LogFindtimeImpl
    >
{
public:
    LogFindtimeImpl() = default;
    LogFindtimeImpl(const LogFindtimeImpl&) = delete;
    LogFindtimeImpl(LogFindtimeImpl&&) = delete;
    virtual ~LogFindtimeImpl() = default;
    LogFindtimeImpl& operator=(const LogFindtimeImpl&) = default;
    LogFindtimeImpl& operator=(LogFindtimeImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogFindtime::LogFindtime() : m_pImpl(new LogFindtimeImpl) {}
LogFindtime::~LogFindtime() = default;

LogFindtime& LogFindtime::operator=(const LogFindtime& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogFindtime& LogFindtime::operator=(LogFindtime&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogFindtime::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogFindtime::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogFindtime::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogFindtime::resetImpl()
{
    m_pImpl->reset();
}

bool LogFindtime::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogFindtime*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogFindtime::MsgIdParamType LogFindtime::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogFindtime::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogFindtime::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogFindtime::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogFindtime::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogFindtime::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


