//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
    std::string name;
    int powerLevel;

public:
    Weapon(const std::string& name, int powerLevel);

    std::string getName() const;
    int getPowerLevel() const;
};

#endif
