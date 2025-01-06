#ifndef BOOKING_H
#define BOOKING_H

#include <string>
#include "Client.h"
#include "AlarmSystem.h"

class Booking {
public:
    Booking();
    Booking(Client* client, AlarmSystem* alarmSystem, const std::string& description);

    // Accessors
    Client* getClient() const;
    AlarmSystem* getAlarmSystem() const;
    const std::string& getDescription() const;

    // Mutators
    void setDescription(const std::string& description);

private:
    // The Booking ties a Client to an AlarmSystem via pointers.
    Client* client_ = nullptr;
    AlarmSystem* alarmSystem_ = nullptr;
    std::string description_;
};

#endif // BOOKING_H
