/// @file
/// @brief Contains dispatch to handling function(s) for "ublox5" all input messages.

#pragma once

#include <type_traits>
#include "ublox/MsgId.h"
#include "ublox/input/Ublox5Messages.h"

namespace ublox
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = ublox::Message<...>;
///     using MyNavPosecef = ublox::message::NavPosecef<MyInterface, ublox::options::DefaultOptions>;
///     using MyNavPosecefPoll = ublox::message::NavPosecefPoll<MyInterface, ublox::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyNavPosecef& msg) {...}
///         void handle(MyNavPosecefPoll& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in ublox/dispatch/DispatchUblox5Message.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox5Message(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case ublox::MsgId_NavPosecef:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavPosecef<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavPosecefPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavPosllh:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavPosllh<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavPosllhPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavStatus:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavStatus<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavStatusPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavDop:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavDop<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavDopPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavSol:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavSol<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavSolPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavVelecef:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavVelecef<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavVelecefPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavVelned:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavVelned<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavVelnedPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavTimegps:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavTimegps<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavTimegpsPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavTimeutc:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavTimeutc<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavTimeutcPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavClock:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavClock<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavClockPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavSvinfo:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavSvinfo<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavSvinfoPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavSbas:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavSbas<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::NavSbasPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmSvsi:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmSvsi<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmSvsiPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_InfError:
    {
        using MsgType = ublox::message::InfError<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_InfWarning:
    {
        using MsgType = ublox::message::InfWarning<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_InfNotice:
    {
        using MsgType = ublox::message::InfNotice<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_InfTest:
    {
        using MsgType = ublox::message::InfTest<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_InfDebug:
    {
        using MsgType = ublox::message::InfDebug<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AckNak:
    {
        using MsgType = ublox::message::AckNak<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AckAck:
    {
        using MsgType = ublox::message::AckAck<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgPrt:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgPrtDdc<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgPrtUart<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgPrtUsb<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 3U:
        {
            using MsgType = ublox::message::CfgPrtSpi<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 4U:
        {
            using MsgType = ublox::message::CfgPrtPortPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 5U:
        {
            using MsgType = ublox::message::CfgPrtPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgMsg:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgMsg<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgMsgCurrent<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgMsgPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgInf:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgInf<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgInfPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgRst:
    {
        using MsgType = ublox::message::CfgRst<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgDat:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgDat<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgDatUser<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgDatStandard<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 3U:
        {
            using MsgType = ublox::message::CfgDatPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgTp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgTp<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgTpPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgRate:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgRate<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgRatePoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgCfg:
    {
        using MsgType = ublox::message::CfgCfg<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgRxm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgRxm<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgRxmPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgAnt:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgAnt<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgAntPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgSbas:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgSbas<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgSbasPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNmea:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNmea<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNmeaPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgUsb:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgUsb<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgUsbPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgTmode:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgTmode<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgTmodePoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNavx5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNavx5<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNavx5Poll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNav5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNav5<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNav5Poll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonIo:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonIo<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::MonIoPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonVer:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonVer<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::MonVerPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonMsgpp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonMsgpp<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::MonMsgppPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonRxbuf:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonRxbuf<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::MonRxbufPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonTxbuf:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonTxbuf<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::MonTxbufPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonHw:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonHw<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::MonHwPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidReq:
    {
        using MsgType = ublox::message::AidReq<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidIni:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidIni<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidIniPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidHui:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidHui<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidHuiPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidData:
    {
        using MsgType = ublox::message::AidData<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidAlm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAlm<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAlmPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::AidAlmPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidEph:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidEph<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidEphPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::AidEphPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidAlpsrv:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAlpsrv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAlpsrvToServer<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidAlp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAlp<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAlpStatus<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::AidAlpData<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_TimTp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::TimTp<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::TimTpPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_TimTm2:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::TimTm2<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::TimTm2Poll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_TimSvin:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::TimSvin<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::TimSvinPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5Message(), but without @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5Message()
/// @note Defined in ublox/dispatch/DispatchUblox5Message.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox5Message(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5Message<TProtOptions>(id, 0U, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5Message(), but passing
///     ublox::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5Message()
/// @note Defined in ublox/dispatch/DispatchUblox5Message.h
template<typename TMsg, typename THandler>
auto dispatchUblox5MessageDefaultOptions(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5Message<ublox::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5MessageDefaultOptions(), 
///     but without @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5MessageDefaultOptions()
/// @note Defined in ublox/dispatch/DispatchUblox5Message.h
template<typename TMsg, typename THandler>
auto dispatchUblox5MessageDefaultOptions(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5Message<ublox::options::DefaultOptions>(id, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @headerfile "ublox/dispatch/DispatchUblox5Message.h"
template <typename TProtOptions>
struct Ublox5MsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchUblox5Message() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox5Message() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox5Message<TProtOptions>(id, idx, msg, handler))
    {
        return ublox::dispatch::dispatchUblox5Message<TProtOptions>(id, idx, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, idx, msg, handler))
    {
        return dispatch(id, idx, msg, handler);
    }

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchUblox5Message() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox5Message() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox5Message<TProtOptions>(id, msg, handler))
    {
        return ublox::dispatch::dispatchUblox5Message<TProtOptions>(id, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, msg, handler))
    {
        return dispatch(id, msg, handler);
    }
};

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @details Same as @ref Ublox5MsgDispatcher, but passing
///     @ref ublox::options::DefaultOptions as template parameter.
/// @note Defined in "ublox/dispatch/DispatchUblox5Message.h"
using Ublox5MsgDispatcherDefaultOptions =
    Ublox5MsgDispatcher<ublox::options::DefaultOptions>;

} // namespace dispatch

} // namespace ublox


