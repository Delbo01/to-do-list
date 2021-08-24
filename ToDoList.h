//
// Created by leonardo Del Bene on 20/08/21.
//

#ifndef TO_DO_LIST_TODOLIST_H
#define TO_DO_LIST_TODOLIST_H
#include "Activity.h"
#include <list>
#include <string>

class ToDoList{
private:
    std::list<std::unique_ptr<Activity>> list;
public:
    explicit ToDoList()=default;
    ~ToDoList()=default;

    void addActivity(std::unique_ptr<Activity> a);
    void removeActivity(std::unique_ptr<Activity> a);
    void clearAll();
    void printDAyActivity(Date date);
    void printAllList();
};



#endif //TO_DO_LIST_TODOLIST_H
