/// @file
/// @brief Contains dispatch to handling function(s) for "ublox8" client input messages.

#pragma once

#include <type_traits>
#include "ublox/MsgId.h"
#include "ublox/input/Ublox8ClientInputMessages.h"

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
///     using MyNavPosllh = ublox::message::NavPosllh<MyInterface, ublox::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyNavPosecef& msg) {...}
///         void handle(MyNavPosllh& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in ublox/dispatch/DispatchUblox8ClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox8ClientInputMessage(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case ublox::MsgId_NavPosecef:
    {
        using MsgType = ublox::message::NavPosecef<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavPosllh:
    {
        using MsgType = ublox::message::NavPosllh<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavStatus:
    {
        using MsgType = ublox::message::NavStatus<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavDop:
    {
        using MsgType = ublox::message::NavDop<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavAtt:
    {
        using MsgType = ublox::message::NavAtt<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSol:
    {
        using MsgType = ublox::message::NavSol<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavPvt:
    {
        using MsgType = ublox::message::NavPvt_u8<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavOdo:
    {
        using MsgType = ublox::message::NavOdo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavVelecef:
    {
        using MsgType = ublox::message::NavVelecef<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavVelned:
    {
        using MsgType = ublox::message::NavVelned<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavHpposecef:
    {
        using MsgType = ublox::message::NavHpposecef<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavHpposllh:
    {
        using MsgType = ublox::message::NavHpposllh<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimegps:
    {
        using MsgType = ublox::message::NavTimegps<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimeutc:
    {
        using MsgType = ublox::message::NavTimeutc<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavClock:
    {
        using MsgType = ublox::message::NavClock<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimeglo:
    {
        using MsgType = ublox::message::NavTimeglo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimebds:
    {
        using MsgType = ublox::message::NavTimebds<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimegal:
    {
        using MsgType = ublox::message::NavTimegal<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavTimels:
    {
        using MsgType = ublox::message::NavTimels<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSvinfo:
    {
        using MsgType = ublox::message::NavSvinfo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavDgps:
    {
        using MsgType = ublox::message::NavDgps<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSbas:
    {
        using MsgType = ublox::message::NavSbas<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavOrb:
    {
        using MsgType = ublox::message::NavOrb<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSat:
    {
        using MsgType = ublox::message::NavSat<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavGeofence:
    {
        using MsgType = ublox::message::NavGeofence<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSvin:
    {
        using MsgType = ublox::message::NavSvin<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavRelposned:
    {
        using MsgType = ublox::message::NavRelposned<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavAopstatus:
    {
        using MsgType = ublox::message::NavAopstatusUblox8<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavEoe:
    {
        using MsgType = ublox::message::NavEoe<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmSfrbx:
    {
        using MsgType = ublox::message::RxmSfrbx<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmMeasx:
    {
        using MsgType = ublox::message::RxmMeasx<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmRawx:
    {
        using MsgType = ublox::message::RxmRawx<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmSvsi:
    {
        using MsgType = ublox::message::RxmSvsi<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmRtcm:
    {
        using MsgType = ublox::message::RxmRtcm<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmRlm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmRlmLong<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmRlmShort<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmImes:
    {
        using MsgType = ublox::message::RxmImes<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
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
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgInf:
    {
        using MsgType = ublox::message::CfgInf<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgDat:
    {
        using MsgType = ublox::message::CfgDat<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgRate:
    {
        using MsgType = ublox::message::CfgRate<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgRxm:
    {
        using MsgType = ublox::message::CfgRxm<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgAnt:
    {
        using MsgType = ublox::message::CfgAnt<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgSbas:
    {
        using MsgType = ublox::message::CfgSbas<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgNmea:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNmeaV1<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNmeaV0<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgNmea<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgUsb:
    {
        using MsgType = ublox::message::CfgUsb<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgOdo:
    {
        using MsgType = ublox::message::CfgOdo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgNavx5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNavx5V3<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNavx5V2<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgNavx5<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNav5:
    {
        using MsgType = ublox::message::CfgNav5<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgTp5:
    {
        using MsgType = ublox::message::CfgTp5<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgRinv:
    {
        using MsgType = ublox::message::CfgRinv<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgItfm:
    {
        using MsgType = ublox::message::CfgItfm<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgPm2:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgPm2V2<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgPm2<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgTmode2:
    {
        using MsgType = ublox::message::CfgTmode2<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgGnss:
    {
        using MsgType = ublox::message::CfgGnss<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgLogfilter:
    {
        using MsgType = ublox::message::CfgLogfilter<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgHnr:
    {
        using MsgType = ublox::message::CfgHnr<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgEsrc:
    {
        using MsgType = ublox::message::CfgEsrc<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgDosc:
    {
        using MsgType = ublox::message::CfgDosc<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgSmgr:
    {
        using MsgType = ublox::message::CfgSmgr<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgGeofence:
    {
        using MsgType = ublox::message::CfgGeofence<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgDgnss:
    {
        using MsgType = ublox::message::CfgDgnss<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgTmode3:
    {
        using MsgType = ublox::message::CfgTmode3<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgPms:
    {
        using MsgType = ublox::message::CfgPms<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_UpdSos:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::UpdSosRestored<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        case 1U:
        {
            using MsgType = ublox::message::UpdSosAck<InterfaceType, TProtOptions>;
            return handler.handle(static_cast<MsgType&>(msg));
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonIo:
    {
        using MsgType = ublox::message::MonIo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonVer:
    {
        using MsgType = ublox::message::MonVer<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonMsgpp:
    {
        using MsgType = ublox::message::MonMsgpp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonRxbuf:
    {
        using MsgType = ublox::message::MonRxbuf<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonTxbuf:
    {
        using MsgType = ublox::message::MonTxbuf<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonHw:
    {
        using MsgType = ublox::message::MonHw<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonHw2:
    {
        using MsgType = ublox::message::MonHw2<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonRxr:
    {
        using MsgType = ublox::message::MonRxr<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonPatch:
    {
        using MsgType = ublox::message::MonPatch<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonGnss:
    {
        using MsgType = ublox::message::MonGnss<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MonSmgr:
    {
        using MsgType = ublox::message::MonSmgr<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidIni:
    {
        using MsgType = ublox::message::AidIni<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidHui:
    {
        using MsgType = ublox::message::AidHui<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidAlm:
    {
        using MsgType = ublox::message::AidAlm<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidEph:
    {
        using MsgType = ublox::message::AidEph<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_AidAop:
    {
        using MsgType = ublox::message::AidAopU8<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimTp:
    {
        using MsgType = ublox::message::TimTp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimTm2:
    {
        using MsgType = ublox::message::TimTm2<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimVrfy:
    {
        using MsgType = ublox::message::TimVrfy<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimSvin:
    {
        using MsgType = ublox::message::TimSvin<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimDosc:
    {
        using MsgType = ublox::message::TimDosc<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimTos:
    {
        using MsgType = ublox::message::TimTos<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimSmeas:
    {
        using MsgType = ublox::message::TimSmeas<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimVcocal:
    {
        using MsgType = ublox::message::TimVcocal<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_TimFchg:
    {
        using MsgType = ublox::message::TimFchg<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_EsfMeas:
    {
        using MsgType = ublox::message::EsfMeas<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_EsfRaw:
    {
        using MsgType = ublox::message::EsfRaw<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_EsfStatus:
    {
        using MsgType = ublox::message::EsfStatus<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_EsfIns:
    {
        using MsgType = ublox::message::EsfIns<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MgaFlash:
    {
        using MsgType = ublox::message::MgaFlashAck<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MgaAck:
    {
        using MsgType = ublox::message::MgaAck<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_MgaDbd:
    {
        using MsgType = ublox::message::MgaDbd<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogInfo:
    {
        using MsgType = ublox::message::LogInfo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogRetrievepos:
    {
        using MsgType = ublox::message::LogRetrievepos<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogRetrievestring:
    {
        using MsgType = ublox::message::LogRetrievestring<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogFindtime:
    {
        using MsgType = ublox::message::LogFindtimeResp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_LogRetrieveposextra:
    {
        using MsgType = ublox::message::LogRetrieveposextra<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_SecSign:
    {
        using MsgType = ublox::message::SecSign<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_SecUniqid:
    {
        using MsgType = ublox::message::SecUniqid<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_HnrPvt:
    {
        using MsgType = ublox::message::HnrPvt<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox8ClientInputMessage(), but without @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox8ClientInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox8ClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox8ClientInputMessage(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox8ClientInputMessage<TProtOptions>(id, 0U, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox8ClientInputMessage(), but passing
///     ublox::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox8ClientInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox8ClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox8ClientInputMessageDefaultOptions(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox8ClientInputMessage<ublox::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox8ClientInputMessageDefaultOptions(), 
///     but without @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox8ClientInputMessageDefaultOptions()
/// @note Defined in ublox/dispatch/DispatchUblox8ClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox8ClientInputMessageDefaultOptions(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox8ClientInputMessage<ublox::options::DefaultOptions>(id, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @headerfile "ublox/dispatch/DispatchUblox8ClientInputMessage.h"
template <typename TProtOptions>
struct Ublox8ClientInputMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchUblox8ClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox8ClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox8ClientInputMessage<TProtOptions>(id, idx, msg, handler))
    {
        return ublox::dispatch::dispatchUblox8ClientInputMessage<TProtOptions>(id, idx, msg, handler);
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
    /// @details Uses appropriate @ref dispatchUblox8ClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox8ClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox8ClientInputMessage<TProtOptions>(id, msg, handler))
    {
        return ublox::dispatch::dispatchUblox8ClientInputMessage<TProtOptions>(id, msg, handler);
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
/// @details Same as @ref Ublox8ClientInputMsgDispatcher, but passing
///     @ref ublox::options::DefaultOptions as template parameter.
/// @note Defined in "ublox/dispatch/DispatchUblox8ClientInputMessage.h"
using Ublox8ClientInputMsgDispatcherDefaultOptions =
    Ublox8ClientInputMsgDispatcher<ublox::options::DefaultOptions>;

} // namespace dispatch

} // namespace ublox


