#ifndef ALARMSYSTEM_H
#define ALARMSYSTEM_H

#include <vector>
#include <algorithm>
#include <string>
#include "Sensor.h"

class AlarmSystem {
public:
    AlarmSystem();
    // Sensor Management
    void addSensor(const Sensor& sensor);
    void removeSensor(const std::string& sensorName);
    Sensor* getSensor(const std::string& sensorName);

    // Accessor to retrieve all sensors
    const std::vector<Sensor>& getSensors() const;

private:
    std::vector<Sensor> sensors_;
};

#endif // ALARMSYSTEM_H
