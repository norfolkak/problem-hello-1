//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "transformer.h"

Transformer::Transformer(const std::string& name, const std::string& faction,
                         int strength, int speed, const Weapon& weapon)
    : name(name), faction(faction), strength(strength), 
      speed(speed), weapon(weapon) {}

Transformer::Transformer(const std::string& name, const std::string& faction)
    : name(name), faction(faction), strength(50), speed(50), weapon("Basic Weapon", 10) {}
    
Transformer::~Transformer() {}

std::string Transformer::getName() const { return name; }
std::string Transformer::getFaction() const { return faction; }
int Transformer::getStrength() const { return strength; }
int Transformer::getSpeed() const { return speed; }
Weapon Transformer::getWeapon() const { return weapon; }

bool Transformer::operator>(const Transformer& other) const {
    return strength > other.strength;
}

bool Transformer::operator<(const Transformer& other) const {
    return strength < other.strength;
}

bool Transformer::operator==(const Transformer& other) const {
    return strength == other.strength;
}

bool Transformer::operator!=(const Transformer& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Name: " << transformer.name << ", Faction: " << transformer.faction
       << ", Strength: " << transformer.strength << ", Speed: " << transformer.speed
       << ", Weapon: " << transformer.weapon.getName();
    return os;
}
