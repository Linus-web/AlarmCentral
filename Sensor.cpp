#include "Sensor.h"

// Default constructor
Sensor::Sensor() = default;

// Constructor that sets the sensor name
Sensor::Sensor(const std::string& name)
    : name_(name)
{
}

// Return the sensor's name
const std::string& Sensor::getName() const {
    return name_;
}

// Set the sensor's name
void Sensor::setName(const std::string& name) {
    name_ = name;
}
