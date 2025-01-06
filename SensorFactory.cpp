#include "SensorFactory.h"

Sensor SensorFactory::createSensor(const std::string& name) {
    return Sensor(name);
}
