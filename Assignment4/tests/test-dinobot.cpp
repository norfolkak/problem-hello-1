//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

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

TEST(dinobot, OutputOperator) {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");

    std::ostringstream oss;
    oss << grimlock;

    std::string expected = "Name: Grimlock, Faction: Dinobot, Strength: 90, Speed: 70, Weapon: Tail, Dino Mode: T-rex";
    ASSERT_EQ(oss.str(), expected);
}

TEST(dinobot, ComparisonOperators) {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");
    Dinobot magician("Magician", 50, 50, tail, "Pterodactyl");

    ASSERT_TRUE(grimlock > magician);    // Grimlock is stronger
    ASSERT_FALSE(grimlock < magician);  // Grimlock is not weaker
    ASSERT_FALSE(grimlock == magician); // They are not equal
}

TEST(dinobot, ConstructorOverloading_FullConstructor) {
    Weapon tail("Tail", 60);
    Dinobot grimlock("Grimlock", 90, 70, tail, "T-rex");

    ASSERT_EQ(grimlock.getName(), "Grimlock");
    ASSERT_EQ(grimlock.getFaction(), "Dinobot");
    ASSERT_EQ(grimlock.getStrength(), 90);
    ASSERT_EQ(grimlock.getSpeed(), 70);
    ASSERT_EQ(grimlock.getDinoMode(), "T-rex");
    ASSERT_EQ(grimlock.getWeapon().getName(), "Tail");
}

TEST(dinobot, ConstructorOverloading_MinimalConstructor) {
    Dinobot magician("Magician", "Pterodactyl");

    ASSERT_EQ(magician.getName(), "Magician");
    ASSERT_EQ(magician.getFaction(), "Dinobot");
    ASSERT_EQ(magician.getStrength(), 50); // Default strength
    ASSERT_EQ(magician.getSpeed(), 50);    // Default speed
    ASSERT_EQ(magician.getDinoMode(), "Pterodactyl");
    ASSERT_EQ(magician.getWeapon().getName(), "Basic Weapon"); // Default weapon
}
