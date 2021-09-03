//
// Created by leonardo Del Bene on 20/08/21.
//

#include <iostream>
#include <algorithm>
#include "ToDoList.h"

void ToDoList::removeActivity(const Activity &a) {
    std::unique_ptr<Activity>task(new Activity(a));
    //std::list<std::unique_ptr<Activity>>::iterator it;
    //it = find(list.begin(), list.end(), task);
    //if (it != list.end()) {
    list.remove(std::move(task));
    setCountElement(getCountElement()-1);
   // } else
    //    std::cout << "activity not found" << std::endl;
}

void ToDoList::addActivity(const Activity& a) {
    std::unique_ptr<Activity>task(new Activity(a));
    list.push_back(std::move(task));
    setCountElement(getCountElement()+1);
}

void ToDoList::printDAyActivity(Date date) {
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

void ToDoList::printAllList() {
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

int ToDoList::getCountElement() const {
    return countElement;
}

void ToDoList::setCountElement(int countElement) {
    ToDoList::countElement = countElement;
}