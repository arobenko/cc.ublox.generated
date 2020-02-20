// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of all messages bundle.

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
#include "ublox/message/AidAopU8.h"
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
#include "ublox/message/CfgDatStandard.h"
#include "ublox/message/CfgDatUser.h"
#include "ublox/message/CfgDgnss.h"
#include "ublox/message/CfgDgnssPoll.h"
#include "ublox/message/CfgDosc.h"
#include "ublox/message/CfgDoscPoll.h"
#include "ublox/message/CfgEkf.h"
#include "ublox/message/CfgEkfPoll.h"
#include "ublox/message/CfgEsrc.h"
#include "ublox/message/CfgEsrcPoll.h"
#include "ublox/message/CfgFixseed.h"
#include "ublox/message/CfgFxn.h"
#include "ublox/message/CfgFxnPoll.h"
#include "ublox/message/CfgGeofence.h"
#include "ublox/message/CfgGeofencePoll.h"
#include "ublox/message/CfgGnss.h"
#include "ublox/message/CfgGnssPoll.h"
#include "ublox/message/CfgHnr.h"
#include "ublox/message/CfgHnrPoll.h"
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
#include "ublox/message/CfgNavx5V2.h"
#include "ublox/message/CfgNavx5V3.h"
#include "ublox/message/CfgNmea.h"
#include "ublox/message/CfgNmeaPoll.h"
#include "ublox/message/CfgNmeaV0.h"
#include "ublox/message/CfgNmeaV1.h"
#include "ublox/message/CfgNvs.h"
#include "ublox/message/CfgOdo.h"
#include "ublox/message/CfgOdoPoll.h"
#include "ublox/message/CfgPm.h"
#include "ublox/message/CfgPm2.h"
#include "ublox/message/CfgPm2Poll.h"
#include "ublox/message/CfgPm2V2.h"
#include "ublox/message/CfgPmPoll.h"
#include "ublox/message/CfgPms.h"
#include "ublox/message/CfgPmsPoll.h"
#include "ublox/message/CfgPrtDdc.h"
#include "ublox/message/CfgPrtPoll.h"
#include "ublox/message/CfgPrtPortPoll.h"
#include "ublox/message/CfgPrtSpi.h"
#include "ublox/message/CfgPrtUart.h"
#include "ublox/message/CfgPrtUsb.h"
#include "ublox/message/CfgPwr.h"
#include "ublox/message/CfgRate.h"
#include "ublox/message/CfgRatePoll.h"
#include "ublox/message/CfgRinv.h"
#include "ublox/message/CfgRinvPoll.h"
#include "ublox/message/CfgRst.h"
#include "ublox/message/CfgRxm.h"
#include "ublox/message/CfgRxmPoll.h"
#include "ublox/message/CfgSbas.h"
#include "ublox/message/CfgSbasPoll.h"
#include "ublox/message/CfgSmgr.h"
#include "ublox/message/CfgSmgrPoll.h"
#include "ublox/message/CfgTmode.h"
#include "ublox/message/CfgTmode2.h"
#include "ublox/message/CfgTmode2Poll.h"
#include "ublox/message/CfgTmode3.h"
#include "ublox/message/CfgTmode3Poll.h"
#include "ublox/message/CfgTmodePoll.h"
#include "ublox/message/CfgTp.h"
#include "ublox/message/CfgTp5.h"
#include "ublox/message/CfgTp5Poll.h"
#include "ublox/message/CfgTp5PollSelect.h"
#include "ublox/message/CfgTpPoll.h"
#include "ublox/message/CfgTxslot.h"
#include "ublox/message/CfgUsb.h"
#include "ublox/message/CfgUsbPoll.h"
#include "ublox/message/EsfIns.h"
#include "ublox/message/EsfInsPoll.h"
#include "ublox/message/EsfMeas.h"
#include "ublox/message/EsfMeasPoll.h"
#include "ublox/message/EsfRaw.h"
#include "ublox/message/EsfStatus.h"
#include "ublox/message/EsfStatusPoll.h"
#include "ublox/message/HnrPvt.h"
#include "ublox/message/HnrPvtPoll.h"
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
#include "ublox/message/LogRetrieveposextra.h"
#include "ublox/message/LogRetrievestring.h"
#include "ublox/message/LogString.h"
#include "ublox/message/MgaAck.h"
#include "ublox/message/MgaAno.h"
#include "ublox/message/MgaBdsAlm.h"
#include "ublox/message/MgaBdsEph.h"
#include "ublox/message/MgaBdsHealth.h"
#include "ublox/message/MgaBdsIono.h"
#include "ublox/message/MgaBdsUtc.h"
#include "ublox/message/MgaDbd.h"
#include "ublox/message/MgaDbdPoll.h"
#include "ublox/message/MgaFlashAck.h"
#include "ublox/message/MgaFlashEph.h"
#include "ublox/message/MgaFlashStop.h"
#include "ublox/message/MgaGalAlm.h"
#include "ublox/message/MgaGalEph.h"
#include "ublox/message/MgaGalTimeoffset.h"
#include "ublox/message/MgaGalUtc.h"
#include "ublox/message/MgaGloAlm.h"
#include "ublox/message/MgaGloEph.h"
#include "ublox/message/MgaGloTimeoffset.h"
#include "ublox/message/MgaGpsAlm.h"
#include "ublox/message/MgaGpsEph.h"
#include "ublox/message/MgaGpsHealth.h"
#include "ublox/message/MgaGpsIono.h"
#include "ublox/message/MgaGpsUtc.h"
#include "ublox/message/MgaIniClkd.h"
#include "ublox/message/MgaIniEop.h"
#include "ublox/message/MgaIniFreq.h"
#include "ublox/message/MgaIniPosLlh.h"
#include "ublox/message/MgaIniPosXyz.h"
#include "ublox/message/MgaIniTimeGnss.h"
#include "ublox/message/MgaIniTimeUtc.h"
#include "ublox/message/MgaQzssAlm.h"
#include "ublox/message/MgaQzssEph.h"
#include "ublox/message/MgaQzssHealth.h"
#include "ublox/message/MonGnss.h"
#include "ublox/message/MonGnssPoll.h"
#include "ublox/message/MonHw.h"
#include "ublox/message/MonHw2.h"
#include "ublox/message/MonHw2Poll.h"
#include "ublox/message/MonHwPoll.h"
#include "ublox/message/MonIo.h"
#include "ublox/message/MonIoPoll.h"
#include "ublox/message/MonMsgpp.h"
#include "ublox/message/MonMsgppPoll.h"
#include "ublox/message/MonPatch.h"
#include "ublox/message/MonPatchPoll.h"
#include "ublox/message/MonRxbuf.h"
#include "ublox/message/MonRxbufPoll.h"
#include "ublox/message/MonRxr.h"
#include "ublox/message/MonSmgr.h"
#include "ublox/message/MonSmgrPoll.h"
#include "ublox/message/MonTxbuf.h"
#include "ublox/message/MonTxbufPoll.h"
#include "ublox/message/MonVer.h"
#include "ublox/message/MonVerPoll.h"
#include "ublox/message/NavAopstatus.h"
#include "ublox/message/NavAopstatusPoll.h"
#include "ublox/message/NavAopstatusUblox8.h"
#include "ublox/message/NavAtt.h"
#include "ublox/message/NavAttPoll.h"
#include "ublox/message/NavClock.h"
#include "ublox/message/NavClockPoll.h"
#include "ublox/message/NavDgps.h"
#include "ublox/message/NavDgpsPoll.h"
#include "ublox/message/NavDop.h"
#include "ublox/message/NavDopPoll.h"
#include "ublox/message/NavEoe.h"
#include "ublox/message/NavGeofence.h"
#include "ublox/message/NavGeofencePoll.h"
#include "ublox/message/NavHpposecef.h"
#include "ublox/message/NavHpposecefPoll.h"
#include "ublox/message/NavHpposllh.h"
#include "ublox/message/NavHpposllhPoll.h"
#include "ublox/message/NavOdo.h"
#include "ublox/message/NavOdoPoll.h"
#include "ublox/message/NavOrb.h"
#include "ublox/message/NavOrbPoll.h"
#include "ublox/message/NavPosecef.h"
#include "ublox/message/NavPosecefPoll.h"
#include "ublox/message/NavPosllh.h"
#include "ublox/message/NavPosllhPoll.h"
#include "ublox/message/NavPvt.h"
#include "ublox/message/NavPvtPoll.h"
#include "ublox/message/NavPvt_u8.h"
#include "ublox/message/NavRelposned.h"
#include "ublox/message/NavRelposnedPoll.h"
#include "ublox/message/NavResetodo.h"
#include "ublox/message/NavSat.h"
#include "ublox/message/NavSatPoll.h"
#include "ublox/message/NavSbas.h"
#include "ublox/message/NavSbasPoll.h"
#include "ublox/message/NavSol.h"
#include "ublox/message/NavSolPoll.h"
#include "ublox/message/NavStatus.h"
#include "ublox/message/NavStatusPoll.h"
#include "ublox/message/NavSvin.h"
#include "ublox/message/NavSvinPoll.h"
#include "ublox/message/NavSvinfo.h"
#include "ublox/message/NavSvinfoPoll.h"
#include "ublox/message/NavTimebds.h"
#include "ublox/message/NavTimebdsPoll.h"
#include "ublox/message/NavTimegal.h"
#include "ublox/message/NavTimegalPoll.h"
#include "ublox/message/NavTimeglo.h"
#include "ublox/message/NavTimegloPoll.h"
#include "ublox/message/NavTimegps.h"
#include "ublox/message/NavTimegpsPoll.h"
#include "ublox/message/NavTimels.h"
#include "ublox/message/NavTimelsPoll.h"
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
#include "ublox/message/RxmImes.h"
#include "ublox/message/RxmImesPoll.h"
#include "ublox/message/RxmMeasx.h"
#include "ublox/message/RxmPmreq.h"
#include "ublox/message/RxmPmreqV0.h"
#include "ublox/message/RxmRaw.h"
#include "ublox/message/RxmRawPoll.h"
#include "ublox/message/RxmRawx.h"
#include "ublox/message/RxmRawxPoll.h"
#include "ublox/message/RxmRlmLong.h"
#include "ublox/message/RxmRlmShort.h"
#include "ublox/message/RxmRtcm.h"
#include "ublox/message/RxmSfrb.h"
#include "ublox/message/RxmSfrbx.h"
#include "ublox/message/RxmSvsi.h"
#include "ublox/message/RxmSvsiPoll.h"
#include "ublox/message/SecSign.h"
#include "ublox/message/SecUniqid.h"
#include "ublox/message/TimDosc.h"
#include "ublox/message/TimFchg.h"
#include "ublox/message/TimFchgPoll.h"
#include "ublox/message/TimSmeas.h"
#include "ublox/message/TimSvin.h"
#include "ublox/message/TimSvinPoll.h"
#include "ublox/message/TimTm2.h"
#include "ublox/message/TimTm2Poll.h"
#include "ublox/message/TimTos.h"
#include "ublox/message/TimTp.h"
#include "ublox/message/TimTpPoll.h"
#include "ublox/message/TimVcocal.h"
#include "ublox/message/TimVcocalExt.h"
#include "ublox/message/TimVcocalPoll.h"
#include "ublox/message/TimVcocalStop.h"
#include "ublox/message/TimVrfy.h"
#include "ublox/message/TimVrfyPoll.h"
#include "ublox/message/UpdSosAck.h"
#include "ublox/message/UpdSosClear.h"
#include "ublox/message/UpdSosCreate.h"
#include "ublox/message/UpdSosPoll.h"
#include "ublox/message/UpdSosRestored.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = ublox::options::DefaultOptions>
using AllMessages =
    std::tuple<
        ublox::message::NavPosecef<TBase, TOpt>,
        ublox::message::NavPosecefPoll<TBase, TOpt>,
        ublox::message::NavPosllh<TBase, TOpt>,
        ublox::message::NavPosllhPoll<TBase, TOpt>,
        ublox::message::NavStatus<TBase, TOpt>,
        ublox::message::NavStatusPoll<TBase, TOpt>,
        ublox::message::NavDop<TBase, TOpt>,
        ublox::message::NavDopPoll<TBase, TOpt>,
        ublox::message::NavAtt<TBase, TOpt>,
        ublox::message::NavAttPoll<TBase, TOpt>,
        ublox::message::NavSol<TBase, TOpt>,
        ublox::message::NavSolPoll<TBase, TOpt>,
        ublox::message::NavPvt_u8<TBase, TOpt>,
        ublox::message::NavPvt<TBase, TOpt>,
        ublox::message::NavPvtPoll<TBase, TOpt>,
        ublox::message::NavOdo<TBase, TOpt>,
        ublox::message::NavOdoPoll<TBase, TOpt>,
        ublox::message::NavResetodo<TBase, TOpt>,
        ublox::message::NavVelecef<TBase, TOpt>,
        ublox::message::NavVelecefPoll<TBase, TOpt>,
        ublox::message::NavVelned<TBase, TOpt>,
        ublox::message::NavVelnedPoll<TBase, TOpt>,
        ublox::message::NavHpposecef<TBase, TOpt>,
        ublox::message::NavHpposecefPoll<TBase, TOpt>,
        ublox::message::NavHpposllh<TBase, TOpt>,
        ublox::message::NavHpposllhPoll<TBase, TOpt>,
        ublox::message::NavTimegps<TBase, TOpt>,
        ublox::message::NavTimegpsPoll<TBase, TOpt>,
        ublox::message::NavTimeutc<TBase, TOpt>,
        ublox::message::NavTimeutcPoll<TBase, TOpt>,
        ublox::message::NavClock<TBase, TOpt>,
        ublox::message::NavClockPoll<TBase, TOpt>,
        ublox::message::NavTimeglo<TBase, TOpt>,
        ublox::message::NavTimegloPoll<TBase, TOpt>,
        ublox::message::NavTimebds<TBase, TOpt>,
        ublox::message::NavTimebdsPoll<TBase, TOpt>,
        ublox::message::NavTimegal<TBase, TOpt>,
        ublox::message::NavTimegalPoll<TBase, TOpt>,
        ublox::message::NavTimels<TBase, TOpt>,
        ublox::message::NavTimelsPoll<TBase, TOpt>,
        ublox::message::NavSvinfo<TBase, TOpt>,
        ublox::message::NavSvinfoPoll<TBase, TOpt>,
        ublox::message::NavDgps<TBase, TOpt>,
        ublox::message::NavDgpsPoll<TBase, TOpt>,
        ublox::message::NavSbas<TBase, TOpt>,
        ublox::message::NavSbasPoll<TBase, TOpt>,
        ublox::message::NavOrb<TBase, TOpt>,
        ublox::message::NavOrbPoll<TBase, TOpt>,
        ublox::message::NavSat<TBase, TOpt>,
        ublox::message::NavSatPoll<TBase, TOpt>,
        ublox::message::NavGeofence<TBase, TOpt>,
        ublox::message::NavGeofencePoll<TBase, TOpt>,
        ublox::message::NavSvin<TBase, TOpt>,
        ublox::message::NavSvinPoll<TBase, TOpt>,
        ublox::message::NavRelposned<TBase, TOpt>,
        ublox::message::NavRelposnedPoll<TBase, TOpt>,
        ublox::message::NavAopstatus<TBase, TOpt>,
        ublox::message::NavAopstatusUblox8<TBase, TOpt>,
        ublox::message::NavAopstatusPoll<TBase, TOpt>,
        ublox::message::NavEoe<TBase, TOpt>,
        ublox::message::RxmRaw<TBase, TOpt>,
        ublox::message::RxmRawPoll<TBase, TOpt>,
        ublox::message::RxmSfrb<TBase, TOpt>,
        ublox::message::RxmSfrbx<TBase, TOpt>,
        ublox::message::RxmMeasx<TBase, TOpt>,
        ublox::message::RxmRawx<TBase, TOpt>,
        ublox::message::RxmRawxPoll<TBase, TOpt>,
        ublox::message::RxmSvsi<TBase, TOpt>,
        ublox::message::RxmSvsiPoll<TBase, TOpt>,
        ublox::message::RxmAlm<TBase, TOpt>,
        ublox::message::RxmAlmPollSv<TBase, TOpt>,
        ublox::message::RxmAlmPoll<TBase, TOpt>,
        ublox::message::RxmEph<TBase, TOpt>,
        ublox::message::RxmEphPollSv<TBase, TOpt>,
        ublox::message::RxmEphPoll<TBase, TOpt>,
        ublox::message::RxmRtcm<TBase, TOpt>,
        ublox::message::RxmPmreqV0<TBase, TOpt>,
        ublox::message::RxmPmreq<TBase, TOpt>,
        ublox::message::RxmRlmLong<TBase, TOpt>,
        ublox::message::RxmRlmShort<TBase, TOpt>,
        ublox::message::RxmImes<TBase, TOpt>,
        ublox::message::RxmImesPoll<TBase, TOpt>,
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
        ublox::message::CfgDatStandard<TBase, TOpt>,
        ublox::message::CfgDatPoll<TBase, TOpt>,
        ublox::message::CfgTp<TBase, TOpt>,
        ublox::message::CfgTpPoll<TBase, TOpt>,
        ublox::message::CfgRate<TBase, TOpt>,
        ublox::message::CfgRatePoll<TBase, TOpt>,
        ublox::message::CfgCfg<TBase, TOpt>,
        ublox::message::CfgFxn<TBase, TOpt>,
        ublox::message::CfgFxnPoll<TBase, TOpt>,
        ublox::message::CfgRxm<TBase, TOpt>,
        ublox::message::CfgRxmPoll<TBase, TOpt>,
        ublox::message::CfgEkf<TBase, TOpt>,
        ublox::message::CfgEkfPoll<TBase, TOpt>,
        ublox::message::CfgAnt<TBase, TOpt>,
        ublox::message::CfgAntPoll<TBase, TOpt>,
        ublox::message::CfgSbas<TBase, TOpt>,
        ublox::message::CfgSbasPoll<TBase, TOpt>,
        ublox::message::CfgNmeaV1<TBase, TOpt>,
        ublox::message::CfgNmeaV0<TBase, TOpt>,
        ublox::message::CfgNmea<TBase, TOpt>,
        ublox::message::CfgNmeaPoll<TBase, TOpt>,
        ublox::message::CfgUsb<TBase, TOpt>,
        ublox::message::CfgUsbPoll<TBase, TOpt>,
        ublox::message::CfgTmode<TBase, TOpt>,
        ublox::message::CfgTmodePoll<TBase, TOpt>,
        ublox::message::CfgOdo<TBase, TOpt>,
        ublox::message::CfgOdoPoll<TBase, TOpt>,
        ublox::message::CfgNvs<TBase, TOpt>,
        ublox::message::CfgNavx5V3<TBase, TOpt>,
        ublox::message::CfgNavx5V2<TBase, TOpt>,
        ublox::message::CfgNavx5<TBase, TOpt>,
        ublox::message::CfgNavx5Poll<TBase, TOpt>,
        ublox::message::CfgNav5<TBase, TOpt>,
        ublox::message::CfgNav5Poll<TBase, TOpt>,
        ublox::message::CfgTp5<TBase, TOpt>,
        ublox::message::CfgTp5PollSelect<TBase, TOpt>,
        ublox::message::CfgTp5Poll<TBase, TOpt>,
        ublox::message::CfgPm<TBase, TOpt>,
        ublox::message::CfgPmPoll<TBase, TOpt>,
        ublox::message::CfgRinv<TBase, TOpt>,
        ublox::message::CfgRinvPoll<TBase, TOpt>,
        ublox::message::CfgItfm<TBase, TOpt>,
        ublox::message::CfgItfmPoll<TBase, TOpt>,
        ublox::message::CfgPm2V2<TBase, TOpt>,
        ublox::message::CfgPm2<TBase, TOpt>,
        ublox::message::CfgPm2Poll<TBase, TOpt>,
        ublox::message::CfgTmode2<TBase, TOpt>,
        ublox::message::CfgTmode2Poll<TBase, TOpt>,
        ublox::message::CfgGnss<TBase, TOpt>,
        ublox::message::CfgGnssPoll<TBase, TOpt>,
        ublox::message::CfgLogfilter<TBase, TOpt>,
        ublox::message::CfgLogfilterPoll<TBase, TOpt>,
        ublox::message::CfgTxslot<TBase, TOpt>,
        ublox::message::CfgPwr<TBase, TOpt>,
        ublox::message::CfgHnr<TBase, TOpt>,
        ublox::message::CfgHnrPoll<TBase, TOpt>,
        ublox::message::CfgEsrc<TBase, TOpt>,
        ublox::message::CfgEsrcPoll<TBase, TOpt>,
        ublox::message::CfgDosc<TBase, TOpt>,
        ublox::message::CfgDoscPoll<TBase, TOpt>,
        ublox::message::CfgSmgr<TBase, TOpt>,
        ublox::message::CfgSmgrPoll<TBase, TOpt>,
        ublox::message::CfgGeofence<TBase, TOpt>,
        ublox::message::CfgGeofencePoll<TBase, TOpt>,
        ublox::message::CfgDgnss<TBase, TOpt>,
        ublox::message::CfgDgnssPoll<TBase, TOpt>,
        ublox::message::CfgTmode3<TBase, TOpt>,
        ublox::message::CfgTmode3Poll<TBase, TOpt>,
        ublox::message::CfgFixseed<TBase, TOpt>,
        ublox::message::CfgPms<TBase, TOpt>,
        ublox::message::CfgPmsPoll<TBase, TOpt>,
        ublox::message::UpdSosRestored<TBase, TOpt>,
        ublox::message::UpdSosAck<TBase, TOpt>,
        ublox::message::UpdSosClear<TBase, TOpt>,
        ublox::message::UpdSosCreate<TBase, TOpt>,
        ublox::message::UpdSosPoll<TBase, TOpt>,
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
        ublox::message::MonPatch<TBase, TOpt>,
        ublox::message::MonPatchPoll<TBase, TOpt>,
        ublox::message::MonGnss<TBase, TOpt>,
        ublox::message::MonGnssPoll<TBase, TOpt>,
        ublox::message::MonSmgr<TBase, TOpt>,
        ublox::message::MonSmgrPoll<TBase, TOpt>,
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
        ublox::message::AidAopU8<TBase, TOpt>,
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
        ublox::message::TimSvin<TBase, TOpt>,
        ublox::message::TimSvinPoll<TBase, TOpt>,
        ublox::message::TimDosc<TBase, TOpt>,
        ublox::message::TimTos<TBase, TOpt>,
        ublox::message::TimSmeas<TBase, TOpt>,
        ublox::message::TimVcocal<TBase, TOpt>,
        ublox::message::TimVcocalExt<TBase, TOpt>,
        ublox::message::TimVcocalStop<TBase, TOpt>,
        ublox::message::TimVcocalPoll<TBase, TOpt>,
        ublox::message::TimFchg<TBase, TOpt>,
        ublox::message::TimFchgPoll<TBase, TOpt>,
        ublox::message::EsfMeas<TBase, TOpt>,
        ublox::message::EsfMeasPoll<TBase, TOpt>,
        ublox::message::EsfRaw<TBase, TOpt>,
        ublox::message::EsfStatus<TBase, TOpt>,
        ublox::message::EsfStatusPoll<TBase, TOpt>,
        ublox::message::EsfIns<TBase, TOpt>,
        ublox::message::EsfInsPoll<TBase, TOpt>,
        ublox::message::MgaGpsEph<TBase, TOpt>,
        ublox::message::MgaGpsAlm<TBase, TOpt>,
        ublox::message::MgaGpsHealth<TBase, TOpt>,
        ublox::message::MgaGpsUtc<TBase, TOpt>,
        ublox::message::MgaGpsIono<TBase, TOpt>,
        ublox::message::MgaGalEph<TBase, TOpt>,
        ublox::message::MgaGalAlm<TBase, TOpt>,
        ublox::message::MgaGalTimeoffset<TBase, TOpt>,
        ublox::message::MgaGalUtc<TBase, TOpt>,
        ublox::message::MgaBdsEph<TBase, TOpt>,
        ublox::message::MgaBdsAlm<TBase, TOpt>,
        ublox::message::MgaBdsHealth<TBase, TOpt>,
        ublox::message::MgaBdsUtc<TBase, TOpt>,
        ublox::message::MgaBdsIono<TBase, TOpt>,
        ublox::message::MgaQzssEph<TBase, TOpt>,
        ublox::message::MgaQzssAlm<TBase, TOpt>,
        ublox::message::MgaQzssHealth<TBase, TOpt>,
        ublox::message::MgaGloEph<TBase, TOpt>,
        ublox::message::MgaGloAlm<TBase, TOpt>,
        ublox::message::MgaGloTimeoffset<TBase, TOpt>,
        ublox::message::MgaAno<TBase, TOpt>,
        ublox::message::MgaFlashEph<TBase, TOpt>,
        ublox::message::MgaFlashAck<TBase, TOpt>,
        ublox::message::MgaFlashStop<TBase, TOpt>,
        ublox::message::MgaIniPosXyz<TBase, TOpt>,
        ublox::message::MgaIniPosLlh<TBase, TOpt>,
        ublox::message::MgaIniTimeUtc<TBase, TOpt>,
        ublox::message::MgaIniTimeGnss<TBase, TOpt>,
        ublox::message::MgaIniClkd<TBase, TOpt>,
        ublox::message::MgaIniFreq<TBase, TOpt>,
        ublox::message::MgaIniEop<TBase, TOpt>,
        ublox::message::MgaAck<TBase, TOpt>,
        ublox::message::MgaDbd<TBase, TOpt>,
        ublox::message::MgaDbdPoll<TBase, TOpt>,
        ublox::message::LogErase<TBase, TOpt>,
        ublox::message::LogString<TBase, TOpt>,
        ublox::message::LogCreate<TBase, TOpt>,
        ublox::message::LogInfo<TBase, TOpt>,
        ublox::message::LogInfoPoll<TBase, TOpt>,
        ublox::message::LogRetrieve<TBase, TOpt>,
        ublox::message::LogRetrievepos<TBase, TOpt>,
        ublox::message::LogRetrievestring<TBase, TOpt>,
        ublox::message::LogFindtime<TBase, TOpt>,
        ublox::message::LogFindtimeResp<TBase, TOpt>,
        ublox::message::LogRetrieveposextra<TBase, TOpt>,
        ublox::message::SecSign<TBase, TOpt>,
        ublox::message::SecUniqid<TBase, TOpt>,
        ublox::message::HnrPvt<TBase, TOpt>,
        ublox::message::HnrPvtPoll<TBase, TOpt>
    >;

} // namespace input

} // namespace ublox


