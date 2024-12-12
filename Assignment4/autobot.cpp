//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "autobot.h"

Autobot::Autobot(const std::string& name, int strength, int speed,
                 const Weapon& weapon, const std::string& vehicleMode)
    : Transformer(name, "Autobot", strength, speed, weapon),
      vehicleMode(vehicleMode) {}

bool Autobot::transform() {
    return true;
}
bool Autobot::attack() {
    return true;
}

std::string Autobot::getVehicleMode() const { return vehicleMode; }
