#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
public:
    Client();
    explicit Client(const std::string& name);

    const std::string& getName() const;
    void setName(const std::string& name);

private:
    std::string name_;
};

#endif // CLIENT_H
