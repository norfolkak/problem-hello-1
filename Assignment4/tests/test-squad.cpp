//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "squad.h"
#include "dinobot.h"

TEST(squad,members){
    Squad squad("Pyatyorochka");
    Weapon weapon("Lava",90);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_TRUE(squad.addMember(&dinobot));
}


