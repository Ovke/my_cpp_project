#include <gtest/gtest.h>
#include "Executor.h"

TEST(SpeedTest, ForwardFast){
    Executor e;
    e.execute("FM");
    EXPECT_EQ(e.getY(),2);
}

TEST(SpeedTest, TurnFast){
    Executor e;
    e.execute("FL");
    EXPECT_EQ(e.getY(),1);
    EXPECT_EQ(e.getHeading(),'W');
}