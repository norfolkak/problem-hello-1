//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "decepticon.h"

Decepticon::Decepticon(const std::string& name, int strength, int speed,
                       const Weapon& weapon, const std::string& flightMode)
    : Transformer(name, "Decepticon", strength, speed, weapon),
      flightMode(flightMode) {}

bool Decepticon::transform() {return true;}
bool Decepticon::attack() {return true;}

std::string Decepticon::getFlightMode() const { return flightMode; }
