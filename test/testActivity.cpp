//
// Created by leonardo Del Bene on 06/09/21.
//
#include "gtest/gtest.h"
#include "../Activity.h"

TEST(activity_test,constructor_test){
    Date date(2021,4,5,8,30);
    Activity task(date,"fare la spesa", false);
    ASSERT_EQ(date, task.getDateOfDeadline());
    ASSERT_EQ("fare la spesa",task.getTask());
    ASSERT_EQ(false,task.isDone());
}
