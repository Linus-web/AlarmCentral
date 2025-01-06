#ifndef SENSORFACTORY_H
#define SENSORFACTORY_H

#include <string>
#include "Sensor.h"

// A simple factory for creating Sensor objects.
class SensorFactory {
public:
    // Create a new Sensor with a given name.
    static Sensor createSensor(const std::string& name);

    // Add more methods here if you want to create specialized sensors.
    // e.g. static Sensor createMotionSensor();
    //      static Sensor createSmokeDetector();
};

#endif // SENSORFACTORY_H
