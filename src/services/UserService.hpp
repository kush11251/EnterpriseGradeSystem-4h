#ifndef USERSERVICE_HPP
#define USERSERVICE_HPP

#include "models/User.hpp"
#include "repositories/UserRepository.hpp"

class UserService {
public:
    User getUser(int id);
private:
    UserRepository userRepository;
};

#endif  // USERSERVICE_HPP