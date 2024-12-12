//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "dinobot.h"

TEST(dinobot,mode){
	Weapon weapon("Tail",60);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_EQ(dinobot.getDinoMode(),"T-rex");
}

TEST(dinobot,attack){
	Weapon weapon("Tail",60);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_TRUE(dinobot.attack());
}

TEST(dinobot,transform){
	Weapon weapon("Tail",52);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_TRUE(dinobot.transform());
}
