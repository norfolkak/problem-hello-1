//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer {
private:
    std::string flightMode;

public:
    Decepticon(const std::string& name, int strength, int speed,
               const Weapon& weapon, const std::string& flightMode);
    Decepticon(const std::string& name);
    
    void transform() const override;
    void openFire() const override;
    void ultra() const override;

    std::string getFlightMode() const;
};

#endif

