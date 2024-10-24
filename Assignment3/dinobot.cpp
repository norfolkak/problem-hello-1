//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "dinobot.h"

Dinobot::Dinobot(const std::string& name, int strength, int speed,
                 const Weapon& weapon, const std::string& dinoMode)
    : Transformer(name, "Dinobot", strength, speed, weapon),
      dinoMode(dinoMode) {}

bool Dinobot::transform() {return true;}
bool Dinobot::attack() {return true;}

std::string Dinobot::getDinoMode() const { return dinoMode; }

