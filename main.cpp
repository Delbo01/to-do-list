#include <iostream>
#include "Date.h"
#include "ToDoList.h"
#include "Activity.h"


int main() {
    ToDoList list;
    try {
        Date date2(2021, 9, 13, 0, 0);
        std::unique_ptr<Activity> task2(new Activity(&date2, "appello lab.programmazione", false));
        list.addActivity(std::move(task2));

        Date date1(2021, 9, 1, 0, 0);
        std::unique_ptr<Activity> task1(new Activity(&date1, "comprare regalo compleanno", false));
        list.addActivity(std::move(task1));
        Date date3(2021,9,1,16,30);
        std::unique_ptr<Activity> task3(new Activity(&date3, "portare il gatto dal veterinario", false));
        list.addActivity(std::move(task3));

        std::cout<<"The activity of day are: "<<std::endl;
        list.printDAyActivity(date1);
        std::cout<<"All activity are: "<<std::endl;
        list.printAllList();
        list.clearAll();
    }
    catch (std::out_of_range &e) {
        std::cerr << e.what() << std::endl;
    }
}
