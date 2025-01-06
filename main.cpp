#include <iostream>
#include "SensorFactory.h"
#include "AlarmSystemFactory.h"

int main() {
    // Create some sensors using the SensorFactory
    Sensor motion = SensorFactory::createSensor("Motion Sensor");
    Sensor smoke  = SensorFactory::createSensor("Smoke Detector");
    Sensor door   = SensorFactory::createSensor("Door Contact");

    // Create an AlarmSystem with no sensors
    AlarmSystem emptySystem = AlarmSystemFactory::createEmptyAlarmSystem();

    // Create an AlarmSystem with a predefined list of sensors
    std::vector<Sensor> homeSensors = { motion, smoke, door };
    AlarmSystem homeSystem = AlarmSystemFactory::createAlarmSystemWithSensors(homeSensors);

    // Print out the sensors in each system
    std::cout << "Empty System has " << emptySystem.getSensors().size() << " sensors.\n";
    std::cout << "Home System has "  << homeSystem.getSensors().size()  << " sensors:\n";
    for (const auto& sensor : homeSystem.getSensors()) {
        std::cout << "  - " << sensor.getName() << "\n";
    }

    return 0;
}
