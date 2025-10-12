#pragma once
#include "User.hpp"
#include <iostream>

class Guest : public User {
public:
    Guest(const std::string& name) : User(name) {}
    void printInfo() const override {
        std::cout << "Guest: " << name << "\n";
    }
};
