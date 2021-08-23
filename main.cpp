#include <iostream>
#include "Date.h"
#include "ToDoList.h"
#include "Activity.h"


int main() {
    ToDoList list;
    try {
        Date date2(2021,10,5,8,30);
        std::unique_ptr<Activity>task2(new Activity(&date2,"babaganoush",false));
        list.addActivity(std::move(task2));

        Date date1(2021,9,27,0,0);
        std::unique_ptr<Activity>task1(new Activity(&date1,"compleanno",false));
        list.addActivity(std::move(task1));

        std::unique_ptr<Activity>task3(new Activity(&date1,"merda",false));
        list.addActivity(std::move(task3));

        //list.printDAyActivity(date1);
        //list.removeActivity(std::move(task1));
        list.sortList();
        list.printAllList();
        list.clearAll();

    }
    catch (std::out_of_range& e) {
        std::cerr<<e.what()<<std::endl;
    }
}
