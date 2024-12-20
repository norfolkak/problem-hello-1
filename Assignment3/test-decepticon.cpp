//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "decepticon.h"

TEST(decepticon,mode){
    Weapon weapon("Katana",52);
    Decepticon decepticon("NeAutobot", 37, 51, weapon, "FlyingScooter");
    ASSERT_EQ(decepticon.getFlightMode(),"FlyingScooter");
}

TEST(decepticon,setmode){
    Weapon weapon("Katana",52);
    Decepticon decepticon("NeAutobot", 37, 51, weapon, "FlyingScooter");
    decepticon.setFlightMode("Spaceship");
    EXPECT_EQ(decepticon.getFlightMode(), "Spaceship");
}

TEST(decepticon,attack){
    Weapon weapon("Katana",52);
    Decepticon decepticon("NeAutobot", 37, 51, weapon, "FlyingScooter");
    ASSERT_TRUE(decepticon.attack());
}

TEST(decepticon,transform){
    Weapon weapon("Katana",52);
    Decepticon decepticon("NeAutobot", 37, 51, weapon, "FLyingScooter");
    ASSERT_TRUE(decepticon.transform());
}
