//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "weapon.h"
#include <string>
#include <iostream>

class Transformer {
protected:
    std::string name;
    
private:
    std::string faction;
    int strength;
    int speed;
    Weapon weapon;

public:
    Transformer(const std::string& name, const std::string& faction,
                int strength, int speed, const Weapon& weapon);
    Transformer(const std::string& name, const std::string& faction);
    Transformer(const std::string& name);
    
    virtual ~Transformer();

    virtual void transform() const;
    virtual void openFire() const;
    virtual void ultra() const;

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
};

#endif // TRANSFORMER_H

