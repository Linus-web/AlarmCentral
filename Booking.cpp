#include "Booking.h"

// Default constructor
Booking::Booking() = default;

// Main constructor: ties a Client to an AlarmSystem and adds a description
Booking::Booking(Client* client, AlarmSystem* alarmSystem, const std::string& description)
    : client_(client), alarmSystem_(alarmSystem), description_(description)
{
}

// Return the pointer to the associated Client
Client* Booking::getClient() const {
    return client_;
}

// Return the pointer to the associated AlarmSystem
AlarmSystem* Booking::getAlarmSystem() const {
    return alarmSystem_;
}

// Return the booking description
const std::string& Booking::getDescription() const {
    return description_;
}

// Change the booking description
void Booking::setDescription(const std::string& description) {
    description_ = description;
}
