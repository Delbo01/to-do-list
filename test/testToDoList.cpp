//
// Created by leonardo Del Bene on 06/09/21.
//
#include "gtest/gtest.h"
#include "../ToDoList.h"

TEST(toDoList_test,addActivity_test){
    ToDoList list("hobby");
    Date date(2021,9,27,9,30);
    const Activity& a= Activity(date,"partita calcetto", false);
    const Activity& a1= Activity(date,"portare casacche",true);
    list.addActivity(a);
    list.addActivity(a1);
    ASSERT_EQ(2, list.sizeList());
}
TEST(toDoList_test,getActivityToDo_test){
    ToDoList list("hobby");
    Date date(2021,9,27,9,30);
    const Activity& a= Activity(date,"partita calcetto", false);
    Date date1(2021,10,6,6,0);
    const Activity& a1=Activity(date1,"inizio campionato",false);
    list.addActivity(a);
    list.addActivity(a1);
    ASSERT_EQ(2,list.getActivityToDo());
}

TEST(toDoList_test,getActivityNotToDo_test){
    ToDoList list("hobby");
    Date date(2021,5,24,9,30);
    const Activity& a= Activity(date,"partita calcetto", true);
    Date date1(2021,9,9,20,30);
    const Activity& a1= Activity(date1,"amichevole pre campionato", true);
    list.addActivity(a);
    list.addActivity(a1);
    ASSERT_EQ(2,list.getActivityNotToDo());
}
TEST(toDoList_test,setTrueActivity_test){
    ToDoList list("hobby");
    Date date(2021,9,27,9,30);
    const Activity& a= Activity(date,"partita calcetto", false);
    list.addActivity(a);
    list.setTrueActivity(const_cast<Activity&>(a));
    ASSERT_EQ(1,list.getActivityNotToDo());
}