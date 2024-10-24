//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "squad.h"
#include <iostream>

Squad::Squad(const std::string& name)
    : squadName(name), memberCount(0) {}

void Squad::addMember(Transformer* transformer) {
    if (memberCount < 5) {
        members[memberCount++] = transformer;
    }
}

void Squad::showSquad() const {
    std::cout << "Squad: " << squadName << std::endl;
    for (int i = 0; i < memberCount; ++i) {
        std::cout << members[i]->getName() << std::endl;
    }
}

