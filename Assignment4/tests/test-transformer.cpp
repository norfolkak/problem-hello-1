//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "dinobot.h"
#include "weapon.h"

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

TEST(DinobotTest, OutputOperator) {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");

    std::ostringstream oss;
    oss << grimlock;

    std::string expected = "Name: Grimlock, Faction: Dinobot, Strength: 90, Speed: 70, Weapon: Tail, Dino Mode: T-rex";
    ASSERT_EQ(oss.str(), expected);
}

TEST(DinobotTest, ComparisonOperators) {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");
    Dinobot magician("Magician", 50, 50, tail, "Pterodactyl");

    ASSERT_TRUE(grimlock > magician);    // Grimlock is stronger
    ASSERT_FALSE(grimlock < magician);  // Grimlock is not weaker
    ASSERT_FALSE(grimlock == magician); // They are not equal
}

TEST(DinobotTest, ConstructorOverloading_FullConstructor) {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");

    ASSERT_EQ(grimlock.getName(), "Grimlock");
    ASSERT_EQ(grimlock.getFaction(), "Dinobot");
    ASSERT_EQ(grimlock.getStrength(), 90);
    ASSERT_EQ(grimlock.getSpeed(), 70);
    ASSERT_EQ(grimlock.getDinoMode(), "T-rex");
    ASSERT_EQ(grimlock.getWeapon().getName(), "Tail");
}

TEST(DinobotTest, ConstructorOverloading_MinimalConstructor) {
    Dinobot magician("Magician", "Pterodactyl");

    ASSERT_EQ(magician.getName(), "Magician");
    ASSERT_EQ(magician.getFaction(), "Dinobot");
    ASSERT_EQ(magician.getStrength(), 50); // Default strength
    ASSERT_EQ(magician.getSpeed(), 50);    // Default speed
    ASSERT_EQ(magician.getDinoMode(), "Pterodactyl");
    ASSERT_EQ(magician.getWeapon().getName(), "Basic Weapon"); // Default weapon
}
