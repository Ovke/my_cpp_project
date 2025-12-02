#include <gtest/gtest.h>
#include "../include/Executor.h"
#include "../include/SportCar.h"
#include "../include/Bus.h"

TEST(ExecutorTest, SportCarMove) {
    SportCar car;
    Executor exe(&car);
    exe.init(0, 0, 'N');

    exe.run("M");
    auto [x, y, h] = exe.query();

    EXPECT_EQ(x, 0);
    EXPECT_EQ(y, 2);
    EXPECT_EQ(h, 'N');
}
TEST(ExecutorTest, BusMove) {
    Bus bus;
    Executor exe(&bus);
    exe.init(0, 0, 'N');

    exe.run("M");
    auto [x, y, h] = exe.query();

    EXPECT_EQ(x, 0);
    EXPECT_EQ(y, 1);
    EXPECT_EQ(h, 'N');
}
TEST(ExecutorTest, FastMode) {
    SportCar car;
    Executor exe(&car);
    exe.init(0, 0, 'E');

    exe.run("F");  // 开启加速
    exe.run("M");

    auto [x, y, h] = exe.query();

    EXPECT_EQ(x, 4);  // 跑车本身 M=2，加速再×2，总 4
    EXPECT_EQ(y, 0);
    EXPECT_EQ(h, 'E');
}
TEST(ExecutorTest, BackMode) {
    Bus bus;
    Executor exe(&bus);
    exe.init(0, 0, 'N');

    exe.run("B");
    exe.run("M");

    auto [x, y, h] = exe.query();

    EXPECT_EQ(x, 0);
    EXPECT_EQ(y, -1);
    EXPECT_EQ(h, 'N');
}

TEST(ExecutorTest, TurnRoundNormal) {
    Bus bus;
    Executor exe(&bus);
    exe.init(0, 0, 'N');

    exe.run("TR");
    auto [x, y, h] = exe.query();

    EXPECT_EQ(x, -1);
    EXPECT_EQ(y, 0);
    EXPECT_EQ(h, 'S');
}