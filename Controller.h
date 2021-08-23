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

    void write(Date date, std::string task,bool done=false);
    void printDayTask(Date date);
    void print();
};



#endif //TO_DO_LIST_CONTROLLER_H
