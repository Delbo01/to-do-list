//
// Created by leonardo Del Bene on 20/08/21.
//

#include <iostream>
#include "ToDoList.h"

void toDoList::removeActivity(std::unique_ptr<Activity> a) {
    auto it = find(list.begin(),list.end(),a);
    if (it != list.end())
        list.remove(a);
    else
        std::cout<<"activity not found"<<std::endl;
}

void toDoList::addActivity(std::unique_ptr<Activity> a) {
    list.push_back(a);
}

void toDoList::clearAll() {
    list.clear();
}

void toDoList::printActivity(std::unique_ptr<Activity> a) {
    auto it =find(list.begin(),list.end(),a);
    if (it != list.end()) {
        std::cout << "Date of deadline: " << (a->getDateOfDeadline()).getDay() << "/"<< (a->getDateOfDeadline()).getMonth();
        std::cout<<"/"<<(a->getDateOfDeadline()).getYear()<<std::endl;
        std::cout<<"At: "<<(a->getDateOfDeadline()).getHour()<<":"<<(a->getDateOfDeadline()).getMinute()<<std::endl;
        std::cout<<"Task: "<<a->getTask()<<std::endl;
    }
}

void toDoList::printAllList() {
    for (auto it = list.begin();it != list.end() ; ++it) {
        if ((*it)->isDone()== false){
            std::cout<<"Date of deadline: "<<((*it)->getDateOfDeadline()).getDay()<<"/"<<((*it)->getDateOfDeadline()).getMonth();
            std::cout<<"/"<<((*it)->getDateOfDeadline()).getYear()<<std::endl;
            std::cout<<"At: "<<((*it)->getDateOfDeadline()).getHour()<<":"<<((*it)->getDateOfDeadline()).getMinute()<<std::endl;
            std::cout<<"Task: "<<(*it)->getTask()<<std::endl;
        }
    }
}


