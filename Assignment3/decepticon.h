//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : protected Transformer {
private:
    std::string flightMode;

public:
    Decepticon(const std::string& name, int strength, int speed,
               const Weapon& weapon, const std::string& flightMode);

    bool transform() override;
    bool attack() override;

    std::string getFlightMode() const;
    void setFlightMode(const std::string& newMode);
};

#endif

