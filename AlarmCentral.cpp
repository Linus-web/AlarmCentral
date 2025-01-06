#include "AlarmCentral.h"

// ------------------------------------
// Client Management
// ------------------------------------
void AlarmCentral::addClient(const Client& client)
{
    clients_.push_back(client);
}

void AlarmCentral::removeClient(const std::string& clientName)
{
    clients_.erase(
        std::remove_if(clients_.begin(), clients_.end(),
                       [&clientName](const Client& c){
                           return c.getName() == clientName;
                       }),
        clients_.end()
    );
}

Client* AlarmCentral::getClient(const std::string& clientName)
{
    for (auto& c : clients_) {
        if (c.getName() == clientName) {
            return &c;
        }
    }
    return nullptr; // not found
}

// ------------------------------------
// AlarmSystem Management
// ------------------------------------
void AlarmCentral::addAlarmSystem(const AlarmSystem& system)
{
    alarmSystems_.push_back(system);
}

void AlarmCentral::removeAlarmSystemByIndex(size_t index)
{
    if (index < alarmSystems_.size()) {
        alarmSystems_.erase(alarmSystems_.begin() + index);
    }
}

AlarmSystem* AlarmCentral::getAlarmSystem(size_t index)
{
    if (index < alarmSystems_.size()) {
        return &alarmSystems_[index];
    }
    return nullptr;
}

// ------------------------------------
// Booking Management
// ------------------------------------
void AlarmCentral::addBooking(Client* client, AlarmSystem* system, const std::string& description)
{
    // This constructs a new Booking that references existing objects.
    Booking newBooking(client, system, description);
    bookings_.push_back(newBooking);
}

void AlarmCentral::removeBooking(const std::string& description)
{
    bookings_.erase(
        std::remove_if(bookings_.begin(), bookings_.end(),
                       [&description](const Booking& b){
                           return b.getDescription() == description;
                       }),
        bookings_.end()
    );
}

Booking* AlarmCentral::getBooking(const std::string& description)
{
    for (auto& b : bookings_) {
        if (b.getDescription() == description) {
            return &b;
        }
    }
    return nullptr; // not found
}
