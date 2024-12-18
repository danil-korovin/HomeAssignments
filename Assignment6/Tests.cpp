/* Korovin Danil st128737@student.spbu.ru
   Assignment 6
*/

#include "Template.h"
#include "Tests.h"
#include <gtest/gtest.h>

TEST(Test1, Class1_true)
{
    Class1 c;
    Template<Class1> Obj(c, 1, {});
    EXPECT_TRUE(Obj.foo());
}

TEST(Test2, Class1_false)
{
    Class1 c;
    Template<Class1> Obj(c, -1, {});
    EXPECT_FALSE(Obj.foo());
}

TEST(Test3, Class2_true)
{
    Class2 c;
    std::vector<float> vec = {0.0f};
    Template<Class2> Obj(c, 0, vec);
    EXPECT_TRUE(Obj.foo());
}

TEST(Test4, Class2_false)
{
    Class2 c;
    std::vector<float> vec;
    Template<Class2> Obj(c, 0, vec);
    EXPECT_FALSE(Obj.foo());
}

TEST(Test5, Class3_true)
{
    Class3 c;
    std::vector<float> vec(2);
    Template<Class3> Obj(c, -2, vec);
    EXPECT_TRUE(Obj.foo());
}

TEST(Test6, Class3_false)
{
    Class3 c;
    std::vector<float> vec(2);
    Template<Class3> Obj(c, 5, vec);
    EXPECT_FALSE(Obj.foo());
}

TEST(Test7, Int)
{
    Template<int> Obj(0, 0, {});
    EXPECT_TRUE(Obj.foo());
}

TEST(Test8, Double)
{
    Template<double> Obj(0.0, 0, {});
    EXPECT_FALSE(Obj.foo());
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
