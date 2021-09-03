//
// Created by leonardo Del Bene on 03/09/21.
//

#include <iostream>
#include "AllList.h"

void AllList::add(ToDoList* list) {
    allList.insert(std::make_pair(list->getTitle(),list));
}

void AllList::remove(ToDoList* list) {
   auto it = allList.find(list->getTitle());
   if (it != allList.end())
       allList.erase(it);
   else
       std::cout<<"list not found"<<std::endl;

}

void AllList::printList(std::string title) {
    auto it = allList.find(title);
    if (it != allList.end())
        (it->second)->printAllList();
    else
        std::cout<<"list not found"<<std::endl;
}

void AllList::printDayActivity(Date date) {
    for (auto it: allList)
        (it.second)->printDAyActivity(date);
}

