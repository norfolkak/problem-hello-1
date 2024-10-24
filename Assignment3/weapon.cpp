//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "weapon.h"

Weapon::Weapon(const std::string& name, int powerLevel)
    : name(name), powerLevel(powerLevel) {}

std::string Weapon::getName() const { return name; }
int Weapon::getPowerLevel() const { return powerLevel; }
