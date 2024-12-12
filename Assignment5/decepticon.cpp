//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#include "decepticon.h"

Decepticon::Decepticon(const std::string& name, int strength, int speed,
                       const Weapon& weapon, const std::string& flightMode)
    : Transformer(name, "Decepticon", strength, speed, weapon),
      flightMode(flightMode) {}
Decepticon::Decepticon(const std::string& name) : Transformer(name) {}

void Decepticon::transform() const {
    std::cout << "transforming: Decepticon\n";
}

void Decepticon::openFire() const {
    std::cout << "opening fire: Decepticon\n";
}

void Decepticon::ultra() const {
    std::cout << "using the Ultra attack: Decepticon\n";
}

std::string Decepticon::getFlightMode() const { return flightMode; }
