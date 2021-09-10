//
// Created by leonardo Del Bene on 10/09/21.
//
#include "gtest/gtest.h"
#include "../AllList.h"

TEST(AllList_test, add_test){
    ToDoList list("hobby");
    AllList allList;
    allList.add(&list);
    ASSERT_EQ(allList.size(),1);
}
TEST(AllList_test,remove_test){
    ToDoList list("hobby");
    AllList allList;
    allList.add(&list);
    allList.remove(&list);
    ASSERT_EQ(allList.size(),0);
}
