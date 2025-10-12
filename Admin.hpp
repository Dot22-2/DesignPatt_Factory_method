#pragma once
#include "User.hpp"
#include <iostream>

class Admin : public User {
public:
    Admin(const std::string& name) : User(name) {}
    void printInfo() const override {
        std::cout << "Admin: " << name << "\n";
    }
};
