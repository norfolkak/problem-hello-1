//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "weapon.h"
#include <string>
#include <iostream>

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
    Transformer(const std::string& name, const std::string& faction);

    virtual ~Transformer();

    std::string getName() const;
    std::string getFaction() const;
    int getStrength() const;
    int getSpeed() const;
    Weapon getWeapon() const;

    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;
    bool operator==(const Transformer& other) const;
    bool operator!=(const Transformer& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

    virtual bool transform() = 0;
    virtual bool attack() = 0;
};

#endif // TRANSFORMER_H

