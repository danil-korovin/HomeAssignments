/* Korovin Danil st128737@student.spbu.ru
   Assignment 3
*/

#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"
#include "otherbots.h"
#include "weapons.h"


TEST(Weapons, test1)
{
    Weapons Weapon(12); 
    EXPECT_EQ(Weapon.getDamage(), 12);
    Weapon.setDamage(15);
    EXPECT_EQ(Weapon.getDamage(), 15);
}

TEST(Transformer, test2)
{
    Weapons Weapon(20);
    Transformer transformer("Optimus", 75, 25, 2, 100, &Weapon);
    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getPower(), 75);
    EXPECT_EQ(transformer.getAmmo(), 25);
    EXPECT_EQ(transformer.getLevel(), 2);
    EXPECT_EQ(transformer.getHealth(), 100);
    transformer.setName("Nomius");
    transformer.setPower(100);
    transformer.setAmmo(30);
    transformer.setLevel(3);
    EXPECT_EQ(transformer.getName(), "Nomius");
    EXPECT_EQ(transformer.getPower(), 100);
    EXPECT_EQ(transformer.getAmmo(), 30);
    EXPECT_EQ(transformer.getLevel(), 3);
    transformer.shoot();	
    EXPECT_EQ(transformer.getAmmo(), 29);
    EXPECT_EQ(transformer.getHealth(), 99);
    transformer.recovery();	
    EXPECT_EQ(transformer.getAmmo(), 30);
    EXPECT_EQ(transformer.getHealth(), 100);
    EXPECT_EQ(Weapon.getDamage(), 20);
    transformer.move();
    transformer.jump();
    EXPECT_EQ(transformer.getLevel(), 4);
    transformer.transform();
    EXPECT_EQ(transformer.getPower(), 90);
}

TEST(Autobot, test3)
{
    Weapons Weapon(30);
    Autobot autobot("Optimus1", 70, 30, 1, 100, &Weapon, "First", 90);
    EXPECT_EQ(autobot.getName(), "Optimus1");
    EXPECT_EQ(autobot.getPower(), 70);
    EXPECT_EQ(autobot.getAmmo(), 30);
    EXPECT_EQ(autobot.getLevel(), 1);
    EXPECT_EQ(autobot.getHealth(), 100);
    EXPECT_EQ(autobot.getShield(), 90);
    autobot.setName("Optimus2");
    autobot.setPower(80);
    autobot.setAmmo(40);
    autobot.setLevel(3);
    autobot.setShield(70);
    EXPECT_EQ(autobot.getName(), "Optimus2");
    EXPECT_EQ(autobot.getPower(), 80);
    EXPECT_EQ(autobot.getAmmo(), 40);
    EXPECT_EQ(autobot.getLevel(), 3);
    EXPECT_EQ(autobot.getShield(), 70);
    autobot.move();
    autobot.jump();
    autobot.transform();
    autobot.sound();

}

TEST(Decepticon, test4)
{
    Weapons Weapon(1000);
    Decepticon decepticon("Starscream", 80, 50, 1, 100, &Weapon, 50, "Second");  
    EXPECT_EQ(decepticon.getName(), "Starscream");
    EXPECT_EQ(decepticon.getPower(),80);
    EXPECT_EQ(decepticon.getAmmo(), 50);
    EXPECT_EQ(decepticon.getLevel(), 1);
    EXPECT_EQ(decepticon.getHealth(), 100);
    EXPECT_EQ(decepticon.getAttack(), 50);
    decepticon.setName("Megatron");
    decepticon.setPower(100);
    decepticon.setAmmo(60);
    decepticon.setLevel(3);
    decepticon.setAttack(60);
    EXPECT_EQ(decepticon.getName(), "Megatron");
    EXPECT_EQ(decepticon.getPower(), 100);
    EXPECT_EQ(decepticon.getAmmo(), 60);
    EXPECT_EQ(decepticon.getLevel(), 3);
    EXPECT_EQ(decepticon.getAttack(), 60);
    decepticon.move();
    decepticon.jump();
    decepticon.transform();
    decepticon.sound();

}

TEST(Otherbots, test5)
{
    Weapons Weapon(0);
    Otherbots otherbots("Minicon", 60, 20, 1, 80, &Weapon, 30, "Third");
    EXPECT_EQ(otherbots.getName(), "Minicon");
    EXPECT_EQ(otherbots.getPower(), 60);
    EXPECT_EQ(otherbots.getAmmo(), 20);
    EXPECT_EQ(otherbots.getLevel(), 1);
    EXPECT_EQ(otherbots.getHealth(), 80);
    EXPECT_EQ(otherbots.getBonus(), 30);
    otherbots.setName("Maximals");
    otherbots.setPower(100);
    otherbots.setAmmo(40);
    otherbots.setLevel(3);
    otherbots.setBonus(90);
    EXPECT_EQ(otherbots.getName(), "Maximals");
    EXPECT_EQ(otherbots.getPower(), 100);
    EXPECT_EQ(otherbots.getAmmo(), 40);
    EXPECT_EQ(otherbots.getLevel(), 3);
    EXPECT_EQ(otherbots.getBonus(), 90);
    otherbots.move();
    otherbots.jump();
    otherbots.transform();
    otherbots.sound();
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
