// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains dispatch to handling function(s) for "ublox7" server input messages.

#pragma once

#include <type_traits>
#include "ublox/MsgId.h"
#include "ublox/input/Ublox7ServerInputMessages.h"

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
///     using MyNavPosecefPoll = ublox::message::NavPosecefPoll<MyInterface, ublox::options::DefaultOptions>;
///     using MyNavPosllhPoll = ublox::message::NavPosllhPoll<MyInterface, ublox::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyNavPosecefPoll& msg) {...}
///         void handle(MyNavPosllhPoll& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in ublox/dispatch/DispatchUblox7ServerInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox7ServerInputMessage(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case ublox::MsgId_NavPosecef:
    {
        using MsgType = ublox::message::NavPosecefPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavPosllh:
    {
        using MsgType = ublox::message::NavPosllhPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavStatus:
    {
        using MsgType = ublox::message::NavStatusPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavDop:
    {
        using MsgType = ublox::message::NavDopPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSol:
    {
        using MsgType = ublox::message::NavSolPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavPvt:
    {
        using MsgType = ublox::message::NavPvtPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavVelecef:
    {
        using MsgType = ublox::message::NavVelecefPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavVelned:
    {
        using MsgType = ublox::message::NavVelnedPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimegps:
    {
        using MsgType = ublox::message::NavTimegpsPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimeutc:
    {
        using MsgType = ublox::message::NavTimeutcPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavClock:
    {
        using MsgType = ublox::message::NavClockPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSvinfo:
    {
        using MsgType = ublox::message::NavSvinfoPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavDgps:
    {
        using MsgType = ublox::message::NavDgpsPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSbas:
    {
        using MsgType = ublox::message::NavSbasPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavAopstatus:
    {
        using MsgType = ublox::message::NavAopstatusPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmRaw:
    {
        using MsgType = ublox::message::RxmRawPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmSvsi:
    {
        using MsgType = ublox::message::RxmSvsiPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmAlm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmAlmPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmAlmPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmEph:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmEphPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmEphPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmPmreq:
    {
        using MsgType = ublox::message::RxmPmreq<InterfaceType, TProtOptions>;
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
            using MsgType = ublox::message::CfgDatUser<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgDatPoll<InterfaceType, TProtOptions>;
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
            using MsgType = ublox::message::CfgNmeaV0<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNmea<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
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
    case ublox::MsgId_CfgNvs:
    {
        using MsgType = ublox::message::CfgNvs<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
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
    case ublox::MsgId_CfgTp5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgTp5<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgTp5PollSelect<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgTp5Poll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgRinv:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgRinv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgRinvPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgItfm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgItfm<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgItfmPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgPm2:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgPm2<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgPm2Poll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgGnss:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgGnss<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgGnssPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgLogfilter:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgLogfilter<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgLogfilterPoll<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonIo:
    {
        using MsgType = ublox::message::MonIoPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonVer:
    {
        using MsgType = ublox::message::MonVerPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonMsgpp:
    {
        using MsgType = ublox::message::MonMsgppPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonRxbuf:
    {
        using MsgType = ublox::message::MonRxbufPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonTxbuf:
    {
        using MsgType = ublox::message::MonTxbufPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonHw:
    {
        using MsgType = ublox::message::MonHwPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonHw2:
    {
        using MsgType = ublox::message::MonHw2Poll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
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
            using MsgType = ublox::message::AidAlmPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
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
            using MsgType = ublox::message::AidEphPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
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
        using MsgType = ublox::message::AidAlpsrv<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidAop:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAop<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAopPollSv<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::AidAopPoll<InterfaceType, TProtOptions>;
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
        using MsgType = ublox::message::TimTpPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimTm2:
    {
        using MsgType = ublox::message::TimTm2Poll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimVrfy:
    {
        using MsgType = ublox::message::TimVrfyPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogErase:
    {
        using MsgType = ublox::message::LogErase<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogString:
    {
        using MsgType = ublox::message::LogString<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogCreate:
    {
        using MsgType = ublox::message::LogCreate<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogInfo:
    {
        using MsgType = ublox::message::LogInfoPoll<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogRetrieve:
    {
        using MsgType = ublox::message::LogRetrieve<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogFindtime:
    {
        using MsgType = ublox::message::LogFindtime<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox7ServerInputMessage(), but without @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox7ServerInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox7ServerInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox7ServerInputMessage(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox7ServerInputMessage<TProtOptions>(id, 0U, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox7ServerInputMessage(), but passing
///     ublox::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox7ServerInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox7ServerInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox7ServerInputMessageDefaultOptions(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox7ServerInputMessage<ublox::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox7ServerInputMessageDefaultOptions(), 
///     but without @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox7ServerInputMessageDefaultOptions()
/// @note Defined in ublox/dispatch/DispatchUblox7ServerInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox7ServerInputMessageDefaultOptions(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox7ServerInputMessage<ublox::options::DefaultOptions>(id, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @headerfile "ublox/dispatch/DispatchUblox7ServerInputMessage.h"
template <typename TProtOptions>
struct Ublox7ServerInputMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchUblox7ServerInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox7ServerInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox7ServerInputMessage<TProtOptions>(id, idx, msg, handler))
    {
        return ublox::dispatch::dispatchUblox7ServerInputMessage<TProtOptions>(id, idx, msg, handler);
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
    /// @details Uses appropriate @ref dispatchUblox7ServerInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox7ServerInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox7ServerInputMessage<TProtOptions>(id, msg, handler))
    {
        return ublox::dispatch::dispatchUblox7ServerInputMessage<TProtOptions>(id, msg, handler);
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
/// @details Same as @ref Ublox7ServerInputMsgDispatcher, but passing
///     @ref ublox::options::DefaultOptions as template parameter.
/// @note Defined in "ublox/dispatch/DispatchUblox7ServerInputMessage.h"
using Ublox7ServerInputMsgDispatcherDefaultOptions =
    Ublox7ServerInputMsgDispatcher<ublox::options::DefaultOptions>;

} // namespace dispatch

} // namespace ublox


