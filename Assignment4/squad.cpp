//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "squad.h"
#include <iostream>

Squad::Squad(const std::string& name)
    : squadName(name), memberCount(0) {}

bool Squad::addMember(Transformer* transformer) {
    if (memberCount < 5) {
        members[memberCount++] = transformer;
        return true;
    }
    else {
    	return false;
    }
}

void Squad::showSquad() const {
    std::cout << "Squad: " << squadName << std::endl;
    for (int i = 0; i < memberCount; ++i) {
        std::cout << members[i]->getName() << std::endl;
    }
}

