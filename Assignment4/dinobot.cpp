//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "dinobot.h"

Dinobot::Dinobot(const std::string& name, int strength, int speed,
                 const Weapon& weapon, const std::string& dinoMode)
    : Transformer(name, "Dinobot", strength, speed, weapon), dinoMode(dinoMode) {}

Dinobot::Dinobot(const std::string& name, const std::string& dinoMode)
    : Transformer(name, "Dinobot"), dinoMode(dinoMode) {}
    
std::string Dinobot::getDinoMode() const { 
    return dinoMode; 
}
    
bool Dinobot::transform() {
    return true;
}
bool Dinobot::attack() {
    return true;
}

std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot) {
    os << static_cast<const Transformer&>(dinobot);
    os << ", Dino Mode: " << dinobot.dinoMode;
    return os;
}
