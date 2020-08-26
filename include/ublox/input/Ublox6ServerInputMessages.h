// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of all "ublox6" server input messages bundle.

#pragma once

#include <tuple>
#include "ublox/message/AidAlmPoll.h"
#include "ublox/message/AidAlmPollSv.h"
#include "ublox/message/AidAlp.h"
#include "ublox/message/AidAlpData.h"
#include "ublox/message/AidAlpStatus.h"
#include "ublox/message/AidAlpsrv.h"
#include "ublox/message/AidAop.h"
#include "ublox/message/AidAopPoll.h"
#include "ublox/message/AidAopPollSv.h"
#include "ublox/message/AidData.h"
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
#include "ublox/message/CfgDatPoll.h"
#include "ublox/message/CfgDatStandard.h"
#include "ublox/message/CfgDatUser.h"
#include "ublox/message/CfgEkf.h"
#include "ublox/message/CfgEkfPoll.h"
#include "ublox/message/CfgFxn.h"
#include "ublox/message/CfgFxnPoll.h"
#include "ublox/message/CfgInf.h"
#include "ublox/message/CfgInfPoll.h"
#include "ublox/message/CfgItfm.h"
#include "ublox/message/CfgItfmPoll.h"
#include "ublox/message/CfgMsg.h"
#include "ublox/message/CfgMsgCurrent.h"
#include "ublox/message/CfgMsgPoll.h"
#include "ublox/message/CfgNav5.h"
#include "ublox/message/CfgNav5Poll.h"
#include "ublox/message/CfgNavx5.h"
#include "ublox/message/CfgNavx5Poll.h"
#include "ublox/message/CfgNmea.h"
#include "ublox/message/CfgNmeaPoll.h"
#include "ublox/message/CfgNvs.h"
#include "ublox/message/CfgPm.h"
#include "ublox/message/CfgPm2.h"
#include "ublox/message/CfgPm2Poll.h"
#include "ublox/message/CfgPmPoll.h"
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
#include "ublox/message/CfgTmode.h"
#include "ublox/message/CfgTmode2.h"
#include "ublox/message/CfgTmode2Poll.h"
#include "ublox/message/CfgTmodePoll.h"
#include "ublox/message/CfgTp.h"
#include "ublox/message/CfgTp5.h"
#include "ublox/message/CfgTp5Poll.h"
#include "ublox/message/CfgTp5PollSelect.h"
#include "ublox/message/CfgTpPoll.h"
#include "ublox/message/CfgUsb.h"
#include "ublox/message/CfgUsbPoll.h"
#include "ublox/message/EsfMeas.h"
#include "ublox/message/EsfMeasPoll.h"
#include "ublox/message/EsfStatusPoll.h"
#include "ublox/message/MonHw2Poll.h"
#include "ublox/message/MonHwPoll.h"
#include "ublox/message/MonIoPoll.h"
#include "ublox/message/MonMsgppPoll.h"
#include "ublox/message/MonRxbufPoll.h"
#include "ublox/message/MonTxbufPoll.h"
#include "ublox/message/MonVerPoll.h"
#include "ublox/message/NavAopstatusPoll.h"
#include "ublox/message/NavClockPoll.h"
#include "ublox/message/NavDgpsPoll.h"
#include "ublox/message/NavDopPoll.h"
#include "ublox/message/NavPosecefPoll.h"
#include "ublox/message/NavPosllhPoll.h"
#include "ublox/message/NavSbasPoll.h"
#include "ublox/message/NavSolPoll.h"
#include "ublox/message/NavStatusPoll.h"
#include "ublox/message/NavSvinfoPoll.h"
#include "ublox/message/NavTimegpsPoll.h"
#include "ublox/message/NavTimeutcPoll.h"
#include "ublox/message/NavVelecefPoll.h"
#include "ublox/message/NavVelnedPoll.h"
#include "ublox/message/RxmAlmPoll.h"
#include "ublox/message/RxmAlmPollSv.h"
#include "ublox/message/RxmEphPoll.h"
#include "ublox/message/RxmEphPollSv.h"
#include "ublox/message/RxmPmreq.h"
#include "ublox/message/RxmRawPoll.h"
#include "ublox/message/RxmSvsiPoll.h"
#include "ublox/message/TimSvinPoll.h"
#include "ublox/message/TimTm2Poll.h"
#include "ublox/message/TimTpPoll.h"
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
using Ublox6ServerInputMessages =
    std::tuple<
        ublox::message::NavPosecefPoll<TBase, TOpt>,
        ublox::message::NavPosllhPoll<TBase, TOpt>,
        ublox::message::NavStatusPoll<TBase, TOpt>,
        ublox::message::NavDopPoll<TBase, TOpt>,
        ublox::message::NavSolPoll<TBase, TOpt>,
        ublox::message::NavVelecefPoll<TBase, TOpt>,
        ublox::message::NavVelnedPoll<TBase, TOpt>,
        ublox::message::NavTimegpsPoll<TBase, TOpt>,
        ublox::message::NavTimeutcPoll<TBase, TOpt>,
        ublox::message::NavClockPoll<TBase, TOpt>,
        ublox::message::NavSvinfoPoll<TBase, TOpt>,
        ublox::message::NavDgpsPoll<TBase, TOpt>,
        ublox::message::NavSbasPoll<TBase, TOpt>,
        ublox::message::NavAopstatusPoll<TBase, TOpt>,
        ublox::message::RxmRawPoll<TBase, TOpt>,
        ublox::message::RxmSvsiPoll<TBase, TOpt>,
        ublox::message::RxmAlmPollSv<TBase, TOpt>,
        ublox::message::RxmAlmPoll<TBase, TOpt>,
        ublox::message::RxmEphPollSv<TBase, TOpt>,
        ublox::message::RxmEphPoll<TBase, TOpt>,
        ublox::message::RxmPmreq<TBase, TOpt>,
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
        ublox::message::CfgNmea<TBase, TOpt>,
        ublox::message::CfgNmeaPoll<TBase, TOpt>,
        ublox::message::CfgUsb<TBase, TOpt>,
        ublox::message::CfgUsbPoll<TBase, TOpt>,
        ublox::message::CfgTmode<TBase, TOpt>,
        ublox::message::CfgTmodePoll<TBase, TOpt>,
        ublox::message::CfgNvs<TBase, TOpt>,
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
        ublox::message::CfgPm2<TBase, TOpt>,
        ublox::message::CfgPm2Poll<TBase, TOpt>,
        ublox::message::CfgTmode2<TBase, TOpt>,
        ublox::message::CfgTmode2Poll<TBase, TOpt>,
        ublox::message::MonIoPoll<TBase, TOpt>,
        ublox::message::MonVerPoll<TBase, TOpt>,
        ublox::message::MonMsgppPoll<TBase, TOpt>,
        ublox::message::MonRxbufPoll<TBase, TOpt>,
        ublox::message::MonTxbufPoll<TBase, TOpt>,
        ublox::message::MonHwPoll<TBase, TOpt>,
        ublox::message::MonHw2Poll<TBase, TOpt>,
        ublox::message::AidReq<TBase, TOpt>,
        ublox::message::AidIni<TBase, TOpt>,
        ublox::message::AidIniPoll<TBase, TOpt>,
        ublox::message::AidHui<TBase, TOpt>,
        ublox::message::AidHuiPoll<TBase, TOpt>,
        ublox::message::AidData<TBase, TOpt>,
        ublox::message::AidAlmPollSv<TBase, TOpt>,
        ublox::message::AidAlmPoll<TBase, TOpt>,
        ublox::message::AidEphPollSv<TBase, TOpt>,
        ublox::message::AidEphPoll<TBase, TOpt>,
        ublox::message::AidAlpsrv<TBase, TOpt>,
        ublox::message::AidAop<TBase, TOpt>,
        ublox::message::AidAopPollSv<TBase, TOpt>,
        ublox::message::AidAopPoll<TBase, TOpt>,
        ublox::message::AidAlp<TBase, TOpt>,
        ublox::message::AidAlpStatus<TBase, TOpt>,
        ublox::message::AidAlpData<TBase, TOpt>,
        ublox::message::TimTpPoll<TBase, TOpt>,
        ublox::message::TimTm2Poll<TBase, TOpt>,
        ublox::message::TimVrfyPoll<TBase, TOpt>,
        ublox::message::TimSvinPoll<TBase, TOpt>,
        ublox::message::EsfMeas<TBase, TOpt>,
        ublox::message::EsfMeasPoll<TBase, TOpt>,
        ublox::message::EsfStatusPoll<TBase, TOpt>
    >;

} // namespace input

} // namespace ublox


