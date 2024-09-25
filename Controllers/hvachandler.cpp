#include "hvachandler.h"
#include <QtGlobal>  // For qBound()

HVACHandler::HVACHandler(QObject *parent)
    : QObject{parent}
    , m_targetTemp(24)  // Initialize default target temperature
{
}

int HVACHandler::targetTemp() const
{
    return m_targetTemp;
}

void HVACHandler::incrementTargetTemp(const int &val)
{
    int newTargetTemp = m_targetTemp + val;
    setTargetTemp(newTargetTemp);
}

void HVACHandler::setTargetTemp(int newTargetTemp)
{
    // Clamp newTargetTemp between 16 and 35 using qBound()
    newTargetTemp = qBound(16, newTargetTemp, 35);

    // Only update if the target temperature has changed
    if (m_targetTemp == newTargetTemp)
        return;

    m_targetTemp = newTargetTemp;
    emit targetTempChanged();
}
