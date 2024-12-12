//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "dinobot.h"

TEST(dinobot,mode){
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getDinoMode(),"T-rex");
}

TEST(decepticon,attack){
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_TRUE(dinobot.attack());
}

TEST(decepticon,transform){
    Weapon weapon("Tail",52);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_TRUE(dinobot.transform());
}
