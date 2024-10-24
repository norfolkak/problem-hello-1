//Klopov Aleksei - Assignment 3 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "dinobot.h"

TEST(dinobot,name){
	Weapon weapon("Tail",60);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_EQ(dinobot.getName(),"Magician");
}


TEST(dinobot,faction){
	Weapon weapon("Tail",60);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_EQ(dinobot.getFaction(),"Dinobot");
}

TEST(dinobot,strength){
	Weapon weapon("Tail",60);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_EQ(dinobot.getStrength(),37);
}


TEST(dinobot,speed){
	Weapon weapon("Tail",60);
	Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
	ASSERT_EQ(dinobot.getSpeed(),51);
}
