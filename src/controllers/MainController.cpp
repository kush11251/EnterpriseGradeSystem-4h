#include "MainController.hpp"

void MainController::run() {
    logger.log("Starting application...");
    userService.getUser(1);
    logger.log("Application started.");
}