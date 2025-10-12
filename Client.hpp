#pragma once
#include "User.hpp"
#include <iostream>

class Client : public User {
public:
    Client(const std::string& name) : User(name) {}
    void printInfo() const override {
        std::cout << "Client: " << name << "\n";
    }
};
