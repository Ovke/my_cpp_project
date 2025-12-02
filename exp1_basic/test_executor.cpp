#include <gtest/gtest.h>
#include "Executor.h"
// 初始状态测试
TEST(ExecutorTest, DefaultInit) {
    Executor ex;
    EXPECT_EQ(ex.getX(), 0);
    EXPECT_EQ(ex.getY(), 0);
    EXPECT_EQ(ex.getHeading(), 'N');
}
// 移动测试
TEST(ExecutorTest, MoveForward) {
    Executor ex;
    ex.execute("M");
    EXPECT_EQ(ex.getX(), 0);
    EXPECT_EQ(ex.getY(), 1);
}
// 左转测试
TEST(ExecutorTest, TurnLeft) {
    Executor ex;
    ex.execute("L");
    EXPECT_EQ(ex.getHeading(), 'W');
}
// 右转测试
TEST(ExecutorTest, TurnRight) {
    Executor ex;
    ex.execute("R");
    EXPECT_EQ(ex.getHeading(), 'E');
}
// 多指令测试
TEST(ExecutorTest, MultiCommands) {
    Executor ex;
    ex.execute("MRM");
    EXPECT_EQ(ex.getX(), 1);
    EXPECT_EQ(ex.getY(), 1);
    EXPECT_EQ(ex.getHeading(), 'E');
}
// 初始化测试
TEST(ExecutorTest, CustomInit) {
    Executor ex;
    ex.init(2, 3, 'S');
    EXPECT_EQ(ex.getX(), 2);
    EXPECT_EQ(ex.getY(), 3);
    EXPECT_EQ(ex.getHeading(), 'S');
}
// 前进 + 转向组合测试
TEST(ExecutorTest, PathTest) {
    Executor ex;
    ex.execute("MMRMM");
    EXPECT_EQ(ex.getX(), 2);
    EXPECT_EQ(ex.getY(), 2);
    EXPECT_EQ(ex.getHeading(), 'E');
}