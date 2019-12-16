/// @file
/// @brief Contains dispatch to handling function(s) for "ublox5" client input messages.

#pragma once

#include <type_traits>
#include "ublox/MsgId.h"
#include "ublox/input/Ublox5ClientInputMessages.h"

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
/// @note Defined in ublox/dispatch/DispatchUblox5ClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox5ClientInputMessage(
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
    case ublox::MsgId_NavSol:
    {
        using MsgType = ublox::message::NavSol<InterfaceType, TProtOptions>;
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
    case ublox::MsgId_NavSvinfo:
    {
        using MsgType = ublox::message::NavSvinfo<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_NavSbas:
    {
        using MsgType = ublox::message::NavSbas<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_RxmSvsi:
    {
        using MsgType = ublox::message::RxmSvsi<InterfaceType, TProtOptions>;
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
    case ublox::MsgId_CfgTp:
    {
        using MsgType = ublox::message::CfgTp<InterfaceType, TProtOptions>;
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
        using MsgType = ublox::message::CfgNmea<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgUsb:
    {
        using MsgType = ublox::message::CfgUsb<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgTmode:
    {
        using MsgType = ublox::message::CfgTmode<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgNavx5:
    {
        using MsgType = ublox::message::CfgNavx5<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case ublox::MsgId_CfgNav5:
    {
        using MsgType = ublox::message::CfgNav5<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
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
        using MsgType = ublox::message::AidAlpStatus<InterfaceType, TProtOptions>;
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
    case ublox::MsgId_TimSvin:
    {
        using MsgType = ublox::message::TimSvin<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5ClientInputMessage(), but without @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5ClientInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox5ClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox5ClientInputMessage(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5ClientInputMessage<TProtOptions>(id, 0U, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5ClientInputMessage(), but passing
///     ublox::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5ClientInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox5ClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox5ClientInputMessageDefaultOptions(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5ClientInputMessage<ublox::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5ClientInputMessageDefaultOptions(), 
///     but without @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5ClientInputMessageDefaultOptions()
/// @note Defined in ublox/dispatch/DispatchUblox5ClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox5ClientInputMessageDefaultOptions(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5ClientInputMessage<ublox::options::DefaultOptions>(id, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @headerfile "ublox/dispatch/DispatchUblox5ClientInputMessage.h"
template <typename TProtOptions>
struct Ublox5ClientInputMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchUblox5ClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox5ClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox5ClientInputMessage<TProtOptions>(id, idx, msg, handler))
    {
        return ublox::dispatch::dispatchUblox5ClientInputMessage<TProtOptions>(id, idx, msg, handler);
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
    /// @details Uses appropriate @ref dispatchUblox5ClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchUblox5ClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(ublox::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(ublox::dispatch::dispatchUblox5ClientInputMessage<TProtOptions>(id, msg, handler))
    {
        return ublox::dispatch::dispatchUblox5ClientInputMessage<TProtOptions>(id, msg, handler);
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
/// @details Same as @ref Ublox5ClientInputMsgDispatcher, but passing
///     @ref ublox::options::DefaultOptions as template parameter.
/// @note Defined in "ublox/dispatch/DispatchUblox5ClientInputMessage.h"
using Ublox5ClientInputMsgDispatcherDefaultOptions =
    Ublox5ClientInputMsgDispatcher<ublox::options::DefaultOptions>;

} // namespace dispatch

} // namespace ublox


