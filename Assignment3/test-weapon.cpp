//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "weapon.h"

TEST(weapon,name){
	Weapon weapon("Uchigatana", 67);
	ASSERT_EQ(weapon.getName(),"Uchigatana");
}

TEST(weapon,power){
	Weapon weapon("Uchigatana", 67);
	ASSERT_EQ(weapon.getPowerLevel(),67);
}

