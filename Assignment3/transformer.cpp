//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "transformer.h"

Transformer::Transformer(const std::string& name, const std::string& faction,
                         int strength, int speed, const Weapon& weapon)
    : name(name), faction(faction), strength(strength), 
      speed(speed), weapon(weapon) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const { return name; }
std::string Transformer::getFaction() const { return faction; }
int Transformer::getStrength() const { return strength; }
int Transformer::getSpeed() const { return speed; }

