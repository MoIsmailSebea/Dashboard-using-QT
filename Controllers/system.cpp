#include "system.h"
#include <QDateTime>

System::System(QObject *parent)
    : QObject{parent}
    , m_carlocked ( true )
    , m_outdoorTemp (30)
    , m_userName ("Mohamed")
    , m_sunrooflocked ( true )
    , m_tractionControl ( true )
{
    m_currentTimeTimer = new QTimer(this);
    m_currentTimeTimer-> setInterval(500);
    m_currentTimeTimer-> setSingleShot( true );
    connect( m_currentTimeTimer, &QTimer::timeout, this, &System::currentTimeTimerTimeout );

    currentTimeTimerTimeout();
}

bool System::carlocked() const
{
    return m_carlocked;
}

void System::setCarlocked(bool newCarlocked)
{
    if (m_carlocked == newCarlocked)
    return;
    m_carlocked = newCarlocked;
    emit carlockedChanged();
}


int System::outdoorTemp() const
{
    return m_outdoorTemp;
}

void System::setOutdoorTemp(int newOutdoorTemp)
{
    if (m_outdoorTemp == newOutdoorTemp)
        return;
    m_outdoorTemp = newOutdoorTemp;
    emit outdoorTempChanged();
}

QString System::userName() const
{
    return m_userName;
}

void System::setUserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}

QString System::currentTime() const
{
    return m_currentTime;
}

void System::setCurrentTime(const QString &newCurrentTime)
{
    if (m_currentTime == newCurrentTime)
        return;
    m_currentTime = newCurrentTime;
    emit currentTimeChanged();
}

void System::currentTimeTimerTimeout()
{
    QDateTime datetime;
    QString currentTime = datetime.currentDateTime().toString( "h:mm ap");

    setCurrentTime(currentTime);
    m_currentTimeTimer->start();
}


bool System::sunrooflocked() const
{
    return m_sunrooflocked;
}

void System::setSunrooflocked(bool newSunrooflocked)
{
    if (m_sunrooflocked == newSunrooflocked)
        return;
    m_sunrooflocked = newSunrooflocked;
    emit sunrooflockedChanged();
}

bool System::tractionControl() const
{
    return m_tractionControl;
}

void System::setTractionControl(bool newTractionControl)
{
    if (m_tractionControl == newTractionControl)
        return;
    m_tractionControl = newTractionControl;
    emit tractionControlChanged();
}
