//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer {
private:
    std::string vehicleMode;

public:
    Autobot(const std::string& name, int strength, int speed,
            const Weapon& weapon, const std::string& vehicleMode);
    Autobot(const std::string& name);
    
    void transform() const override;
    void openFire() const override;
    void ultra() const override;
    
    std::string getVehicleMode() const;
};

#endif

