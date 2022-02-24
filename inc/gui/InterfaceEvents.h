#pragma once

#include <QtCore/QEvent>
#include <QtCore/QTime>

#include "RspMsgs.h"
#include "CmdMsgs.h"

enum EInterfaceEvent
{
    UI_EVT_CONN = 1000,
    UI_EVT_DRONE_STATE,
    UI_EVT_MISSION_CHANGED,
    UI_EVT_MISSION_STARTED,
    UI_EVT_GET_AIR_SENS_START,
    UI_EVT_GET_AIR_SENS_PERCENT,
    UI_EVT_GET_AIR_SENS_STOP,
};

class QConnectionEvent : public QEvent
{
public:
    explicit QConnectionEvent(bool bConnected)
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_CONN), m_bConnected(bConnected) {};
    bool m_bConnected;
};

class QDroneStateEvent : public QEvent
{
public:
    explicit QDroneStateEvent(SDroneState state)
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_DRONE_STATE), m_state(state) {};
    SDroneState m_state;
};

class QMissionChangedEvent : public QEvent
{
public:
    explicit QMissionChangedEvent(SMissionData data, uint32_t hash, bool bWorking)
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_MISSION_CHANGED), m_data(data), m_hash(hash), m_bWorking(bWorking) {};
    SMissionData m_data;
    uint32_t m_hash;
    bool m_bWorking;
};

class QMissionStartedEvent : public QEvent
{
public:
    explicit QMissionStartedEvent()
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_MISSION_STARTED) {};
};

class QGetAirSensStartEvent : public QEvent
{
public:
    explicit QGetAirSensStartEvent()
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_GET_AIR_SENS_START) {};
};

class QGetAirSensPercentEvent : public QEvent
{
public:
    explicit QGetAirSensPercentEvent(int percent)
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_GET_AIR_SENS_PERCENT), m_percent(percent) {};
    int m_percent;
};

class QGetAirSensStopEvent : public QEvent
{
public:
    explicit QGetAirSensStopEvent()
        : QEvent((QEvent::Type)EInterfaceEvent::UI_EVT_GET_AIR_SENS_STOP) {};
};
