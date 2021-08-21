#include <iostream>
#include "Date.h"
#include "ToDoList.h"
#include "Activity.h"

int main() {
    ToDoList list("sport");
    Date date1(2021,8,25,16,30);
    std::unique_ptr<Activity>task1;
    task1->setDateOfDeadline(date1);
    task1->setActivity("andare a comprare scarpe da calcio");
    task1->setDone(false);
    list.addActivity(std::move(task1));
}
