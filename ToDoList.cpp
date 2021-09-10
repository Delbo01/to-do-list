//
// Created by leonardo Del Bene on 20/08/21.
//

#include <iostream>
#include <algorithm>
#include "ToDoList.h"


void ToDoList::removeActivity(const Activity &a) {
    Date date2(1,1,1,1,1);
    date2= a.getDateOfDeadline();
    for (auto& element:list) {
        std::string task=element->getTask();
        if (task==a.getTask())
            if (element->getDateOfDeadline()==date2)
                list.remove(element);
    }
}
void ToDoList::addActivity(const Activity& a) {
    list.push_back(std::unique_ptr<Activity>(new Activity(a)));
}

void ToDoList::printDAyActivity(const Date &date) const{
    Date date1(1, 1, 1, 0, 0);
    for (auto &it : list) {
        date1 = it->getDateOfDeadline();
        if (date == date1) {
            std::cout << "Date of deadline: " << (it->getDateOfDeadline()).getDay() << "/"
                      << (it->getDateOfDeadline()).getMonth();
            std::cout << "/" << (it->getDateOfDeadline()).getYear() << std::endl;
            std::cout << "At: " << (it->getDateOfDeadline()).getHour() << ":" << (it->getDateOfDeadline()).getMinute()
                      << std::endl;
            std::cout << "Task: " << it->getTask() << std::endl;
            std::cout << "Done: " << it->isDone() << std::endl;
        }
    }
}

void ToDoList::printActivitiesNotDone() const{
    for (auto &it :list) {
        if (!it->isDone()) {
            std::cout << "Date of deadline: " << ((it)->getDateOfDeadline()).getDay() << "/"
                      << ((it)->getDateOfDeadline()).getMonth();
            std::cout << "/" << ((it)->getDateOfDeadline()).getYear() << std::endl;
            std::cout << "At: " << ((it)->getDateOfDeadline()).getHour() << ":"
                      << ((it)->getDateOfDeadline()).getMinute() << std::endl;
            std::cout << "Task: " << (it)->getTask() << std::endl;
        }
    }
}

const std::string &ToDoList::getTitle() const {
    return title;
}

int ToDoList::getActivityToDo() const {
    int count=0;
    for (auto& element:list) {
        if (!element->isDone())
            count++;
    }
    return count;
}


void ToDoList::setTrueActivity(Activity &a) {
    Date date1(1,1,1,1,1);
    Date date2(1,1,1,1,1);
    date2= a.getDateOfDeadline();
    for (auto& element:list){
        date1= element->getDateOfDeadline();
        if (element->getTask() == a.getTask())
            if (date1==date2)
                element->setDone(true);

    }
}

int ToDoList::getActivityNotToDo() const {
    int count=0;
    for (auto& element:list){
        if (element->isDone())
            count++;
    }
    return count;
}

void ToDoList::printActivitiesDone() const{
    for (auto &it :list) {
        if (it->isDone()) {
            std::cout << "Date of deadline: " << ((it)->getDateOfDeadline()).getDay() << "/"
                      << ((it)->getDateOfDeadline()).getMonth();
            std::cout << "/" << ((it)->getDateOfDeadline()).getYear() << std::endl;
            std::cout << "At: " << ((it)->getDateOfDeadline()).getHour() << ":"
                      << ((it)->getDateOfDeadline()).getMinute() << std::endl;
            std::cout << "Task: " << (it)->getTask() << std::endl;
        }
    }
}