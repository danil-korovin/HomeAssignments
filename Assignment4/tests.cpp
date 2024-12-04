/* Korovin Danil st128737@student.spbu.ru
   Assignment 4
*/

#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"
#include "otherbots.h"
#include "weapons.h"

TEST(Weapons, test)
{
    Weapons Weapon(12);
    EXPECT_EQ(Weapon.getDamage(), 12);
    Weapon.setDamage(15);
    EXPECT_EQ(Weapon.getDamage(), 15);
}

TEST(Transformer, DefaultConstructor)
{
    Weapons weapon(10);
    Transformer t("Optimus", 100, &weapon);
    EXPECT_EQ(t.getName(), "Optimus");
    EXPECT_EQ(t.getPower(), 0);
    EXPECT_EQ(t.getLevel(), 1);
    EXPECT_EQ(t.getHealth(), 100);
    EXPECT_EQ(weapon.getDamage(), 10);
}
TEST(Transformer, ComparisonOperators)
{
    Weapons weapon1(10);
    Weapons weapon2(20);
    Transformer t1("Optimus1", 50, 10, 1, 100, &weapon1);
    Transformer t2("Megatron1", 30, 5, 1, 100, &weapon2);
    EXPECT_TRUE(t1 > t2);
    EXPECT_FALSE(t1 < t2);
    EXPECT_FALSE(t1 == t2);
    Weapons weapon3(10);
    Weapons weapon4(20);
    Transformer t3("Optimus2", 50, 10, 1, 100, &weapon3);
    Transformer t4("Megatron2", 60, 5, 1, 100, &weapon4);
    EXPECT_TRUE(t3 < t4);
    EXPECT_FALSE(t3 > t4);
    EXPECT_FALSE(t3 == t4);
    Weapons weapon5(10);
    Weapons weapon6(20);
    Transformer t5("Optimus3", 50, 10, 1, 100, &weapon5);
    Transformer t6("Megatron3", 50, 5, 1, 100, &weapon6);
    EXPECT_TRUE(t5 == t6);
    EXPECT_FALSE(t5 < t6);
    EXPECT_FALSE(t5 > t6);
}

TEST(Transformer, OutputOperator)
{
    Weapons weapon(10);
    Transformer t("Bumblebee", 40, 5, 1, 100, &weapon);
    std::ostringstream os;
    os << t;
    EXPECT_EQ(os.str(), "Name: Bumblebee, Power: 40, Ammo: 5, Level: 1, Health: 100");
}

TEST(Transformer, MainConstructor)
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

TEST(Autobot, DefaultConstructor)
{
    Weapons weapon(10);
    Autobot a("Optimus", 100, &weapon, 50, "");
    EXPECT_EQ(a.getName(), "Optimus");
    EXPECT_EQ(a.getHealth(), 100);
    EXPECT_EQ(weapon.getDamage(), 10);
}
TEST(Autobot, OutputOperator)
{
    Weapons weapon(10);
    Autobot a("Autobot", 50, 5, 1, 100, &weapon, 100, "");
    std::ostringstream os;
    os << a;
    EXPECT_EQ(os.str(), "Power: 50, Ammo: 5, Level: 1, Health: 100");
}
TEST(Autobot, ComparisonOperators)
{
    Weapons weapon1(10);
    Weapons weapon2(20);
    Autobot a1("Megatron1", 50, 10, 1, 100, &weapon1, 50, "");
    Autobot a2("Megatron2", 30, 5, 1, 100, &weapon2, 50, "");
    EXPECT_FALSE(a1 > a2);
    EXPECT_FALSE(a1 < a2);
    EXPECT_TRUE(a1 == a2);
}
TEST(Autobot, MainConstructor)
{
    Weapons Weapon(30);
    Autobot autobot("Optimus1", 70, 30, 1, 100, &Weapon, 90, "First");
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

TEST(Decepticon, DefaultConstructor)
{
    Weapons weapon(10);
    Decepticon d("Megatron", 100, &weapon, 50, "");
    EXPECT_EQ(d.getName(), "Megatron");
    EXPECT_EQ(d.getHealth(), 100);
    EXPECT_EQ(weapon.getDamage(), 10);
}
TEST(Decepticon, OutputOperator)
{
    Weapons weapon(10);
    Decepticon d("Decepticon", 50, 5, 1, 100, &weapon, 100, "");
    std::ostringstream os;
    os << d;
    EXPECT_EQ(os.str(), "Power: 50, Ammo: 5, Level: 1, Health: 100");
}
TEST(Decepticon, ComparisonOperators)
{
    Weapons weapon1(10);
    Weapons weapon2(20);
    Decepticon d1("Megatron1", 50, 10, 1, 100, &weapon1, 50, "");
    Decepticon d2("Megatron2", 30, 5, 1, 100, &weapon2, 50, "");
    EXPECT_FALSE(d1 > d2);
    EXPECT_FALSE(d1 < d2);
    EXPECT_TRUE(d1 == d2);
}
TEST(Decepticon, MainConstructor)
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

TEST(Otherbots, DefaultConstructor)
{
    Weapons weapon(10);
    Otherbots o("Minicon", 100, &weapon, 50, "");
    EXPECT_EQ(o.getName(), "Minicon");
    EXPECT_EQ(o.getHealth(), 100);
    EXPECT_EQ(weapon.getDamage(), 10);
}
TEST(Otherbots, OutputOperator)
{
    Weapons weapon(10);
    Otherbots o("Minicon", 50, 5, 1, 100, &weapon, 100, "");
    std::ostringstream os;
    os << o;
    EXPECT_EQ(os.str(), "Power: 50, Ammo: 5, Level: 1, Health: 100");
}
TEST(Otherbots, ComparisonOperators)
{
    Weapons weapon1(10);
    Weapons weapon2(20);
    Otherbots o1("Minicon1", 50, 10, 1, 100, &weapon1, 50, "");
    Otherbots o2("Minicon2", 30, 5, 1, 100, &weapon2, 50, "");
    EXPECT_FALSE(o1 > o2);
    EXPECT_FALSE(o1 < o2);
    EXPECT_TRUE(o1 == o2);
}
TEST(Otherbots, MainConstructor)
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
