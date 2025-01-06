#include "AlarmSystem.h"

// Default constructor
AlarmSystem::AlarmSystem() = default;

// Add a sensor to the vector
void AlarmSystem::addSensor(const Sensor& sensor) {
    sensors_.push_back(sensor);
}

// Remove a sensor by name
void AlarmSystem::removeSensor(const std::string& sensorName) {
    sensors_.erase(
        std::remove_if(sensors_.begin(), sensors_.end(),
                       [&](const Sensor& s){
                           return s.getName() == sensorName;
                       }),
        sensors_.end()
    );
}

// Get a sensor by name (returns pointer or nullptr if not found)
Sensor* AlarmSystem::getSensor(const std::string& sensorName) {
    for (auto& sensor : sensors_) {
        if (sensor.getName() == sensorName) {
            return &sensor;
        }
    }
    return nullptr;
}

// Return a const reference to the entire sensor list
const std::vector<Sensor>& AlarmSystem::getSensors() const {
    return sensors_;
}
