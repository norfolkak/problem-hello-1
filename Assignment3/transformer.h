//Klopov Aleksei - Assignment 2b - st130153@student.spbu.ru

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "weapon.h"
#include <string>

class Transformer {
private:
    std::string name;
    std::string faction;
    int strength;
    int speed;
    Weapon weapon;

protected:
    Transformer(const std::string& name, const std::string& faction,
                int strength, int speed, const Weapon& weapon);
    virtual ~Transformer();

    std::string getName() const;
    std::string getFaction() const;
    int getStrength() const;
    int getSpeed() const;

    virtual void transform() = 0;
    virtual void attack() = 0;
};

#endif
