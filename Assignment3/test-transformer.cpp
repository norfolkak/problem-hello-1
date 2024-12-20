//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "dinobot.h"

TEST(transformer,name){
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getName(),"Magician");
}


TEST(transformer,faction){
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getFaction(),"Dinobot");
}

TEST(transformer,strength){
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getStrength(),37);
}


TEST(transformer,speed){
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getSpeed(),51);
}

TEST(transformer, SetStrength) {
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    dinobot.setStrength(100);
    EXPECT_EQ(dinobot.getStrength(), 100);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
