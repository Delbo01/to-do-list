//
// Created by leonardo Del Bene on 03/09/21.
//

#include <iostream>
#include "AllList.h"

void AllList::add( ToDoList* list) {
    allList.insert(std::make_pair(list->getTitle(),list));
}

void AllList::remove(ToDoList* list) {
   auto it = allList.find(list->getTitle());
   if (it != allList.end())
       allList.erase(it);
   else
       std::cout<<"list not found"<<std::endl;

}

void AllList::printList(const std::string& title)const {
    auto it = allList.find(title);
    if (it != allList.end()){
        std::cout<<"Activities not done are:"<<std::endl;
        (it->second)->printActivitiesNotDone();
        std::cout<<"Activities done are:"<<std::endl;
        (it->second)->printActivitiesDone();
    }
    else
        std::cout<<"list not found"<<std::endl;
}

void AllList::printDayActivity(const Date &date) const{
    for (auto& it: allList)
        (it.second)->printDAyActivity(date);
}

void AllList::ActivityToDo() const{
    for (auto& it:allList)
        std::cout << "Count of task to do of list: " << it.first << " are " << (it.second)->getActivityToDo() << std::endl;
}

void AllList::ActivityNotToDo()const {
    for (auto& it:allList)
        std::cout << "Count of task not to do of list: " << it.first << " are " << (it.second)->getActivityNotToDo()<<std::endl;
}

