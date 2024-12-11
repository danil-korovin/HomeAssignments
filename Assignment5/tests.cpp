/* Korovin Danil st128737@student.spbu.ru
   Assignment 5
*/
#include <gtest/gtest.h>
#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include <vector>

TEST(Transformer1, TestMethods)
{
    Transformer transformer("Transformer", 60, 50, 1);
    transformer.transform();
    transformer.move();
    transformer.jump();
}
TEST(Autobot1, TestMethods)
{
    Autobot autobot("Optimus", 70, 50, 1);
    autobot.transform();
    autobot.move();
    autobot.jump();
}
TEST(Decepticon1, TestMethods)
{
    Decepticon decepticon("Megatron", 80, 30, 1);
    decepticon.transform();
    decepticon.move();
    decepticon.jump();
}
TEST(Autobot2, TestPoint)
{
    Autobot autobot("Optimus", 65, 25, 1);
    Transformer* transformer = &autobot;
    transformer->transform();
    transformer->move();
    transformer->jump();
}
TEST(Decepticon2, TestPoint)
{
    Decepticon decepticon("Megatron", 85, 35, 1);
    Transformer* transformer = &decepticon;
    transformer->transform();
    transformer->move();
    transformer->jump();
}
TEST(Transformer3, TestVector)
{
    std::vector<Transformer*> transformers;
    transformers.push_back(new Transformer("Tr1", 10, 50, 1));
    transformers.push_back(new Transformer("Tr2", 20, 40, 2));
    transformers.push_back(new Transformer("Tr3", 40, 30, 3));
    transformers.push_back(new Autobot("Optimus1", 40, 50, 1));
    transformers.push_back(new Autobot("Optimus2", 50, 40, 2));
    transformers.push_back(new Autobot("Optimus3", 30, 30, 3));
    transformers.push_back(new Decepticon("Megatron1", 60, 30, 1));
    transformers.push_back(new Decepticon("Megatron2", 70, 20, 2));
    transformers.push_back(new Decepticon("Megatron3", 55, 25, 3));
    for(auto& transformer : transformers)
    {
        transformer->transform();
        transformer->move();
        transformer->jump();
    }
    for(auto& transformer : transformers)
    {
        delete transformer;
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
