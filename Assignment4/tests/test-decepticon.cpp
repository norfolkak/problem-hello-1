//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "decepticon.h"

TEST(decepticon,mode){
	Weapon weapon("Katana",52);
	Decepticon decepticon("NeAutobot", 37, 51, weapon, "FlyingScooter");
	ASSERT_EQ(decepticon.getFlightMode(),"FlyingScooter");
}


