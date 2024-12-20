//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : protected Transformer {
private:
    std::string vehicleMode;

public:
    Autobot(const std::string& name, int strength, int speed,
            const Weapon& weapon, const std::string& vehicleMode);

    bool transform() override;
    bool attack() override;

    std::string getVehicleMode() const;
    void setVehicleMode(const std::string& newMode);
};

#endif

