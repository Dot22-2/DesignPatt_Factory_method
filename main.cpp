#include "UserFactory.hpp"
#include <vector>

int main() {
    std::vector<std::unique_ptr<User>> users;

    users.push_back(UserFactory::createUser("admin", "Dmytro"));
    users.push_back(UserFactory::createUser("guest", "Olena"));
    users.push_back(UserFactory::createUser("client", "Sofia"));

    for (const auto& user : users) {
        user->printInfo();
    }

    return 0;
}
