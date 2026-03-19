#ifndef USERREPOSITORY_HPP
#define USERREPOSITORY_HPP

#include "models/User.hpp"

class UserRepository {
public:
    User getUser(int id);
};

#endif  // USERREPOSITORY_HPP