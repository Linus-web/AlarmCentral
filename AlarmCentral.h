//
// Created by linus on 12/18/24.
//

#ifndef ALARMCENTRAL_H
#define ALARMCENTRAL_H
#include <vector>


class AlarmCentral {
private:
    std::vector<AlarmSystem> systems;
    std::vector<Client> clients;
    std::vector<Booking> bookings;
public:
    AlarmCentral();
    void addSystem();
    void addClient();
    void addBooking();
    System* getSystem();
    Client* getClient();
    Booking* getBooking();

    bool removeSystem();

};



#endif //ALARMCENTRAL_H
