//
// Created by leonardo Del Bene on 20/08/21.
//

#ifndef TO_DO_LIST_TODOLIST_H
#define TO_DO_LIST_TODOLIST_H
#include "Activity.h"
#include <list>
#include <string>
#include <utility>

class ToDoList{
private:
    std::string title;
    std::list<std::unique_ptr<Activity>> list;
public:
    explicit ToDoList(std::string title): title(title){}
    virtual ~ToDoList()=default;

    void addActivity(const Activity& a);
    void removeActivity(const Activity &a);
    void printDAyActivity(Date date)const;
    void printActivitiesNotDone()const;
    void printActivitiesDone()const;
    void setTrueActivity(Activity&a);
    const std::string &getTitle() const;
    int getActivityToDo() const;
    int getActivityNotToDo()const;
};



#endif //TO_DO_LIST_TODOLIST_H
