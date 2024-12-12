//Klopov Aleksei - Assignment 4 - st130153@student.spbu.ru

#include "gtest/gtest.h"
#include "dinobot.h"
#include "weapon.h"
#include "autobot.h"
#include "decepticon.h"

TEST(dinobot,name)
{
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getName(),"Magician");
}


TEST(dinobot,faction)
{
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getFaction(),"Dinobot");
}

TEST(dinobot,strength)
{
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getStrength(),37);
}


TEST(dinobot,speed)
{
    Weapon weapon("Tail",60);
    Dinobot dinobot("Magician", 37, 51, weapon, "T-rex");
    ASSERT_EQ(dinobot.getSpeed(),51);
}

void TestTransformerMethods(Transformer* transformer, const std::string& expected_class_name) {
    testing::internal::CaptureStdout();
    transformer->transform();
    transformer->openFire();
    transformer->ultra();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find(expected_class_name + " performing transform()"), std::string::npos);
    EXPECT_NE(output.find(expected_class_name + " performing openFire()"), std::string::npos);
    EXPECT_NE(output.find(expected_class_name + " performing ultra()"), std::string::npos);
}

TEST(TransformerTest, VirtualMethodCalls) {
    Autobot autobot("Optimus Prime");
    Decepticon decepticon("Megatron");

    testing::internal::CaptureStdout();
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "transforming: Autobot\n");

    testing::internal::CaptureStdout();
    decepticon.ultra();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "using the Ultra attack: Decepticon\n");

    testing::internal::CaptureStdout();
    decepticon.openFire();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "opening fire: Decepticon\n");
}

TEST(TransformerTest, PolymorphicCalls) {
    Transformer* transformerAutobot = new Autobot("Bumblebee");
    Transformer* transformerDecepticon = new Decepticon("Starscream");

    testing::internal::CaptureStdout();
    transformerAutobot->transform();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "transforming: Autobot\n");

    testing::internal::CaptureStdout();
    transformerDecepticon->openFire();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "opening fire: Decepticon\n");

    delete transformerAutobot;
    delete transformerDecepticon;
}

// 3. Test a vector of pointers to 9 objects (3 of each type)
TEST(TransformerTest, VectorOfTransformers) {
    std::vector<Transformer*> transformers;

    transformers.push_back(new Autobot("Optimus Prime"));
    transformers.push_back(new Autobot("Hot Rod"));
    transformers.push_back(new Autobot("Ironhide"));

    transformers.push_back(new Decepticon("Megatron"));
    transformers.push_back(new Decepticon("Shockwave"));
    transformers.push_back(new Decepticon("Starscream"));

    transformers.push_back(new Autobot("Bumblebee"));
    transformers.push_back(new Decepticon("Soundwave"));
    transformers.push_back(new Autobot("Jazz"));

    testing::internal::CaptureStdout();
    for (const auto& transformer : transformers) {
        transformer->ultra();
    }
    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ(output,
        "using the Ultra attack: Autobot\n"
        "using the Ultra attack: Autobot\n"
        "using the Ultra attack: Autobot\n"
        "using the Ultra attack: Decepticon\n"
        "using the Ultra attack: Decepticon\n"
        "using the Ultra attack: Decepticon\n"
        "using the Ultra attack: Autobot\n"
        "using the Ultra attack: Decepticon\n"
        "using the Ultra attack: Autobot\n");

    for (auto& transformer : transformers) {
        delete transformer;
    }
}
