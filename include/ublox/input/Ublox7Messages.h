// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of all "ublox7" messages bundle.

#pragma once

#include <tuple>
#include "ublox/message/AckAck.h"
#include "ublox/message/AckNak.h"
#include "ublox/message/AidAlm.h"
#include "ublox/message/AidAlmPoll.h"
#include "ublox/message/AidAlmPollSv.h"
#include "ublox/message/AidAlp.h"
#include "ublox/message/AidAlpData.h"
#include "ublox/message/AidAlpStatus.h"
#include "ublox/message/AidAlpsrv.h"
#include "ublox/message/AidAlpsrvToServer.h"
#include "ublox/message/AidAop.h"
#include "ublox/message/AidAopPoll.h"
#include "ublox/message/AidAopPollSv.h"
#include "ublox/message/AidData.h"
#include "ublox/message/AidEph.h"
#include "ublox/message/AidEphPoll.h"
#include "ublox/message/AidEphPollSv.h"
#include "ublox/message/AidHui.h"
#include "ublox/message/AidHuiPoll.h"
#include "ublox/message/AidIni.h"
#include "ublox/message/AidIniPoll.h"
#include "ublox/message/AidReq.h"
#include "ublox/message/CfgAnt.h"
#include "ublox/message/CfgAntPoll.h"
#include "ublox/message/CfgCfg.h"
#include "ublox/message/CfgDat.h"
#include "ublox/message/CfgDatPoll.h"
#include "ublox/message/CfgDatUser.h"
#include "ublox/message/CfgGnss.h"
#include "ublox/message/CfgGnssPoll.h"
#include "ublox/message/CfgInf.h"
#include "ublox/message/CfgInfPoll.h"
#include "ublox/message/CfgItfm.h"
#include "ublox/message/CfgItfmPoll.h"
#include "ublox/message/CfgLogfilter.h"
#include "ublox/message/CfgLogfilterPoll.h"
#include "ublox/message/CfgMsg.h"
#include "ublox/message/CfgMsgCurrent.h"
#include "ublox/message/CfgMsgPoll.h"
#include "ublox/message/CfgNav5.h"
#include "ublox/message/CfgNav5Poll.h"
#include "ublox/message/CfgNavx5.h"
#include "ublox/message/CfgNavx5Poll.h"
#include "ublox/message/CfgNmea.h"
#include "ublox/message/CfgNmeaPoll.h"
#include "ublox/message/CfgNmeaV0.h"
#include "ublox/message/CfgNvs.h"
#include "ublox/message/CfgPm2.h"
#include "ublox/message/CfgPm2Poll.h"
#include "ublox/message/CfgPrtDdc.h"
#include "ublox/message/CfgPrtPoll.h"
#include "ublox/message/CfgPrtPortPoll.h"
#include "ublox/message/CfgPrtSpi.h"
#include "ublox/message/CfgPrtUart.h"
#include "ublox/message/CfgPrtUsb.h"
#include "ublox/message/CfgRate.h"
#include "ublox/message/CfgRatePoll.h"
#include "ublox/message/CfgRinv.h"
#include "ublox/message/CfgRinvPoll.h"
#include "ublox/message/CfgRst.h"
#include "ublox/message/CfgRxm.h"
#include "ublox/message/CfgRxmPoll.h"
#include "ublox/message/CfgSbas.h"
#include "ublox/message/CfgSbasPoll.h"
#include "ublox/message/CfgTp5.h"
#include "ublox/message/CfgTp5Poll.h"
#include "ublox/message/CfgTp5PollSelect.h"
#include "ublox/message/CfgUsb.h"
#include "ublox/message/CfgUsbPoll.h"
#include "ublox/message/InfDebug.h"
#include "ublox/message/InfError.h"
#include "ublox/message/InfNotice.h"
#include "ublox/message/InfTest.h"
#include "ublox/message/InfWarning.h"
#include "ublox/message/LogCreate.h"
#include "ublox/message/LogErase.h"
#include "ublox/message/LogFindtime.h"
#include "ublox/message/LogFindtimeResp.h"
#include "ublox/message/LogInfo.h"
#include "ublox/message/LogInfoPoll.h"
#include "ublox/message/LogRetrieve.h"
#include "ublox/message/LogRetrievepos.h"
#include "ublox/message/LogRetrievestring.h"
#include "ublox/message/LogString.h"
#include "ublox/message/MonHw.h"
#include "ublox/message/MonHw2.h"
#include "ublox/message/MonHw2Poll.h"
#include "ublox/message/MonHwPoll.h"
#include "ublox/message/MonIo.h"
#include "ublox/message/MonIoPoll.h"
#include "ublox/message/MonMsgpp.h"
#include "ublox/message/MonMsgppPoll.h"
#include "ublox/message/MonRxbuf.h"
#include "ublox/message/MonRxbufPoll.h"
#include "ublox/message/MonRxr.h"
#include "ublox/message/MonTxbuf.h"
#include "ublox/message/MonTxbufPoll.h"
#include "ublox/message/MonVer.h"
#include "ublox/message/MonVerPoll.h"
#include "ublox/message/NavAopstatus.h"
#include "ublox/message/NavAopstatusPoll.h"
#include "ublox/message/NavClock.h"
#include "ublox/message/NavClockPoll.h"
#include "ublox/message/NavDgps.h"
#include "ublox/message/NavDgpsPoll.h"
#include "ublox/message/NavDop.h"
#include "ublox/message/NavDopPoll.h"
#include "ublox/message/NavPosecef.h"
#include "ublox/message/NavPosecefPoll.h"
#include "ublox/message/NavPosllh.h"
#include "ublox/message/NavPosllhPoll.h"
#include "ublox/message/NavPvt.h"
#include "ublox/message/NavPvtPoll.h"
#include "ublox/message/NavSbas.h"
#include "ublox/message/NavSbasPoll.h"
#include "ublox/message/NavSol.h"
#include "ublox/message/NavSolPoll.h"
#include "ublox/message/NavStatus.h"
#include "ublox/message/NavStatusPoll.h"
#include "ublox/message/NavSvinfo.h"
#include "ublox/message/NavSvinfoPoll.h"
#include "ublox/message/NavTimegps.h"
#include "ublox/message/NavTimegpsPoll.h"
#include "ublox/message/NavTimeutc.h"
#include "ublox/message/NavTimeutcPoll.h"
#include "ublox/message/NavVelecef.h"
#include "ublox/message/NavVelecefPoll.h"
#include "ublox/message/NavVelned.h"
#include "ublox/message/NavVelnedPoll.h"
#include "ublox/message/RxmAlm.h"
#include "ublox/message/RxmAlmPoll.h"
#include "ublox/message/RxmAlmPollSv.h"
#include "ublox/message/RxmEph.h"
#include "ublox/message/RxmEphPoll.h"
#include "ublox/message/RxmEphPollSv.h"
#include "ublox/message/RxmPmreq.h"
#include "ublox/message/RxmRaw.h"
#include "ublox/message/RxmRawPoll.h"
#include "ublox/message/RxmSfrb.h"
#include "ublox/message/RxmSvsi.h"
#include "ublox/message/RxmSvsiPoll.h"
#include "ublox/message/TimTm2.h"
#include "ublox/message/TimTm2Poll.h"
#include "ublox/message/TimTp.h"
#include "ublox/message/TimTpPoll.h"
#include "ublox/message/TimVrfy.h"
#include "ublox/message/TimVrfyPoll.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = ublox::options::DefaultOptions>
using Ublox7Messages =
    std::tuple<
        ublox::message::NavPosecef<TBase, TOpt>,
        ublox::message::NavPosecefPoll<TBase, TOpt>,
        ublox::message::NavPosllh<TBase, TOpt>,
        ublox::message::NavPosllhPoll<TBase, TOpt>,
        ublox::message::NavStatus<TBase, TOpt>,
        ublox::message::NavStatusPoll<TBase, TOpt>,
        ublox::message::NavDop<TBase, TOpt>,
        ublox::message::NavDopPoll<TBase, TOpt>,
        ublox::message::NavSol<TBase, TOpt>,
        ublox::message::NavSolPoll<TBase, TOpt>,
        ublox::message::NavPvt<TBase, TOpt>,
        ublox::message::NavPvtPoll<TBase, TOpt>,
        ublox::message::NavVelecef<TBase, TOpt>,
        ublox::message::NavVelecefPoll<TBase, TOpt>,
        ublox::message::NavVelned<TBase, TOpt>,
        ublox::message::NavVelnedPoll<TBase, TOpt>,
        ublox::message::NavTimegps<TBase, TOpt>,
        ublox::message::NavTimegpsPoll<TBase, TOpt>,
        ublox::message::NavTimeutc<TBase, TOpt>,
        ublox::message::NavTimeutcPoll<TBase, TOpt>,
        ublox::message::NavClock<TBase, TOpt>,
        ublox::message::NavClockPoll<TBase, TOpt>,
        ublox::message::NavSvinfo<TBase, TOpt>,
        ublox::message::NavSvinfoPoll<TBase, TOpt>,
        ublox::message::NavDgps<TBase, TOpt>,
        ublox::message::NavDgpsPoll<TBase, TOpt>,
        ublox::message::NavSbas<TBase, TOpt>,
        ublox::message::NavSbasPoll<TBase, TOpt>,
        ublox::message::NavAopstatus<TBase, TOpt>,
        ublox::message::NavAopstatusPoll<TBase, TOpt>,
        ublox::message::RxmRaw<TBase, TOpt>,
        ublox::message::RxmRawPoll<TBase, TOpt>,
        ublox::message::RxmSfrb<TBase, TOpt>,
        ublox::message::RxmSvsi<TBase, TOpt>,
        ublox::message::RxmSvsiPoll<TBase, TOpt>,
        ublox::message::RxmAlm<TBase, TOpt>,
        ublox::message::RxmAlmPollSv<TBase, TOpt>,
        ublox::message::RxmAlmPoll<TBase, TOpt>,
        ublox::message::RxmEph<TBase, TOpt>,
        ublox::message::RxmEphPollSv<TBase, TOpt>,
        ublox::message::RxmEphPoll<TBase, TOpt>,
        ublox::message::RxmPmreq<TBase, TOpt>,
        ublox::message::InfError<TBase, TOpt>,
        ublox::message::InfWarning<TBase, TOpt>,
        ublox::message::InfNotice<TBase, TOpt>,
        ublox::message::InfTest<TBase, TOpt>,
        ublox::message::InfDebug<TBase, TOpt>,
        ublox::message::AckNak<TBase, TOpt>,
        ublox::message::AckAck<TBase, TOpt>,
        ublox::message::CfgPrtDdc<TBase, TOpt>,
        ublox::message::CfgPrtUart<TBase, TOpt>,
        ublox::message::CfgPrtUsb<TBase, TOpt>,
        ublox::message::CfgPrtSpi<TBase, TOpt>,
        ublox::message::CfgPrtPortPoll<TBase, TOpt>,
        ublox::message::CfgPrtPoll<TBase, TOpt>,
        ublox::message::CfgMsg<TBase, TOpt>,
        ublox::message::CfgMsgCurrent<TBase, TOpt>,
        ublox::message::CfgMsgPoll<TBase, TOpt>,
        ublox::message::CfgInf<TBase, TOpt>,
        ublox::message::CfgInfPoll<TBase, TOpt>,
        ublox::message::CfgRst<TBase, TOpt>,
        ublox::message::CfgDat<TBase, TOpt>,
        ublox::message::CfgDatUser<TBase, TOpt>,
        ublox::message::CfgDatPoll<TBase, TOpt>,
        ublox::message::CfgRate<TBase, TOpt>,
        ublox::message::CfgRatePoll<TBase, TOpt>,
        ublox::message::CfgCfg<TBase, TOpt>,
        ublox::message::CfgRxm<TBase, TOpt>,
        ublox::message::CfgRxmPoll<TBase, TOpt>,
        ublox::message::CfgAnt<TBase, TOpt>,
        ublox::message::CfgAntPoll<TBase, TOpt>,
        ublox::message::CfgSbas<TBase, TOpt>,
        ublox::message::CfgSbasPoll<TBase, TOpt>,
        ublox::message::CfgNmeaV0<TBase, TOpt>,
        ublox::message::CfgNmea<TBase, TOpt>,
        ublox::message::CfgNmeaPoll<TBase, TOpt>,
        ublox::message::CfgUsb<TBase, TOpt>,
        ublox::message::CfgUsbPoll<TBase, TOpt>,
        ublox::message::CfgNvs<TBase, TOpt>,
        ublox::message::CfgNavx5<TBase, TOpt>,
        ublox::message::CfgNavx5Poll<TBase, TOpt>,
        ublox::message::CfgNav5<TBase, TOpt>,
        ublox::message::CfgNav5Poll<TBase, TOpt>,
        ublox::message::CfgTp5<TBase, TOpt>,
        ublox::message::CfgTp5PollSelect<TBase, TOpt>,
        ublox::message::CfgTp5Poll<TBase, TOpt>,
        ublox::message::CfgRinv<TBase, TOpt>,
        ublox::message::CfgRinvPoll<TBase, TOpt>,
        ublox::message::CfgItfm<TBase, TOpt>,
        ublox::message::CfgItfmPoll<TBase, TOpt>,
        ublox::message::CfgPm2<TBase, TOpt>,
        ublox::message::CfgPm2Poll<TBase, TOpt>,
        ublox::message::CfgGnss<TBase, TOpt>,
        ublox::message::CfgGnssPoll<TBase, TOpt>,
        ublox::message::CfgLogfilter<TBase, TOpt>,
        ublox::message::CfgLogfilterPoll<TBase, TOpt>,
        ublox::message::MonIo<TBase, TOpt>,
        ublox::message::MonIoPoll<TBase, TOpt>,
        ublox::message::MonVer<TBase, TOpt>,
        ublox::message::MonVerPoll<TBase, TOpt>,
        ublox::message::MonMsgpp<TBase, TOpt>,
        ublox::message::MonMsgppPoll<TBase, TOpt>,
        ublox::message::MonRxbuf<TBase, TOpt>,
        ublox::message::MonRxbufPoll<TBase, TOpt>,
        ublox::message::MonTxbuf<TBase, TOpt>,
        ublox::message::MonTxbufPoll<TBase, TOpt>,
        ublox::message::MonHw<TBase, TOpt>,
        ublox::message::MonHwPoll<TBase, TOpt>,
        ublox::message::MonHw2<TBase, TOpt>,
        ublox::message::MonHw2Poll<TBase, TOpt>,
        ublox::message::MonRxr<TBase, TOpt>,
        ublox::message::AidReq<TBase, TOpt>,
        ublox::message::AidIni<TBase, TOpt>,
        ublox::message::AidIniPoll<TBase, TOpt>,
        ublox::message::AidHui<TBase, TOpt>,
        ublox::message::AidHuiPoll<TBase, TOpt>,
        ublox::message::AidData<TBase, TOpt>,
        ublox::message::AidAlm<TBase, TOpt>,
        ublox::message::AidAlmPollSv<TBase, TOpt>,
        ublox::message::AidAlmPoll<TBase, TOpt>,
        ublox::message::AidEph<TBase, TOpt>,
        ublox::message::AidEphPollSv<TBase, TOpt>,
        ublox::message::AidEphPoll<TBase, TOpt>,
        ublox::message::AidAlpsrv<TBase, TOpt>,
        ublox::message::AidAlpsrvToServer<TBase, TOpt>,
        ublox::message::AidAop<TBase, TOpt>,
        ublox::message::AidAopPollSv<TBase, TOpt>,
        ublox::message::AidAopPoll<TBase, TOpt>,
        ublox::message::AidAlp<TBase, TOpt>,
        ublox::message::AidAlpStatus<TBase, TOpt>,
        ublox::message::AidAlpData<TBase, TOpt>,
        ublox::message::TimTp<TBase, TOpt>,
        ublox::message::TimTpPoll<TBase, TOpt>,
        ublox::message::TimTm2<TBase, TOpt>,
        ublox::message::TimTm2Poll<TBase, TOpt>,
        ublox::message::TimVrfy<TBase, TOpt>,
        ublox::message::TimVrfyPoll<TBase, TOpt>,
        ublox::message::LogErase<TBase, TOpt>,
        ublox::message::LogString<TBase, TOpt>,
        ublox::message::LogCreate<TBase, TOpt>,
        ublox::message::LogInfo<TBase, TOpt>,
        ublox::message::LogInfoPoll<TBase, TOpt>,
        ublox::message::LogRetrieve<TBase, TOpt>,
        ublox::message::LogRetrievepos<TBase, TOpt>,
        ublox::message::LogRetrievestring<TBase, TOpt>,
        ublox::message::LogFindtime<TBase, TOpt>,
        ublox::message::LogFindtimeResp<TBase, TOpt>
    >;

} // namespace input

} // namespace ublox


