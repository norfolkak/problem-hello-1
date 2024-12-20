//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

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

public:
    Transformer(const std::string& name, const std::string& faction,
                int strength, int speed, const Weapon& weapon);
    virtual ~Transformer();

    std::string getName() const;
    std::string getFaction() const;
    int getStrength() const;
    int getSpeed() const;
    
    void setStrength(int newStrength);

    virtual bool transform() = 0;
    virtual bool attack() = 0;
};

#endif
