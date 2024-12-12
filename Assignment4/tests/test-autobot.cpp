//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "autobot.h"

TEST(autobot,mode){
	Weapon weapon("Katana",52);
	Autobot autobot("NeAutobot", 35, 44, weapon, "Scooter");
	ASSERT_EQ(autobot.getVehicleMode(),"Scooter");
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
