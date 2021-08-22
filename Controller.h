//
// Created by leonardo Del Bene on 22/08/21.
//

#ifndef TO_DO_LIST_CONTROLLER_H
#define TO_DO_LIST_CONTROLLER_H
#include "ToDoList.h"
#include "Date.h"
#include "Activity.h"

class Controller{
private:
    ToDoList* list;
public:
    explicit Controller(ToDoList* list):list(list){}
    ~Controller()=default;

    void write(int year,int month,int day,int hour,int minute, std::string task,bool done=false);
    void printDayTask(int year,int month);
};



#endif //TO_DO_LIST_CONTROLLER_H
