//
// Created by leonardo Del Bene on 20/08/21.
//

#include <iostream>
#include "ToDoList.h"

void ToDoList::removeActivity(std::unique_ptr<Activity> a) {
    auto it = find(list.begin(),list.end(),a);
    if (it != list.end())
        list.remove(std::move(a));
    else
        std::cout<<"activity not found"<<std::endl;
}

void ToDoList::addActivity(std::unique_ptr<Activity> a) {
    list.push_back(std::move(a));
}

void ToDoList::clearAll() {
    list.clear();
}

void ToDoList::printActivity(std::unique_ptr<Activity> a) {
    auto it =find(list.begin(),list.end(),a);
    if (it != list.end()) {
        std::cout << "Date of deadline: " << (a->getDateOfDeadline()).getDay() << "/"<< (a->getDateOfDeadline()).getMonth();
        std::cout<<"/"<<(a->getDateOfDeadline()).getYear()<<std::endl;
        std::cout<<"At: "<<(a->getDateOfDeadline()).getHour()<<":"<<(a->getDateOfDeadline()).getMinute()<<std::endl;
        std::cout<<"Task: "<<a->getTask()<<std::endl;
    }
}

void ToDoList::printAllList() {
    for (auto it = list.begin();it != list.end() ; ++it) {
        if ((*it)->isDone()== false){
            std::cout<<"Date of deadline: "<<((*it)->getDateOfDeadline()).getDay()<<"/"<<((*it)->getDateOfDeadline()).getMonth();
            std::cout<<"/"<<((*it)->getDateOfDeadline()).getYear()<<std::endl;
            std::cout<<"At: "<<((*it)->getDateOfDeadline()).getHour()<<":"<<((*it)->getDateOfDeadline()).getMinute()<<std::endl;
            std::cout<<"Task: "<<(*it)->getTask()<<std::endl;
        }
    }
}


