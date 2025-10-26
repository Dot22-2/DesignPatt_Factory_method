# C++ Factory Method

This repository demonstrates a clean implementation of the **Factory Method** design pattern in C++ for a console-based application.

---

## Project Structure

- `IUser.hpp` – Interface for user objects  
- `Admin.hpp / Guest.hpp / Client.hpp` – Concrete user types  
- `UserFactory.hpp / UserFactory.cpp` – Factory class that creates user instances based on type  
- `main.cpp` – Entry point showcasing dynamic user creation via factory  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
 std::vector<std::unique_ptr<User>> users;

 users.push_back(UserFactory::createUser("admin", "Dmytro"));
 users.push_back(UserFactory::createUser("guest", "Olena"));
 users.push_back(UserFactory::createUser("client", "Sofia"));

 for (const auto& user : users) {
     user->printInfo();
 }

// Output:
// Admin: Dmytro
// Guest: Olena
// Client: Sofia
