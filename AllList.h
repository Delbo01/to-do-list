//
// Created by leonardo Del Bene on 03/09/21.
//

#ifndef TO_DO_LIST_ALLLIST_H
#define TO_DO_LIST_ALLLIST_H
#include "ToDoList.h"
#include <map>

class AllList{
private:
    std::map<std::string,ToDoList*> allList;
public:
    AllList()=default;
    ~AllList()=default;

    void add(ToDoList* list);
    void remove(ToDoList* list);
    void printList(std::string title);
    void printDayActivity(Date date);
};
#endif //TO_DO_LIST_ALLLIST_H
