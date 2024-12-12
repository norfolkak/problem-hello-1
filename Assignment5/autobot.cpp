//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#include "autobot.h"

Autobot::Autobot(const std::string& name, int strength, int speed,
                 const Weapon& weapon, const std::string& vehicleMode)
    : Transformer(name, "Autobot", strength, speed, weapon),
      vehicleMode(vehicleMode) {}
Autobot::Autobot(const std::string& name) : Transformer(name) {}

void Autobot::transform() const {
    std::cout << "transforming: Autobot\n";
}

void Autobot::openFire() const {
    std::cout << "opening fire: Autobot\n";
}

void Autobot::ultra() const {
    std::cout << "using the Ultra attack: Autobot\n";
}

std::string Autobot::getVehicleMode() const { return vehicleMode; }
