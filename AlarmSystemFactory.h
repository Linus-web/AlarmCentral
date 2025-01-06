#ifndef ALARMSYSTEMFACTORY_H
#define ALARMSYSTEMFACTORY_H

#include <vector>
#include "AlarmSystem.h"
#include "Sensor.h"

// A simple factory for creating AlarmSystem objects.
class AlarmSystemFactory {
public:
    // Create an AlarmSystem with no sensors (empty).
    static AlarmSystem createEmptyAlarmSystem();

    // Create an AlarmSystem with a predefined list of sensors.
    static AlarmSystem createAlarmSystemWithSensors(const std::vector<Sensor>& sensors);

    // You can add more methods, for example:
    // static AlarmSystem createDefaultHomeAlarmSystem();
    // static AlarmSystem createFireAndCarbonMonoxideSystem();
};

#endif // ALARMSYSTEMFACTORY_H
