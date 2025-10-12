#pragma once
#include "Admin.hpp"
#include "Guest.hpp"
#include "Client.hpp"
#include <memory>
#include <string>

class UserFactory {
public:
    static std::unique_ptr<User> createUser(const std::string& type, const std::string& name) {
        if (type == "admin") return std::make_unique<Admin>(name);
        if (type == "guest") return std::make_unique<Guest>(name);
        if (type == "client") return std::make_unique<Client>(name);
        return nullptr;
    }
};
