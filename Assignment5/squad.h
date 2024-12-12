//Klopov Aleksei - Assignment 5 - st130153@student.spbu.ru

#ifndef SQUAD_H
#define SQUAD_H

#include "transformer.h"

class Squad {
private:
    std::string squadName;
    Transformer* members[5];
    int memberCount;

public:
    Squad(const std::string& name);

    bool addMember(Transformer* transformer);
    void showSquad() const;
};

#endif

