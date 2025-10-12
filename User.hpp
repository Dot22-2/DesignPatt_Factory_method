#pragma once
#include <string>

class User {
protected:
    std::string name;
public:
    User(const std::string& name) : name(name) {}
    virtual void printInfo() const = 0;
    virtual ~User() = default;
};
