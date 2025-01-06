#ifndef SENSOR_H
#define SENSOR_H

#include <string>

class Sensor {
public:
    Sensor();
    explicit Sensor(const std::string& name);

    const std::string& getName() const;
    void setName(const std::string& name);

private:
    std::string name_;
};

#endif // SENSOR_H
