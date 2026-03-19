#include "UserService.hpp"

User UserService::getUser(int id) {
    return userRepository.getUser(id);
}