#include "UserRepository.hpp"

User UserRepository::getUser(int id) {
    // Simulate database query
    User user;
    user.id = id;
    user.name = "John Doe";
    return user;
}