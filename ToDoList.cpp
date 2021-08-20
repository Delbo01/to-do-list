//
// Created by leonardo Del Bene on 20/08/21.
//

#include <iostream>
#include "ToDoList.h"

void toDoList::removeActivity(std::unique_ptr<Activity> a) {
    list.remove(a);
}

void toDoList::addActivity(std::unique_ptr<Activity> a) {
    list.push_back(a);
}

void toDoList::clearAll() {
    list.clear();
}

