//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#ifndef DINOBOT_H
#define DINOBOT_H

#include "transformer.h"

class Dinobot : public Transformer {
private:
    std::string dinoMode;

public:
    Dinobot(const std::string& name, int strength, int speed,
            const Weapon& weapon, const std::string& dinoMode);

    bool transform() override;
    bool attack() override;

    std::string getDinoMode() const;
};

#endif

