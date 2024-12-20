//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "autobot.h"

TEST(autobot,mode){
    Weapon weapon("Katana",52);
    Autobot autobot("NeAutobot", 35, 44, weapon, "Scooter");
    ASSERT_EQ(autobot.getVehicleMode(),"Scooter");
}

TEST(autobot,setmode){
    Weapon weapon("Katana",52);
    Autobot autobot("NeAutobot", 35, 44, weapon, "Scooter");
    autobot.setVehicleMode("Jet");
    EXPECT_EQ(autobot.getVehicleMode(), "Jet");
}

TEST(autobot,attack){
    Weapon weapon("Katana",52);
    Autobot autobot("NeAutobot", 35, 44, weapon, "Scooter");
    ASSERT_TRUE(autobot.attack());
}

TEST(autobot,transform){
    Weapon weapon("Katana",52);
    Autobot autobot("NeAutobot", 35, 44, weapon, "Scooter");
    ASSERT_TRUE(autobot.transform());
}
