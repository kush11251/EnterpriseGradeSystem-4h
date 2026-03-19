#ifndef MAINCONTROLLER_HPP
#define MAINCONTROLLER_HPP

#include "services/UserService.hpp"
#include "utils/Logger.hpp"

class MainController {
public:
    void run();
private:
    UserService userService;
    Logger logger;
};

#endif  // MAINCONTROLLER_HPP