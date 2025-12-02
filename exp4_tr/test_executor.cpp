#include <gtest/gtest.h>
#include "Executor.h"

TEST(TurnRound, BasicTR) {
    Executor e;
    e.execute("TR");
    EXPECT_EQ(e.getX(), -1);
    EXPECT_EQ(e.getY(), 0);
    EXPECT_EQ(e.getHeading(), 'S');
}

TEST(TurnRound, FastTR) {
    Executor e;
    e.execute("FTR");
    EXPECT_EQ(e.getX(), -1);
    EXPECT_EQ(e.getY(), 1);
    EXPECT_EQ(e.getHeading(), 'S');
}