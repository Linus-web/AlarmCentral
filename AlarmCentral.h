#ifndef ALARMCENTRAL_H
#define ALARMCENTRAL_H

#include <vector>
#include <string>
#include <algorithm>

#include "Client.h"
#include "Booking.h"
#include "AlarmSystem.h"

class AlarmCentral {
public:
    // -- Client Management --
    void addClient(const Client& client);
    void removeClient(const std::string& clientName);
    Client* getClient(const std::string& clientName);
    const std::vector<Client>& getAllClients() const { return clients_; }

    // -- AlarmSystem Management --
    void addAlarmSystem(const AlarmSystem& system);
    // We’ll remove by index or by “all systems that match sensor config,” etc.
    // For simplicity, let’s just remove by index or remove all.
    void removeAlarmSystemByIndex(size_t index);
    AlarmSystem* getAlarmSystem(size_t index);
    const std::vector<AlarmSystem>& getAllAlarmSystems() const { return alarmSystems_; }

    // -- Booking Management --
    void addBooking(Client* client, AlarmSystem* system, const std::string& description);
    void removeBooking(const std::string& description);
    Booking* getBooking(const std::string& description);
    const std::vector<Booking>& getAllBookings() const { return bookings_; }

private:
    std::vector<Client> clients_;
    std::vector<AlarmSystem> alarmSystems_;
    std::vector<Booking> bookings_;
};

#endif // ALARMCENTRAL_H
