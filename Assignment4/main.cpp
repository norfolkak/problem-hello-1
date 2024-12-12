#include <iostream>
#include "dinobot.h"
#include "weapon.h"

int main() {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");
    Dinobot magician("Magician", "Pterodactyl");

    std::cout << grimlock << std::endl;
    std::cout << magician << std::endl;

    if (grimlock > magician) {
        std::cout << grimlock.getName() << " is stronger than " << magician.getName() << std::endl;
    } else if (grimlock < magician) {
        std::cout << grimlock.getName() << " is weaker than " << magician.getName() << std::endl;
    } else {
        std::cout << grimlock.getName() << " and " << magician.getName() << " are equally strong" << std::endl;
    }

    return 0;
}
