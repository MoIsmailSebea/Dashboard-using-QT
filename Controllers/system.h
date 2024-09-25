#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QTimer>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carlocked READ carlocked WRITE setCarlocked NOTIFY carlockedChanged FINAL)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged FINAL)
    Q_PROPERTY(bool sunrooflocked READ sunrooflocked WRITE setSunrooflocked NOTIFY sunrooflockedChanged FINAL)
    Q_PROPERTY(bool tractionControl READ tractionControl WRITE setTractionControl NOTIFY tractionControlChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    bool carlocked() const;
    Q_INVOKABLE void setCarlocked(bool newCarlocked);

    int outdoorTemp() const;
    void setOutdoorTemp(int newOutdoorTemp);

    QString userName() const;
    void setUserName(const QString &newUserName);

    QString currentTime() const;
    void setCurrentTime(const QString &newCurrentTime);

    void currentTimeTimerTimeout();

    bool sunrooflocked() const;
    Q_INVOKABLE void setSunrooflocked(bool newSunrooflocked);


    bool tractionControl() const;
    Q_INVOKABLE void setTractionControl(bool newTractionControl);

signals:

    void carlockedChanged();

    void outdoorTempChanged();

    void userNameChanged();

    void currentTimeChanged();

    void sunrooflockedChanged();

    void tractionControlChanged();

private:

    bool m_carlocked;
    int m_outdoorTemp;
    QString m_userName;
    QString m_currentTime;
    QTimer * m_currentTimeTimer;
    bool m_sunrooflocked;
    bool m_tractionControl;
};

#endif // SYSTEM_H
