#ifndef HVACHANDLER_H
#define HVACHANDLER_H

#include <QObject>

class HVACHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int targetTemp READ targetTemp WRITE setTargetTemp NOTIFY targetTempChanged FINAL)
public:
    explicit HVACHandler(QObject *parent = nullptr);

    int targetTemp() const;
    Q_INVOKABLE void incrementTargetTemp( const int & val);
    void setTargetTemp(int newTargetTemp);

signals:

    void targetTempChanged();

private:

    int m_targetTemp;

};

#endif // HVACHANDLER_H
