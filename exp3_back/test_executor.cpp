#include <gtest/gtest.h>
#include "Executor.h"

TEST(BackTest, BackOne){
    Executor e;
    e.execute("BM");
    EXPECT_EQ(e.getY(),-1);
    EXPECT_EQ(e.getHeading(),'N');
}

TEST(BackTest, BackTurn){
    Executor e;
    e.execute("BL");
    EXPECT_EQ(e.getHeading(),'E');
}