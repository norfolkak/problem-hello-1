//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#ifndef DINOBOT_H
#define DINOBOT_H

#include "transformer.h"

class Dinobot : public Transformer {
private:
    std::string dinoMode;

public:
    Dinobot(const std::string& name, int strength, int speed,
            const Weapon& weapon, const std::string& dinoMode);
    Dinobot(const std::string& name, const std::string& dinoMode);
    
    std::string getDinoMode() const;

    friend std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot);
};

#endif
