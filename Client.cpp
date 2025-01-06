#include "Client.h"

// Default constructor
Client::Client() = default;

// Constructor that sets the client's name
Client::Client(const std::string& name)
    : name_(name)
{
}

// Return the client's name
const std::string& Client::getName() const {
    return name_;
}

// Set the client's name
void Client::setName(const std::string& name) {
    name_ = name;
}
