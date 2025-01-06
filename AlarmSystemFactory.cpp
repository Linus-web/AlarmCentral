#include "AlarmSystemFactory.h"

AlarmSystem AlarmSystemFactory::createEmptyAlarmSystem() {
    // Creates an empty AlarmSystem with no sensors
    return AlarmSystem();
}

AlarmSystem AlarmSystemFactory::createAlarmSystemWithSensors(const std::vector<Sensor>& sensors) {
    AlarmSystem system;
    for (const auto& sensor : sensors) {
        system.addSensor(sensor);
    }
    return system;
}
