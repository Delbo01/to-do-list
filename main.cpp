#include <iostream>
#include "Date.h"
#include "ToDoList.h"
#include "Activity.h"
#include "Controller.h"

int main() {
    ToDoList list;
    Controller controller(&list);
    try {
        Date date1(2021,8,25,16,30);
        Date date2(2021,9,20,15,0);
        controller.write(date1,"inizio allenamneti", false);
        controller.write(date2,"inizio campionato",false);

        controller.print();
    }
    catch (std::out_of_range &e) {
        std::cerr<<e.what()<<std::endl;
    }
}
